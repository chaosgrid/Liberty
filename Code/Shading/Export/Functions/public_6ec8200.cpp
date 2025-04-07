#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8200);

PROC_DECLARE(0x6ec8200, internal_6ec8200, public_6ec8200);
extern "C" NAKED register_t __cdecl internal_6ec8200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6ec8200)
    }
}
