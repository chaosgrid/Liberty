#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec81e0);

PROC_DECLARE(0x6ec81e0, internal_6ec81e0, public_6ec81e0);
extern "C" NAKED register_t __cdecl internal_6ec81e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6ec81e0)
    }
}
