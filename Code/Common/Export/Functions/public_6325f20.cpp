#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63047d0);
CLANG_FORWARD_PROC_SYMBOL(public_6326250);

PROC_DECLARE(0x6325f20, internal_6325f20, public_6325f20);
extern "C" NAKED register_t __cdecl internal_6325f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63ed600]
        push ebx
        push eax
        push 0x80
/*FIXUP push offset public_6409594 @0x6325f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6409594
        mov dword ptr ds : [public_6409588], offset public_6409594
        call public_63047d0
        mov ecx, dword ptr ds : [public_63ed600]
        push ecx
        xor ebx, ebx
        push 0x80
/*FIXUP push offset public_6409620 @0x6325f4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6409620
        mov dword ptr ds : [public_640958c], 0x16
        mov byte ptr ds : [public_6409590], bl
        mov byte ptr ds : [public_6409591], bl
        mov byte ptr ds : [public_6409592], bl
        mov dword ptr ds : [public_6409614], offset public_6409620
        call public_63047d0
        mov edx, dword ptr ds : [public_63ed604]
        push edx
        push 0x80
/*FIXUP push offset public_64096ac @0x6325f8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_64096ac
        mov dword ptr ds : [public_6409618], 0x1A
        mov byte ptr ds : [public_640961c], bl
        mov byte ptr ds : [public_640961d], bl
        mov byte ptr ds : [public_640961e], bl
        mov dword ptr ds : [public_64096a0], offset public_64096ac
        call public_63047d0
        mov eax, dword ptr ds : [public_63ed604]
        add esp, 0x24
        push ebx
        push ebx
        push ebx
        push 0x12
        push eax
        mov ecx, offset public_640972c
        mov dword ptr ds : [public_64096a4], 0x10
        mov byte ptr ds : [public_64096a8], bl
        mov byte ptr ds : [public_64096a9], bl
        mov byte ptr ds : [public_64096aa], bl
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push ecx
        mov ecx, offset public_64097b8
        call public_6326250
        mov edx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push edx
        mov ecx, offset public_6409844
        call public_6326250
        mov eax, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push eax
        mov ecx, offset public_64098d0
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push ecx
        mov ecx, offset public_640995c
        call public_6326250
        mov edx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push edx
        mov ecx, offset public_64099e8
        call public_6326250
        mov eax, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push eax
        mov ecx, offset public_6409a74
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push ecx
        mov ecx, offset public_6409b00
        call public_6326250
        mov edx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push edx
        mov ecx, offset public_6409b8c
        call public_6326250
        mov eax, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push eax
        mov ecx, offset public_6409c18
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push ecx
        mov ecx, offset public_6409ca4
        call public_6326250
        mov edx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push edx
        mov ecx, offset public_6409d30
        call public_6326250
        mov eax, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push eax
        mov ecx, offset public_6409dbc
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push ecx
        mov ecx, offset public_6409e48
        call public_6326250
        mov edx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push edx
        mov ecx, offset public_6409ed4
        call public_6326250
        mov eax, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push eax
        mov ecx, offset public_6409f60
        call public_6326250
        push ebx
        mov ecx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push 0x12
        push ecx
        mov ecx, offset public_6409fec
        call public_6326250
        mov edx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push edx
        mov ecx, offset public_640a078
        call public_6326250
        mov eax, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push eax
        mov ecx, offset public_640a104
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push ecx
        mov ecx, offset public_640a190
        call public_6326250
        mov edx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push edx
        mov ecx, offset public_640a21c
        call public_6326250
        mov eax, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push eax
        mov ecx, offset public_640a2a8
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x1A
        push ecx
        mov ecx, offset public_640a334
        call public_6326250
        mov edx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push edx
        mov ecx, offset public_640a3c0
        call public_6326250
        mov eax, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push eax
        mov ecx, offset public_640a44c
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed600]
        push ebx
        push ebx
        push ebx
        push 0x16
        push ecx
        mov ecx, offset public_640a4d8
        call public_6326250
        push ebx
        push ebx
        mov edx, dword ptr ds : [public_63ed600]
        push ebx
        push 0x1A
        push edx
        mov ecx, offset public_640a564
        call public_6326250
        mov eax, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x10
        push eax
        mov ecx, offset public_640a5f0
        call public_6326250
        mov ecx, dword ptr ds : [public_63ed604]
        push ebx
        push ebx
        push ebx
        push 0x12
        push ecx
        mov ecx, offset public_640a67c
        call public_6326250
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6325f20)
    }
}
