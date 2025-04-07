#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626e5d0);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x626e5d0, internal_626e5d0, public_626e5d0);
extern "C" NAKED register_t __cdecl internal_626e5d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xAC]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], eax
        mov ecx, esi
        pop esi
        jmp public_62f02b0
        UNREACHABLE_TRAP(0x626e5d0)
    }
}
