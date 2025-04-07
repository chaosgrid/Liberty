#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dc410);

PROC_DECLARE(0x62dc410, internal_62dc410, public_62dc410);
extern "C" NAKED register_t __cdecl internal_62dc410()
{
    __asm
    {
        fld dword ptr ds : [public_639a1d0]
        mov eax, ecx
        fdiv dword ptr ss : [esp+4]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62dc410)
    }
}
