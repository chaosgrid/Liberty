#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c60);

PROC_DECLARE(0x6235c60, internal_6235c60, public_6235c60);
extern "C" NAKED register_t __cdecl internal_6235c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        inc ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6235c60)
    }
}
