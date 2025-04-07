#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);

PROC_DECLARE(0x626fe90, internal_626fe90, public_626fe90);
extern "C" NAKED register_t __cdecl internal_626fe90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62f01f0
        mov dword ptr ds : [esi], offset public_6399d88
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626fe90)
    }
}
