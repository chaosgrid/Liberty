#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3cf0);

PROC_DECLARE(0x65d3cf0, internal_65d3cf0, public_65d3cf0);
extern "C" NAKED register_t __cdecl internal_65d3cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x65d3cf0)
    }
}
