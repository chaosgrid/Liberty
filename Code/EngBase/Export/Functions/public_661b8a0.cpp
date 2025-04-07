#include "EngBase-PCH.h"


#define public_661b8ed _public_661b8ed
#define public_661b902 _public_661b902
#define public_661b91e _public_661b91e

PROC_DECLARE(0x661b8a0, internal_661b8a0, public_661b8a0);
extern "C" NAKED register_t __cdecl internal_661b8a0()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x40], 2
        jne public_661b91e
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fsubr st, st(1)
        fcom dword ptr ds : [public_66294f4]
        fnstsw ax
        test ah, 5
        jp public_661b8ed
        fstp st(0)
        fadd dword ptr ds : [public_66294f0]
        mov eax, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0xC]
        fmul qword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        ret 0x14
        public_661b8ed : nop
        fcomp dword ptr ds : [public_66294ec]
        fnstsw ax
        and eax, 0x4100
        jne public_661b902
        fsub dword ptr ds : [public_66294f0]
        public_661b902 : nop
        fsub dword ptr ss : [esp+0xC]
        fmul qword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        ret 0x14
        public_661b91e : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [eax]
        fmul qword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        ret 0x14
        UNREACHABLE_TRAP(0x661b8a0)
    }
}

#undef public_661b8ed
#undef public_661b902
#undef public_661b91e
