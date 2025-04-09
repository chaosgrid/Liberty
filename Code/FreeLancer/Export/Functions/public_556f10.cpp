#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556f10);

PROC_DECLARE(0x556f10, internal_556f10, public_556f10);
extern "C" NAKED register_t __cdecl internal_556f10()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x20]
        ret 
        UNREACHABLE_TRAP(0x556f10)
    }
}
