#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4256c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_42575d _public_42575d
#define public_4257c7 _public_4257c7
#define public_4257e3 _public_4257e3
#define public_4257e7 _public_4257e7
#define public_425880 _public_425880
#define public_425899 _public_425899
#define public_4258b2 _public_4258b2
#define public_4258cb _public_4258cb
#define public_4258ee _public_4258ee
#define public_4258fb _public_4258fb
#define public_425928 _public_425928
#define public_425949 _public_425949

PROC_DECLARE(0x4256c0, internal_4256c0, public_4256c0);
extern "C" NAKED register_t __cdecl internal_4256c0()
{
    __asm
    {
        sub esp, 0x40
        mov eax, dword ptr ds : [public_5c6d4c]
        push esi
        push edi
        lea edx, ss:[esp+0x34]
        push edx
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        xor edi, edi
        push edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0xCC]
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [public_5c75dc]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_42575d
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jp public_42575d
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edi
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        fild qword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x50]
        public_42575d : nop
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4257c7
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4257c7
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jp public_4257e7
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jp public_4257e7
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edi
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x54]
        fild qword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x58]
        jmp public_4257e3
        public_4257c7 : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edi
        fstp dword ptr ss : [esp+0x54]
        fild qword ptr ss : [esp+0x10]
        public_4257e3 : nop
        fstp dword ptr ss : [esp+0x58]
        public_4257e7 : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x10], edx
        fadd dword ptr ds : [public_5c99c8]
        mov dword ptr ss : [esp+0x14], edi
        fdiv st, st(1)
        fstp dword ptr ds : [esi+8]
        fild qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [public_5c99c8]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x54]
        fst dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [public_5c99c8]
        fdiv st, st(2)
        fstp dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x58]
        fst dword ptr ss : [esp+8]
        fsub dword ptr ds : [public_5c99c8]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x14]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x54]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi+0x18], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [esi+0x1C], eax
        fnstsw ax
        test ah, 5
        jp public_425880
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x5C], eax
        public_425880 : nop
        fld dword ptr ss : [esp+0x60]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_425899
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x60], ecx
        public_425899 : nop
        fld dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4258b2
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x64], edx
        public_4258b2 : nop
        fld dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4258cb
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x68], eax
        public_4258cb : nop
        fld dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0xC], 0
        fsub dword ptr ss : [esp+0x5C]
        fld st(0)
        call public_5b7ec0
        and eax, 0x80000001
        jns public_4258ee
        dec eax
        or eax, 0xFFFFFFFE
        inc eax
        public_4258ee : nop
        cmp eax, 1
        jne public_4258fb
        mov dword ptr ss : [esp+0xC], 0x3F000000
        public_4258fb : nop
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_425928
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_425928 : nop
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+0x20], ecx
        fnstsw ax
        test ah, 0x44
        jp public_425949
        mov dword ptr ss : [esp+0x20], 0x3F800000
        public_425949 : nop
        fmul dword ptr ds : [public_5c75e0]
        pop edi
        fld dword ptr ss : [esp+0x48]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x4C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fxch 
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fxch 
        fstp dword ptr ds : [esi+0x20]
        fstp dword ptr ds : [esi+0x24]
        fxch 
        fstp dword ptr ds : [esi+0x28]
        fstp dword ptr ds : [esi+0x2C]
        pop esi
        add esp, 0x40
        ret 0x20
        UNREACHABLE_TRAP(0x4256c0)
    }
}

#undef public_42575d
#undef public_4257c7
#undef public_4257e3
#undef public_4257e7
#undef public_425880
#undef public_425899
#undef public_4258b2
#undef public_4258cb
#undef public_4258ee
#undef public_4258fb
#undef public_425928
#undef public_425949
