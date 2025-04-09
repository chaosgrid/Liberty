#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fb0);
CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_420ff0);
CLANG_FORWARD_PROC_SYMBOL(public_421010);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_5183d0);
CLANG_FORWARD_PROC_SYMBOL(public_51d070);
CLANG_FORWARD_PROC_SYMBOL(public_51dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_517bfa _public_517bfa
#define public_517bfc _public_517bfc
#define public_517c1d _public_517c1d
#define public_517c57 _public_517c57
#define public_517c59 _public_517c59
#define public_517c80 _public_517c80
#define public_517c82 _public_517c82
#define public_517ca4 _public_517ca4
#define public_517cb7 _public_517cb7
#define public_517d3f _public_517d3f
#define public_517d41 _public_517d41
#define public_517d63 _public_517d63
#define public_517da5 _public_517da5
#define public_517dd6 _public_517dd6
#define public_517e15 _public_517e15
#define public_517e26 _public_517e26
#define public_517e60 _public_517e60
#define public_517f51 _public_517f51
#define public_517f60 _public_517f60
#define public_517f62 _public_517f62
#define public_517f9b _public_517f9b
#define public_517ff6 _public_517ff6
#define public_51800b _public_51800b
#define public_51806f _public_51806f
#define public_5180f3 _public_5180f3
#define public_51814d _public_51814d
#define public_518218 _public_518218
#define public_518257 _public_518257
#define public_518280 _public_518280
#define public_518293 _public_518293
#define public_5182d2 _public_5182d2
#define public_518317 _public_518317
#define public_518339 _public_518339
#define public_5183a1 _public_5183a1

PROC_DECLARE(0x517ba0, internal_517ba0, public_517ba0);
extern "C" NAKED register_t __cdecl internal_517ba0()
{
    __asm
    {
        sub esp, 0x168
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_5183a1
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5183a1
        add eax, 0xC
        test eax, eax
        je public_5183a1
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5183a1
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_5183a1
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_517bfa
        lea ecx, ds:[eax-8]
        jmp public_517bfc
        public_517bfa : nop
        xor ecx, ecx
        public_517bfc : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov dword ptr ss : [esp+0x38], ebp
        jne public_517c1d
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517c1d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10C]
        push edx
        push ebp
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x94]
        rep movsd
        je public_517c57
        lea ecx, ds:[eax-8]
        jmp public_517c59
        public_517c57 : nop
        xor ecx, ecx
        public_517c59 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_517c80
        add eax, 0xFFFFFFF8
        jmp public_517c82
        public_517c80 : nop
        xor eax, eax
        public_517c82 : nop
        push eax
        call dword ptr ds : [public_5c6470]
        mov cl, byte ptr ds : [ebx+0x1A0]
        add esp, 4
        test cl, cl
        je public_517ca4
        test eax, eax
        je public_517ca4
        push 0
        mov ecx, eax
        call dword ptr ds : [public_5c6624]
        public_517ca4 : nop
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_517cb7
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517cb7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x100]
        push edx
        push ebp
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        lea eax, ds:[ebx+0x160]
        lea ebp, ds:[ebx+0x190]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], ecx
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edx
        fadd dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, ebp
        call public_420fd0
        lea eax, ss:[esp+0x94]
        push eax
        mov ecx, ebp
        call public_421010
        mov ecx, ebp
        call public_421070
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_517d3f
        lea ecx, ds:[eax-8]
        jmp public_517d41
        public_517d3f : nop
        xor ecx, ecx
        public_517d41 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x88]
        push eax
        call dword ptr ds : [edx+4]
        mov esi, eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_517d63
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517d63 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x17C]
        fcomp qword ptr ds : [public_5c8ba8]
        mov dword ptr ss : [esp+0x10], 0
        fnstsw ax
        test ah, 0x41
        jne public_517da5
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [public_675228]
        fdiv dword ptr ss : [esp+0x17C]
        fstp dword ptr ss : [esp+0x10]
        public_517da5 : nop
        fld dword ptr ss : [esp+0x10]
        fabs 
        fadd qword ptr ds : [public_5c89b8]
        fdivr qword ptr ds : [public_5c89b8]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ds : [public_6135a8]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_517dd6
        fchs 
        public_517dd6 : nop
        fsub dword ptr ds : [public_67522c]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_675228], eax
        fmul qword ptr ds : [public_5d5138]
        fld dword ptr ss : [esp+0x17C]
        fmul qword ptr ds : [public_5db638]
        fst dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        fcom dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 5
        jp public_517e15
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        jmp public_517e26
        public_517e15 : nop
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_517e26
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        public_517e26 : nop
        fadd dword ptr ds : [public_67522c]
        mov ecx, ebp
        fst dword ptr ss : [esp+0x3C]
        fstp dword ptr ds : [public_67522c]
        call public_420ff0
        mov esi, eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x94]
        rep movsd
        jne public_517e60
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517e60 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x130]
        push ecx
        lea ecx, ss:[esp+0x98]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        call public_420fb0
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_423b30
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], eax
        mov al, byte ptr ds : [public_675210]
        add esp, 0xC
        test al, 1
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x84], 0x3F800000
        mov dword ptr ss : [esp+0x74], 0x3F800000
        mov dword ptr ss : [esp+0x64], 0x3F800000
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        jne public_517f51
        mov dl, al
        or dl, 1
/*FIXUP push offset _public_5183d0 @0x517f20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5183d0
        mov byte ptr ds : [public_675210], dl
        mov dword ptr ds : [public_675204], 0
        mov dword ptr ds : [public_675208], 0
        mov dword ptr ds : [public_67520c], 0
        call public_5b7e6c
        add esp, 4
        public_517f51 : nop
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_517f60
        lea ecx, ds:[eax-8]
        jmp public_517f62
        public_517f60 : nop
        xor ecx, ecx
        public_517f62 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x88]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_675204], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_675208], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_67520c], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_517f9b
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_517f9b : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_675204 @0x517fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_675204
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_6135b8]
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [public_6135bc]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ds : [public_675204], eax
        fcom dword ptr ss : [esp+0x38]
        mov dword ptr ds : [public_675208], ecx
        mov dword ptr ds : [public_67520c], edx
        fnstsw ax
        test ah, 5
        jp public_517ff6
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        jmp public_51800b
        public_517ff6 : nop
        fcom dword ptr ds : [public_6135bc]
        fnstsw ax
        test ah, 0x41
        jne public_51800b
        fstp st(0)
        fld dword ptr ds : [public_6135bc]
        public_51800b : nop
        lea eax, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ss:[esp+0xE0]
        push ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_5c63fc]
        fld dword ptr ds : [public_6135ac]
        mov esi, eax
        mov eax, dword ptr ds : [public_675220]
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x54], 0
        jne public_51806f
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51806f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea esi, ds:[ebx+0x13C]
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ds : [ebx+0x138]
        fsub dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x134]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x130]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        fchs 
        fld dword ptr ss : [esp+0x54]
        push ecx
        fadd st, st(1)
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        fstp st(0)
        call public_422b80
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_5180f3
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5180f3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x60]
        sub esp, 0xC
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_51814d
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51814d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x34], edx
        call public_420fb0
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        lea ebp, ds:[ebx+0x160]
        mov eax, ebp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
/*FIXUP push offset public_5c78d4 @0x5181cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78d4
        mov dword ptr ds : [eax+8], ecx
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_518280
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_518218
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_518218 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x130]
        rep movsd
        jne public_518257
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_518257 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x16C]
        push edx
        lea edx, ss:[esp+0x134]
        push edx
        lea edx, ss:[esp+0x114]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        lea esi, ss:[esp+0x10C]
        jmp public_518339
        public_518280 : nop
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_518293
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_518293 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0x114]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x10C]
        lea edi, ss:[esp+0x130]
        rep movsd
        jne public_5182d2
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_5182d2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x16C]
        push edx
        lea edx, ss:[esp+0x134]
        push edx
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x154]
        rep movsd
        jne public_518317
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_518317 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x158]
        push edx
        lea edx, ss:[esp+0xE4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        lea esi, ss:[esp+0xDC]
        public_518339 : nop
        lea edi, ss:[esp+0x94]
        mov ecx, 9
        lea eax, ss:[esp+0x94]
        rep movsd
        push eax
        mov ecx, ebx
        call public_51dbd0
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, 9
        lea esi, ss:[esp+0x94]
        lea edi, ss:[esp+0xDC]
        rep movsd
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x100], ecx
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0xDC]
        mov dword ptr ss : [esp+0x104], edx
        mov dword ptr ss : [esp+0x108], eax
        rep movsd
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x34], 1
        pop ebp
        public_5183a1 : nop
        mov ecx, dword ptr ss : [esp+0x170]
        push ecx
        mov ecx, ebx
        call public_51d070
        mov byte ptr ds : [ebx+0x1A0], 0
        pop ebx
        add esp, 0x168
        ret 4
        UNREACHABLE_TRAP(0x517ba0)
    }
}

#undef public_517bfa
#undef public_517bfc
#undef public_517c1d
#undef public_517c57
#undef public_517c59
#undef public_517c80
#undef public_517c82
#undef public_517ca4
#undef public_517cb7
#undef public_517d3f
#undef public_517d41
#undef public_517d63
#undef public_517da5
#undef public_517dd6
#undef public_517e15
#undef public_517e26
#undef public_517e60
#undef public_517f51
#undef public_517f60
#undef public_517f62
#undef public_517f9b
#undef public_517ff6
#undef public_51800b
#undef public_51806f
#undef public_5180f3
#undef public_51814d
#undef public_518218
#undef public_518257
#undef public_518280
#undef public_518293
#undef public_5182d2
#undef public_518317
#undef public_518339
#undef public_5183a1
