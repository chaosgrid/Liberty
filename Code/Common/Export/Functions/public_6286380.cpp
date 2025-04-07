#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afa90);

PROC_DECLARE(0x6286380, internal_6286380, public_6286380);
extern "C" NAKED register_t __cdecl internal_6286380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62afa90
        mov dword ptr ds : [esi], offset public_639bbbc
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6286380)
    }
}
