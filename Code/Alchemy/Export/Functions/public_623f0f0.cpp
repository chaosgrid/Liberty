#include "Alchemy-PCH.h"


#define public_623f126 _public_623f126
#define public_623f145 _public_623f145
#define public_623f15c _public_623f15c
#define public_623f160 _public_623f160
#define public_623f187 _public_623f187
#define public_623f194 _public_623f194

PROC_DECLARE(0x623f0f0, internal_623f0f0, public_623f0f0);
extern "C" NAKED register_t __cdecl internal_623f0f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624f798]
        fnstsw ax
        and eax, 0x4100
        jne public_623f126
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624f794]
        fnstsw ax
        test ah, 5
        jp public_623f126
        fld dword ptr ds : [public_624bc38]
        jmp public_623f160
        public_623f126 : nop
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [public_624c368]
        fnstsw ax
        test ah, 5
        jp public_623f145
        fstp st(0)
        fld dword ptr ds : [public_624c368]
        jmp public_623f15c
        public_623f145 : nop
        fcom dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_623f15c
        fstp st(0)
        fld dword ptr ds : [public_624bac4]
        public_623f15c : nop
        fmul dword ptr ss : [esp+0x10]
        public_623f160 : nop
        fadd dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        fcomp dword ptr ss : [esp+8]
        test ah, 5
        fnstsw ax
        jp public_623f187
        test ah, 5
        jp public_623f194
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        ret 
        public_623f187 : nop
        and eax, 0x4100
        jne public_623f194
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        public_623f194 : nop
        ret 
        UNREACHABLE_TRAP(0x623f0f0)
    }
}

#undef public_623f126
#undef public_623f145
#undef public_623f15c
#undef public_623f160
#undef public_623f187
#undef public_623f194
