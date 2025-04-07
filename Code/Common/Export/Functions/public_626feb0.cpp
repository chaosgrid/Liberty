#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);

PROC_DECLARE(0x626feb0, internal_626feb0, public_626feb0);
extern "C" NAKED register_t __cdecl internal_626feb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62f03c0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626feb0)
    }
}
