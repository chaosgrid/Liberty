#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ce360);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);

PROC_DECLARE(0x62ce360, internal_62ce360, public_62ce360);
extern "C" NAKED register_t __cdecl internal_62ce360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62d2020
        mov dword ptr ds : [esi], offset public_639fd4c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ce360)
    }
}
