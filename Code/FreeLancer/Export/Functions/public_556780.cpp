#include "FreeLancer-PCH.h"


#define public_5567a3 _public_5567a3
#define public_5567c4 _public_5567c4
#define public_5567dd _public_5567dd
#define public_5567f3 _public_5567f3
#define public_556818 _public_556818
#define public_556832 _public_556832
#define public_556858 _public_556858
#define public_556868 _public_556868
#define public_5568a7 _public_5568a7
#define public_5568a9 _public_5568a9

PROC_DECLARE(0x556780, internal_556780, public_556780);
extern "C" NAKED register_t __cdecl internal_556780()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx+0x1C]
        fcomp dword ptr ds : [edx+8]
        push esi
        fnstsw ax
        test ah, 5
        jp public_5567a3
        mov eax, 1
        pop esi
        ret 0xC
        public_5567a3 : nop
        fld dword ptr ss : [esp+0x10]
        mov esi, 4
        fadd dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+0x1C]
        fchs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_5567c4
        mov esi, 3
        public_5567c4 : nop
        fld dword ptr ds : [ecx+0x20]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_5567dd
        mov eax, 1
        pop esi
        ret 0xC
        public_5567dd : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ecx+0x20]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 5
        jnp public_5567f3
        mov esi, 3
        public_5567f3 : nop
        fld dword ptr ds : [edx]
        fabs 
        fmul dword ptr ds : [ecx+0x40]
        fld dword ptr ds : [ecx+0x48]
        fmul dword ptr ds : [edx+8]
        faddp 
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_556818
        fstp st(0)
        mov eax, 1
        pop esi
        ret 0xC
        public_556818 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jnp public_556832
        mov esi, 3
        public_556832 : nop
        fld dword ptr ds : [edx+4]
        fabs 
        fmul dword ptr ds : [ecx+0x50]
        fld dword ptr ds : [ecx+0x54]
        fmul dword ptr ds : [edx+8]
        faddp 
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_556858
        fstp st(0)
        mov eax, 1
        pop esi
        ret 0xC
        public_556858 : nop
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jnp public_556868
        mov esi, 3
        public_556868 : nop
        fld dword ptr ds : [edx+8]
        fabs 
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 1
        jne public_5568a7
        fld dword ptr ss : [esp+0x10]
        fdiv dword ptr ds : [edx+8]
        fchs 
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [ecx+0x38]
        fmul st, st(1)
        fmul st, st(1)
        fmul dword ptr ds : [public_5df814]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        fstp st(0)
        test ah, 5
        mov eax, 2
        jnp public_5568a9
        public_5568a7 : nop
        mov eax, esi
        public_5568a9 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x556780)
    }
}

#undef public_5567a3
#undef public_5567c4
#undef public_5567dd
#undef public_5567f3
#undef public_556818
#undef public_556832
#undef public_556858
#undef public_556868
#undef public_5568a7
#undef public_5568a9
