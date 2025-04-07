#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);

PROC_DECLARE(0x6c31ff0, internal_6c31ff0, public_6c31ff0);
extern "C" NAKED register_t __cdecl internal_6c31ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx*8]
        ret 4
        UNREACHABLE_TRAP(0x6c31ff0)
    }
}
