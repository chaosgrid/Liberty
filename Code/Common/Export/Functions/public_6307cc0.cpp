#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);

#define public_6307dd8 _public_6307dd8
#define public_6307df5 _public_6307df5
#define public_6307e12 _public_6307e12
#define public_6307e2f _public_6307e2f
#define public_6307e4c _public_6307e4c
#define public_6307e69 _public_6307e69
#define public_6307e86 _public_6307e86
#define public_6307ea3 _public_6307ea3
#define public_6307ec0 _public_6307ec0
#define public_6307edd _public_6307edd
#define public_6307efa _public_6307efa
#define public_6307f17 _public_6307f17

PROC_DECLARE(0x6307cc0, internal_6307cc0, public_6307cc0);
extern "C" NAKED register_t __cdecl internal_6307cc0()
{
    __asm
    {
        sub esp, 0x50
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x60]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [edi+0xC]
        sub esp, 0xC
        fld dword ptr ds : [edi+0x18]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ds : [edi+0x24]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ds : [edi+0x10]
        fld dword ptr ds : [edi+0x1C]
        fld dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x10]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x24]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi+0x14]
        fld dword ptr ds : [edi+0x20]
        fld dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x20]
        pop edi
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        pop esi
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fabs 
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_6307dd8
        fstp st(0)
        fld dword ptr ss : [esp]
        public_6307dd8 : nop
        fld dword ptr ss : [esp+0x30]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307df5
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307df5 : nop
        fld dword ptr ss : [esp+0x34]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307e12
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307e12 : nop
        fld dword ptr ss : [esp+0x38]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307e2f
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307e2f : nop
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307e4c
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307e4c : nop
        fld dword ptr ss : [esp+0x40]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307e69
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307e69 : nop
        fld dword ptr ss : [esp+8]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307e86
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307e86 : nop
        fld dword ptr ss : [esp+0xC]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307ea3
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307ea3 : nop
        fld dword ptr ss : [esp+0x10]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307ec0
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307ec0 : nop
        fld dword ptr ss : [esp+0x14]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307edd
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307edd : nop
        fld dword ptr ss : [esp+0x18]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307efa
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307efa : nop
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fst qword ptr ss : [esp]
        fld st(1)
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6307f17
        fstp st(0)
        fld qword ptr ss : [esp]
        public_6307f17 : nop
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6307cc0)
    }
}

#undef public_6307dd8
#undef public_6307df5
#undef public_6307e12
#undef public_6307e2f
#undef public_6307e4c
#undef public_6307e69
#undef public_6307e86
#undef public_6307ea3
#undef public_6307ec0
#undef public_6307edd
#undef public_6307efa
#undef public_6307f17
