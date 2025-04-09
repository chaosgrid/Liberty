#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457f00);

PROC_DECLARE(0x457f00, internal_457f00, public_457f00);
extern "C" NAKED register_t __cdecl internal_457f00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        ret 4
        UNREACHABLE_TRAP(0x457f00)
    }
}
