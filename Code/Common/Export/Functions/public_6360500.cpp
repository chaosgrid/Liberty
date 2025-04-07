#include "Common-PCH.h"


#define public_6360549 _public_6360549
#define public_6360558 _public_6360558
#define public_6360567 _public_6360567
#define public_6360595 _public_6360595

PROC_DECLARE(0x6360500, internal_6360500, public_6360500);
extern "C" NAKED register_t __cdecl internal_6360500()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+0x98]
        fld dword ptr ds : [edx+0x14C]
        mov eax, dword ptr ds : [edx+4]
        fadd dword ptr ds : [edx+0x144]
        mov dword ptr ss : [esp], eax
        fadd dword ptr ds : [public_63a53d8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x24]
        fst dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6360549
        fstp st(0)
        fld dword ptr ss : [esp]
        public_6360549 : nop
        fcom dword ptr ds : [ecx+0x28]
        fnstsw ax
        test ah, 1
        je public_6360558
        fstp st(0)
        fld dword ptr ds : [ecx+0x28]
        public_6360558 : nop
        fcom dword ptr ds : [ecx+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_6360567
        fstp st(0)
        fld dword ptr ds : [ecx+0x2C]
        public_6360567 : nop
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0xAC]
        fmul dword ptr ss : [esp+8]
        fsubp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x30]
        fadd dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+8]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 1
        je public_6360595
        fstp st(0)
        fld dword ptr ss : [esp+8]
        public_6360595 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6360500)
    }
}

#undef public_6360549
#undef public_6360558
#undef public_6360567
#undef public_6360595
