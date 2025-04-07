#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8f90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6ef8f90, internal_6ef8f90, public_6ef8f90);
extern "C" NAKED register_t __cdecl internal_6ef8f90()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], 0x41200000
        mov byte ptr ds : [esi+8], bl
        mov byte ptr ds : [esi+9], bl
        mov dword ptr ds : [esi+0xC], ebx
        push 0x10
        mov byte ptr ds : [esi+0x10], al
        call public_6fa912a
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], 0x40400000
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x20], cl
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x30], 0xBF800000
        mov byte ptr ds : [esi+0x34], 1
        mov edx, dword ptr ds : [public_6fb7a64]
        add esp, 4
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], edx
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef8f90)
    }
}
