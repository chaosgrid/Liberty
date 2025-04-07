#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);

#define public_40f979 _public_40f979
#define public_40fa0a _public_40fa0a

PROC_DECLARE(0x40f8c0, internal_40f8c0, public_40f8c0);
extern "C" NAKED register_t __cdecl internal_40f8c0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c77f4]
        mov dword ptr ds : [ecx+0x98], eax
        xor edx, edx
        fptan 
        fstp st(0)
        fld st(0)
        fdiv dword ptr ds : [ecx+0xA0]
        fst dword ptr ss : [esp+4]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x9C]
        mov dword ptr ds : [ecx+0x80], 0x3F800000
        mov dword ptr ds : [ecx+0x84], edx
        fst dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x84]
        fld dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x80]
        fstp dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul dword ptr ds : [ecx+0x84]
        fstp dword ptr ds : [ecx+0x84]
        fmul dword ptr ds : [ecx+0x88]
        fstp dword ptr ds : [ecx+0x88]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40f979
        fld dword ptr ds : [ecx+0x70]
        fdiv st, st(1)
        fstp dword ptr ds : [ecx+0x78]
        public_40f979 : nop
        fstp st(0)
        mov dword ptr ds : [ecx+0x8C], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x90], 0x3F800000
        mov dword ptr ds : [ecx+0x94], edx
        fld dword ptr ds : [ecx+0x94]
        fld dword ptr ds : [ecx+0x90]
        fld dword ptr ds : [ecx+0x8C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x8C]
        fstp dword ptr ds : [ecx+0x8C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x90]
        fstp dword ptr ds : [ecx+0x90]
        fmul dword ptr ds : [ecx+0x94]
        fstp dword ptr ds : [ecx+0x94]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40fa0a
        fld dword ptr ds : [ecx+0x74]
        fdiv dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ds : [ecx+0x7C]
        public_40fa0a : nop
        ret 4
        UNREACHABLE_TRAP(0x40f8c0)
    }
}

#undef public_40f979
#undef public_40fa0a
