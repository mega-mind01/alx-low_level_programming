#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void find_elf(unsigned char *elf_ident);
void print_magic_num(unsigned char *elf_ident);
void print_elf_class(unsigned char *elf_ident);
void print_elf_data(unsigned char *elf_ident);
void print_elf_version(unsigned char *elf_ident);
void print_elf_abi(unsigned char *elf_ident);
void print_elf_os_abi(unsigned char *elf_ident);
void print_elf_type(unsigned int elf_type, unsigned char *elf_ident);
void print_elf_entry(unsigned long int elf_entry, unsigned char *elf_ident);
void close_elf(int elf);

/**
 * find_elf - confirm elf file
 * @elf_ident: pointer to elf magic num
 */

void find_elf(unsigned char *elf_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (elf_ident[idx] != 127 &&
		    elf_ident[idx] != 'E' &&
		    elf_ident[idx] != 'L' &&
		    elf_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_num - print elf magic num to STDOUT
 * @elf_ident: pointer to array with magic num
 */

void print_magic_num(unsigned char *elf_ident)
{
	int idx;

	printf(" Magic: ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", elf_ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - prints the elf
 * @elf_ident: array of the elf class
 */

void print_elf_class(unsigned char *elf_ident)
{
	printf(" Class: ");

	switch (elf_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
 * print_elf_data - prints elf data
 * @elf_ident: array pointer to the elf class
 */

void print_elf_data(unsigned char *elf_ident)
{
	printf(" Data: ");

	switch (elf_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
 * print_elf_version - prints elf version
 * @elf_ident: pointer array
 */

void print_elf_version(unsigned char *elf_ident)
{
	 printf(" Version: %d",
			  elf_ident[EI_VERSION]);

	switch (elf_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_os_abi - prints OS/ABI of the elf
 * @elf_ident: A pointer to an array containing the ELF version.
 */

void print_elf_os_abi(unsigned char *elf_ident)
{
	printf(" OS/ABI: ");

	switch (elf_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_OSABI]);
	}
}

/**
 * print_elf_abi - prints the ABI verion
 * @elf_ident: array pointer to elf
 */

void print_elf_abi(unsigned char *elf_ident)
{
	printf(" ABI Version: %d\n",
		elf_ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - prints elf type
 * @elf_type: elf type
 * @elf_ident: pointer array to elf
 */

void print_elf_type(unsigned int elf_type, unsigned char *elf_ident)
{
	if (elf_ident[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * print_elf_entry - prints entry point of elf
 * @elf_entry: poiter to entry point
 * @elf_ident: pointer to the array
 */

void print_elf_entry(unsigned long int elf_entry, unsigned char *elf_ident)
{
	printf(" Entry point address: ");

	if (elf_ident[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			  ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf - Closes elf
 * @elf: The file
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - prints the elf header
 *
 * @argc: count of arg
 * @argv: vector array
 *
 * Return: 0 on success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int file, read_file;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(file, header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header);
		close_elf(file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	find_elf(header->elf_ident);
	printf("ELF Header:\n");
	print_magic_num(header->elf_ident);
	print_elf_class(header->elf_ident);
	print_elf_data(header->elf_ident);
	print_elf_version(header->elf_ident);
	print_elf_os_abi(header->elf_ident);
	print_elf_abi(header->elf_ident);
	print_elf_type(header->elf_type, header->elf_ident);
	print_elf_entry(header->elf_entry, header->elf_ident);

	free(header);
	close_elf(file);
	return (0);
}
