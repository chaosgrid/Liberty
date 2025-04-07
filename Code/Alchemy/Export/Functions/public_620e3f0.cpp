#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e3f0);

PROC_DECLARE(0x620e3f0, internal_620e3f0, public_620e3f0);
extern "C" NAKED register_t __cdecl internal_620e3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620e3f0)
    }
}
