#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ee50);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x626ee50, internal_626ee50, public_626ee50);
extern "C" NAKED register_t __cdecl internal_626ee50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xC4], eax
        mov dword ptr ds : [esi+0xC8], eax
        mov ecx, esi
        pop esi
        jmp public_62f02b0
        UNREACHABLE_TRAP(0x626ee50)
    }
}
