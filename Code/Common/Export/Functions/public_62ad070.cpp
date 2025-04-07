#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ad070);
CLANG_FORWARD_PROC_SYMBOL(public_62afa90);

PROC_DECLARE(0x62ad070, internal_62ad070, public_62ad070);
extern "C" NAKED register_t __cdecl internal_62ad070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62afa90
        mov byte ptr ds : [esi+0x11C], 0
        mov dword ptr ds : [esi], offset public_639bd1c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ad070)
    }
}
