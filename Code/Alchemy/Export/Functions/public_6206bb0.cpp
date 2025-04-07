#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);

PROC_DECLARE(0x6206bb0, internal_6206bb0, public_6206bb0);
extern "C" NAKED register_t __cdecl internal_6206bb0()
{
    __asm
    {
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+4]
        mov eax, ecx
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6206bb0)
    }
}
