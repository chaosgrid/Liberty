#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ce320);

#define public_62ce334 _public_62ce334

PROC_DECLARE(0x62ce320, internal_62ce320, public_62ce320);
extern "C" NAKED register_t __cdecl internal_62ce320()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        lea eax, ds:[ecx+8]
        fcos 
        mov ecx, 3
        fld dword ptr ss : [esp+4]
        fsin 
        public_62ce334 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62ce334
        fstp st(0)
        fstp st(0)
        ret 4
        UNREACHABLE_TRAP(0x62ce320)
    }
}

#undef public_62ce334
