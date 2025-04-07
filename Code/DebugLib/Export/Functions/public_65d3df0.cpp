#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);

PROC_DECLARE(0x65d3df0, internal_65d3df0, public_65d3df0);
extern "C" NAKED register_t __cdecl internal_65d3df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [eax+ecx], 0
        ret 4
        UNREACHABLE_TRAP(0x65d3df0)
    }
}
