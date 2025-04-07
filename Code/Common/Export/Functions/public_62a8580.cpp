#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8580);
CLANG_FORWARD_PROC_SYMBOL(public_62afa90);

PROC_DECLARE(0x62a8580, internal_62a8580, public_62a8580);
extern "C" NAKED register_t __cdecl internal_62a8580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62afa90
        mov dword ptr ds : [esi], offset public_639e014
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8580)
    }
}
