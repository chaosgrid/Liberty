#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6348150);

PROC_DECLARE(0x6348150, internal_6348150, public_6348150);
extern "C" NAKED register_t __cdecl internal_6348150()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6347e60
        fdivr dword ptr ds : [public_63a53d0]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ds : [esi+0xC]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6348150)
    }
}
