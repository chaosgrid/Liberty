#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_509f20);
CLANG_FORWARD_PROC_SYMBOL(public_51be10);
CLANG_FORWARD_PROC_SYMBOL(public_51ec80);
CLANG_FORWARD_PROC_SYMBOL(public_51efc0);
CLANG_FORWARD_PROC_SYMBOL(public_51f140);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51be60 _public_51be60
#define public_51bf50 _public_51bf50
#define public_51bf6f _public_51bf6f
#define public_51bf77 _public_51bf77
#define public_51bfbe _public_51bfbe
#define public_51bfd0 _public_51bfd0
#define public_51c006 _public_51c006
#define public_51c018 _public_51c018
#define public_51c038 _public_51c038
#define public_51c079 _public_51c079
#define public_51c08c _public_51c08c
#define public_51c140 _public_51c140
#define public_51c14f _public_51c14f
#define public_51c178 _public_51c178
#define public_51c17e _public_51c17e
#define public_51c1a6 _public_51c1a6
#define public_51c1a8 _public_51c1a8
#define public_51c1b3 _public_51c1b3
#define public_51c1c0 _public_51c1c0
#define public_51c1cc _public_51c1cc

PROC_DECLARE(0x51be10, internal_51be10, public_51be10);
extern "C" NAKED register_t __cdecl internal_51be10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x50
        fld dword ptr ds : [public_6164d0]
        push ebx
        fsub dword ptr ds : [public_5d3d24]
        push ebp
        push esi
        push edi
        fld st(0)
        fmul st, st(1)
        push 0x25
        mov ebp, ecx
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c1cc
        call public_509f20
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], eax
        je public_51c1cc
        lea ecx, ds:[ecx]
        public_51be60 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        mov esi, eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, 1
        mov eax, dword ptr ss : [ebp]
        push ebp
        jne public_51c018
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x44]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fst dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x3C]
        fmul dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_51bf50
        fstp st(0)
        jmp public_51bf6f
        public_51bf50 : nop
        fsubr dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_51bf77
        public_51bf6f : nop
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_51bf77 : nop
        fld dword ptr ss : [esp+0x14]
        push 0x10
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_51bfd0
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51bfbe
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        push eax
        mov ecx, offset public_675360
        mov dword ptr ds : [eax], offset public_5dc06c
        mov dword ptr ds : [eax+0xC], 0
        call public_51efc0
        jmp public_51c1c0
        public_51bfbe : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51efc0
        jmp public_51c1c0
        public_51bfd0 : nop
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51c006
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        push eax
        mov ecx, offset public_675360
        mov dword ptr ds : [eax], offset public_5dc06c
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0xC], 0
        call public_51f140
        jmp public_51c1c0
        public_51c006 : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51f140
        jmp public_51c1c0
        public_51c018 : nop
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [ebp]
        push ebp
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [ecx+0x40]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        test eax, eax
        jle public_51c1c0
        public_51c038 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x20]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x1C]
        mov esi, eax
        test esi, esi
        jne public_51c079
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dc03c @0x51c05a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc03c
        push 0x1CA
/*FIXUP push offset public_5dbfe8 @0x51c064*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbfe8
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x51c06e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_51c079 : nop
        mov eax, dword ptr ds : [public_675240]
        test eax, eax
        jne public_51c08c
        call public_5b73e0
        mov dword ptr ds : [public_675240], eax
        public_51c08c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], ecx
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x3C]
        cmp ax, 3
        jb public_51c1b3
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [eax+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fst qword ptr ss : [esp+0x30]
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_51c14f
        push 0x10
        fstp st(0)
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51c140
        mov ecx, dword ptr ds : [edi+8]
        fld qword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax+4]
        push eax
        mov ecx, offset public_675360
        mov dword ptr ds : [eax], offset public_5dc06c
        mov dword ptr ds : [eax+0xC], ebx
        call public_51f140
        jmp public_51c1b3
        public_51c140 : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51f140
        jmp public_51c1b3
        public_51c14f : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(0)
        fld st(2)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_51c178
        fstp st(0)
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        jmp public_51c17e
        public_51c178 : nop
        fsubr st, st(1)
        fstp qword ptr ss : [esp+0x30]
        public_51c17e : nop
        push 0x10
        fstp st(0)
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51c1a6
        mov ecx, dword ptr ds : [edi+8]
        fld qword ptr ss : [esp+0x30]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_5dc06c
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ebx
        jmp public_51c1a8
        public_51c1a6 : nop
        xor eax, eax
        public_51c1a8 : nop
        push eax
        mov ecx, offset public_675360
        call public_51efc0
        public_51c1b3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc ebx
        cmp ebx, eax
        jl public_51c038
        public_51c1c0 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x2C]
        jne public_51be60
        public_51c1cc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x51be10)
    }
}

#undef public_51be60
#undef public_51bf50
#undef public_51bf6f
#undef public_51bf77
#undef public_51bfbe
#undef public_51bfd0
#undef public_51c006
#undef public_51c018
#undef public_51c038
#undef public_51c079
#undef public_51c08c
#undef public_51c140
#undef public_51c14f
#undef public_51c178
#undef public_51c17e
#undef public_51c1a6
#undef public_51c1a8
#undef public_51c1b3
#undef public_51c1c0
#undef public_51c1cc
