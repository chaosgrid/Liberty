#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4760);

PROC_DECLARE(0x6eb4760, internal_6eb4760, public_6eb4760);
extern "C" NAKED register_t __cdecl internal_6eb4760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6eb4760)
    }
}
