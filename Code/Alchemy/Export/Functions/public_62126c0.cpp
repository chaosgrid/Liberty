#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62126c0);

PROC_DECLARE(0x62126c0, internal_62126c0, public_62126c0);
extern "C" NAKED register_t __cdecl internal_62126c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62126c0)
    }
}
