#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34db0);

PROC_DECLARE(0x6c34db0, internal_6c34db0, public_6c34db0);
extern "C" NAKED register_t __cdecl internal_6c34db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6c34db0)
    }
}
