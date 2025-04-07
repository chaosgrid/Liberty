#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbfc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc1f0);

PROC_DECLARE(0x6ecbfc0, internal_6ecbfc0, public_6ecbfc0);
extern "C" NAKED register_t __cdecl internal_6ecbfc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ds:[eax-4]
        jmp public_6ecc1f0
        UNREACHABLE_TRAP(0x6ecbfc0)
    }
}
