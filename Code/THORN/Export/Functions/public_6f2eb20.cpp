#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2eb20);

#define public_6f2eb3a _public_6f2eb3a
#define public_6f2eb5d _public_6f2eb5d
#define public_6f2eb81 _public_6f2eb81
#define public_6f2eb9f _public_6f2eb9f
#define public_6f2eba2 _public_6f2eba2
#define public_6f2ec4a _public_6f2ec4a

PROC_DECLARE(0x6f2eb20, internal_6f2eb20, public_6f2eb20);
extern "C" NAKED register_t __cdecl internal_6f2eb20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x10
        test eax, eax
        je public_6f2eb3a
        mov dword ptr ds : [ecx], 3
        jmp public_6f2eba2
        public_6f2eb3a : nop
        fld dword ptr ds : [edx+0x1C]
        fcomp dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 5
        jp public_6f2eb5d
        mov eax, 0x40490FDB
        mov dword ptr ds : [ecx], 1
        mov dword ptr ds : [ecx+0x60], eax
        mov dword ptr ds : [ecx+0x64], eax
        jmp public_6f2eba2
        public_6f2eb5d : nop
        mov dword ptr ds : [ecx], 2
        fld dword ptr ds : [edx+0x1C]
        fmul dword ptr ds : [public_6f5a230]
        fcom qword ptr ds : [public_6f5a270]
        fnstsw ax
        test ah, 5
        jnp public_6f2eb81
        fstp st(0)
        fld qword ptr ds : [public_6f5a270]
        public_6f2eb81 : nop
        fst dword ptr ds : [ecx+0x60]
        fmul dword ptr ds : [public_6f5a26c]
        fcom dword ptr ds : [public_6f5a268]
        fnstsw ax
        test ah, 5
        jnp public_6f2eb9f
        fstp st(0)
        fld dword ptr ds : [public_6f5a268]
        public_6f2eb9f : nop
        fstp dword ptr ds : [ecx+0x64]
        public_6f2eba2 : nop
        fild dword ptr ds : [edx]
        push esi
        lea eax, ds:[ecx+4]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        fmul dword ptr ds : [public_6f5a1e8]
        fstp dword ptr ss : [esp+4]
        mov esi, dword ptr ss : [esp+4]
        fild dword ptr ds : [edx+4]
        fmul dword ptr ds : [public_6f5a1e8]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [edx+8]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], esi
        fmul dword ptr ds : [public_6f5a1e8]
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xC], esi
        xor eax, eax
        lea esi, ds:[ecx+0x14]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea esi, ds:[ecx+0x24]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov esi, 0x3F800000
        mov dword ptr ds : [ecx+0x50], esi
        fld dword ptr ds : [edx+0x18]
        fcomp qword ptr ds : [public_6f5a260]
        fnstsw ax
        test ah, 5
        jp public_6f2ec4a
        fld qword ptr ds : [public_6f5a258]
        mov dword ptr ds : [ecx+0x58], 0x38D1B717
        fsqrt 
        mov dword ptr ds : [ecx+0x54], 0
        mov dword ptr ds : [ecx+0x5C], 0
        pop esi
        fstp dword ptr ds : [ecx+0x4C]
        add esp, 0x10
        ret 
        public_6f2ec4a : nop
        mov dword ptr ds : [ecx+0x54], esi
        mov dword ptr ds : [ecx+0x58], 0
        fld dword ptr ds : [edx+0x18]
        fld st(0)
        pop esi
        fmul st, st(1)
        fmul dword ptr ds : [public_6f5a250]
        fdivr dword ptr ds : [public_6f5a1b8]
        fstp dword ptr ds : [ecx+0x5C]
        fstp st(0)
        fld dword ptr ds : [edx+0x18]
        fadd st(0), st
        fstp dword ptr ds : [ecx+0x4C]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2eb20)
    }
}

#undef public_6f2eb3a
#undef public_6f2eb5d
#undef public_6f2eb81
#undef public_6f2eb9f
#undef public_6f2eba2
#undef public_6f2ec4a
