#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6243c50);

#define public_6243cb5 _public_6243cb5
#define public_6243cfa _public_6243cfa

PROC_DECLARE(0x6243c50, internal_6243c50, public_6243c50);
extern "C" NAKED register_t __cdecl internal_6243c50()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_624d4c4]
        lea eax, ds:[ecx+0x18]
        lea edx, ds:[ecx+0xC]
        mov dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        mov dword ptr ds : [ecx+0x14], 0
        mov dword ptr ds : [ecx+0x1C], 0
        fst dword ptr ss : [esp+0xC]
        fcos 
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [esp+0xC]
        fsin 
        fld st(1)
        fstp dword ptr ds : [ecx]
        fst dword ptr ds : [ecx+8]
        fchs 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_624d4c4]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0xC]
        fsin 
        public_6243cb5 : nop
        fld dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax]
        add eax, 4
        dec ecx
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_6243cb5
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_624d4c4]
        mov eax, edx
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0xC]
        fsin 
        public_6243cfa : nop
        fld dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax]
        add eax, 4
        dec ecx
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_6243cfa
        fstp st(0)
        ret 0xC
        UNREACHABLE_TRAP(0x6243c50)
    }
}

#undef public_6243cb5
#undef public_6243cfa
