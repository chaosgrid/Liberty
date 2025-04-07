#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2aff0);

PROC_DECLARE(0x6c2aff0, internal_6c2aff0, public_6c2aff0);
extern "C" NAKED register_t __cdecl internal_6c2aff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6c2aff0)
    }
}
