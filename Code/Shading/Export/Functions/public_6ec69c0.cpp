#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69c0);

PROC_DECLARE(0x6ec69c0, internal_6ec69c0, public_6ec69c0);
extern "C" NAKED register_t __cdecl internal_6ec69c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6ec69c0)
    }
}
