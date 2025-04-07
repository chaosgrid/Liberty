#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b42f0);

#define public_62b4316 _public_62b4316
#define public_62b4332 _public_62b4332
#define public_62b434e _public_62b434e
#define public_62b4382 _public_62b4382
#define public_62b43b8 _public_62b43b8
#define public_62b43e0 _public_62b43e0
#define public_62b43e2 _public_62b43e2
#define public_62b4429 _public_62b4429
#define public_62b4431 _public_62b4431

PROC_DECLARE(0x62b42f0, internal_62b42f0, public_62b42f0);
extern "C" NAKED register_t __cdecl internal_62b42f0()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b4316
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        ret 0x14
        public_62b4316 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b4332
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        ret 0x14
        public_62b4332 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b434e
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        ret 0x14
        public_62b434e : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62b4382
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+4]
        fmulp 
        ret 0x14
        public_62b4382 : nop
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_62b43b8
        fmul dword ptr ds : [public_639e6cc]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62b43e0
        fstp dword ptr ss : [esp+0x14]
        jmp public_62b43e2
        public_62b43b8 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62b43e2
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 5
        jp public_62b43e2
        mov dword ptr ss : [esp+0x14], 0x3C23D70A
        jmp public_62b43e2
        public_62b43e0 : nop
        fstp st(0)
        public_62b43e2 : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62b4431
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62b4429
        fldln2 
        fxch 
        fyl2x 
        fmul dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0xC]
        fchs 
        ret 0x14
        public_62b4429 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62b4431 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x62b42f0)
    }
}

#undef public_62b4316
#undef public_62b4332
#undef public_62b434e
#undef public_62b4382
#undef public_62b43b8
#undef public_62b43e0
#undef public_62b43e2
#undef public_62b4429
#undef public_62b4431
