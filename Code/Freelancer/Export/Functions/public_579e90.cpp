#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404720);
CLANG_FORWARD_PROC_SYMBOL(public_579390);
CLANG_FORWARD_PROC_SYMBOL(public_579e90);
CLANG_FORWARD_PROC_SYMBOL(public_57a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d2b);

#define public_579f1c _public_579f1c
#define public_57a062 _public_57a062
#define public_57a298 _public_57a298
#define public_57a2a3 _public_57a2a3
#define public_57a2ad _public_57a2ad
#define public_57a2b1 _public_57a2b1
#define public_57a2b9 _public_57a2b9
#define public_57a2bb _public_57a2bb
#define public_57a2bf _public_57a2bf
#define public_57a2ce _public_57a2ce
#define public_57a2e0 _public_57a2e0
#define public_57a2ea _public_57a2ea
#define public_57a2f0 _public_57a2f0
#define public_57a2f8 _public_57a2f8
#define public_57a2fa _public_57a2fa
#define public_57a304 _public_57a304
#define public_57a320 _public_57a320
#define public_57a33f _public_57a33f
#define public_57a34d _public_57a34d
#define public_57a35a _public_57a35a
#define public_57a373 _public_57a373
#define public_57a3bd _public_57a3bd
#define public_57a3c5 _public_57a3c5
#define public_57a3ec _public_57a3ec
#define public_57a510 _public_57a510
#define public_57a546 _public_57a546
#define public_57a568 _public_57a568
#define public_57a56b _public_57a56b
#define public_57a591 _public_57a591
#define public_57a5b1 _public_57a5b1
#define public_57a5bf _public_57a5bf
#define public_57a5d2 _public_57a5d2

PROC_DECLARE(0x579e90, internal_579e90, public_579e90);
extern "C" NAKED register_t __cdecl internal_579e90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3d2b @0x579e92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0xA4]
        push edx
        lea edx, ss:[esp+0x94]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_67c480]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        jne public_579f1c
        call public_5b73e0
        mov dword ptr ds : [public_67c480], eax
        public_579f1c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        lea edi, ds:[esi+0x3C]
        push edi
        lea edx, ss:[esp+0x98]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x94]
        sub esp, 0x10
        fld dword ptr ss : [esp+0xA8]
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x8C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x88]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x84]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x78]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x74]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x68]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x64]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x58]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_57a5f0
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        fnstsw ax
        mov dword ptr ss : [esp+0x38], ecx
        test ah, 0x44
        mov dword ptr ss : [esp+0x3C], edx
        jnp public_57a5d2
        fld dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ds : [public_67c480]
        test eax, eax
        fdiv dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x330]
        mov dword ptr ss : [esp+0x18], 0
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x334]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        jne public_57a062
        call public_5b73e0
        mov dword ptr ds : [public_67c480], eax
        public_57a062 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        sub esp, 0x10
        fld dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x88]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x84]
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul dword ptr ss : [esp+0x8C]
        faddp 
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x78]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x74]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x68]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x64]
        fmul st, st(4)
        faddp 
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul st, st(3)
        faddp 
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_57a5f0
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xAC], eax
        mov dword ptr ss : [esp+0xA8], edx
        mov edx, dword ptr ss : [esp+0x1C]
        fnstsw ax
        mov dword ptr ss : [esp+0xB0], ecx
        test ah, 0x44
        mov dword ptr ss : [esp+0xB4], edx
        jnp public_57a5d2
        fld dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+0x90]
        fdiv dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [esi+0x338], eax
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        mov dword ptr ds : [esi+0x340], ecx
        mov dword ptr ds : [esi+0x33C], edx
        mov dword ptr ds : [esi+0x344], eax
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fxch 
        fmul dword ptr ss : [esp+0xB4]
        fstp dword ptr ss : [esp+0xB4]
        fild dword ptr ss : [esp+0xA8]
        fild dword ptr ss : [esp+0xA4]
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0x3C]
        fmul st, st(2)
        fmul dword ptr ds : [public_5c75e0]
        fadd st, st(1)
        call public_5b7ec0
        fild dword ptr ss : [esp+0x90]
        mov edi, eax
        mov dword ptr ds : [esi+0x348], edi
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [esp+0x14]
        call public_5b7ec0
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(3)
        mov ebp, eax
        mov dword ptr ds : [esi+0x34C], ebp
        fmul st, st(2)
        fmul dword ptr ds : [public_5c75e0]
        fadd st, st(1)
        call public_5b7ec0
        fstp st(0)
        fstp st(0)
        mov ebx, eax
        fstp st(0)
        mov dword ptr ds : [esi+0x350], ebx
        fld dword ptr ss : [esp+0xB4]
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [esp+0x14]
        call public_5b7ec0
        mov edx, dword ptr ds : [esi+0x358]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x35C]
        mov dword ptr ss : [esp+0xAC], eax
        mov eax, ebx
        sub eax, edi
        mov dword ptr ds : [esi+0x354], ecx
        sub ecx, ebp
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ds : [esi+0x35C], ecx
        mov edx, 1
        jge public_57a298
        mov dword ptr ss : [esp+0x14], edx
        jmp public_57a2bf
        public_57a298 : nop
        lea edi, ds:[eax-1]
        test eax, edi
        je public_57a2ad
        cmp eax, ebx
        je public_57a2bb
        public_57a2a3 : nop
        sar eax, 1
        shl edx, 1
        cmp eax, ebx
        jne public_57a2a3
        jmp public_57a2bb
        public_57a2ad : nop
        cmp eax, ebx
        je public_57a2b9
        public_57a2b1 : nop
        sar eax, 1
        shl edx, 1
        cmp eax, ebx
        jne public_57a2b1
        public_57a2b9 : nop
        sar edx, 1
        public_57a2bb : nop
        mov dword ptr ss : [esp+0x14], edx
        public_57a2bf : nop
        mov eax, ecx
        cmp eax, ebx
        mov ecx, 1
        jge public_57a2ce
        mov ebp, ecx
        jmp public_57a304
        public_57a2ce : nop
        lea edi, ds:[eax-1]
        test eax, edi
        je public_57a2ea
        cmp eax, ebx
        je public_57a2fa
        lea esp, ss:[esp]
        public_57a2e0 : nop
        sar eax, 1
        shl ecx, 1
        cmp eax, ebx
        jne public_57a2e0
        jmp public_57a2fa
        public_57a2ea : nop
        cmp eax, ebx
        je public_57a2f8
        mov edi, edi
        public_57a2f0 : nop
        sar eax, 1
        shl ecx, 1
        cmp eax, ebx
        jne public_57a2f0
        public_57a2f8 : nop
        sar ecx, 1
        public_57a2fa : nop
        cmp ecx, ebx
        mov ebp, ecx
        jle public_57a591
        public_57a304 : nop
        cmp edx, ebx
        jle public_57a591
        cmp dword ptr ds : [esi+0x3E4], ebp
        jne public_57a320
        cmp dword ptr ds : [esi+0x3E0], edx
        je public_57a591
        public_57a320 : nop
        mov eax, dword ptr ds : [esi+0x3D4]
        cmp eax, ebx
        lea edi, ds:[esi+0x3D4]
        je public_57a35a
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_57a33f
        push ecx
        push eax
        call dword ptr ds : [public_5c6e0c]
        public_57a33f : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_57a34d
        push eax
        call dword ptr ds : [public_5c6e3c]
        public_57a34d : nop
        mov ecx, dword ptr ds : [edi]
        push ecx
        call dword ptr ds : [public_5c6e38]
        mov edx, dword ptr ss : [esp+0x14]
        public_57a35a : nop
        or eax, 0xFFFFFFFF
        cmp edx, eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi], ebx
        jne public_57a373
        cmp eax, ebp
        je public_57a3c5
        public_57a373 : nop
        mov ecx, edi
        call public_579390
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        mov dword ptr ds : [edi+0xC], edx
        mov dword ptr ds : [edi+0x10], ebp
        call dword ptr ds : [public_5c72cc]
        mov ebp, eax
        push ebp
        call dword ptr ds : [public_5c6e34]
        cmp eax, ebx
        mov dword ptr ds : [edi], eax
        je public_57a3bd
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0xC]
        push eax
        push ecx
        push ebp
        call dword ptr ds : [public_5c6e30]
        cmp eax, ebx
        mov dword ptr ds : [edi+4], eax
        je public_57a3bd
        mov edx, dword ptr ds : [edi]
        push eax
        push edx
        call dword ptr ds : [public_5c6e0c]
        mov dword ptr ds : [edi+8], eax
        public_57a3bd : nop
        push ebp
        push ebx
        call dword ptr ds : [public_5c72d0]
        public_57a3c5 : nop
        mov eax, dword ptr ds : [esi+0x3E0]
        add eax, eax
        mov ecx, eax
        and ecx, 3
        mov byte ptr ds : [esi+0x401], 1
        mov dword ptr ds : [esi+0x3E8], eax
        je public_57a3ec
        sub eax, ecx
        add eax, 4
        mov dword ptr ds : [esi+0x3E8], eax
        public_57a3ec : nop
        mov eax, dword ptr ds : [esi+0x3E4]
        mov edi, dword ptr ds : [esi+0x3E8]
        imul edi, eax
        push edi
        call public_5b7e84
        mov ecx, edi
        mov edx, ecx
        mov ebp, eax
        shr ecx, 2
        xor eax, eax
        mov edi, ebp
        rep stosd
        mov ecx, edx
        and ecx, 3
        push ebx
        rep stosb
        call public_5b7010
        push ebx
        mov dword ptr ss : [esp+0x40], eax
        call public_5b7010
        add esp, 0xC
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x4C], eax
        call public_5b7050
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[esp+0x4C]
        call public_5b7050
        mov edi, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+0x3E4]
        mov ecx, dword ptr ds : [esi+0x3E0]
        mov edx, dword ptr ds : [esi+0x3E8]
        mov dword ptr ss : [esp+0xC8], edi
        lea edi, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xD0], edi
        lea edi, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xC4], offset public_5e2788
        mov dword ptr ss : [esp+0xCC], ebx
        mov dword ptr ss : [esp+0xD8], ebp
        mov dword ptr ss : [esp+0xD4], edi
        mov dword ptr ss : [esp+0xDC], ecx
        mov dword ptr ss : [esp+0xE0], eax
        mov dword ptr ss : [esp+0xE4], edx
        mov dword ptr ss : [esp+0xC0], 0x2C
        mov dword ptr ss : [esp+0xE8], offset _public_404720
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [public_5c6d64]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0xC4]
        push edx
        push eax
        mov dword ptr ss : [esp+0x100], ebx
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_57a546
        mov eax, dword ptr ds : [esi+0x3EC]
        cmp eax, ebx
        lea edi, ds:[esi+0x3EC]
        je public_57a510
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], ebx
        public_57a510 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push edi
/*FIXUP push offset public_5e4708 @0x57a517*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4708
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        je public_57a56b
/*FIXUP push offset public_5e46e0 @0x57a523*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e46e0
        push 0x3C7
/*FIXUP push offset public_5e46a8 @0x57a52d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e46a8
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x57a537*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        jmp public_57a568
        public_57a546 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e4680 @0x57a54c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4680
        push 0x3CC
/*FIXUP push offset public_5e46a8 @0x57a556*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e46a8
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x57a560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        call dword ptr ds : [ecx]
        public_57a568 : nop
        add esp, 0x14
        public_57a56b : nop
        push ebp
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0xF4], 0xFFFFFFFF
        je public_57a591
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_57a591 : nop
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, dword ptr ds : [esi+0x358]
        pop ebp
        pop ebx
        jne public_57a5b1
        mov ecx, dword ptr ss : [esp+0xA4]
        cmp ecx, dword ptr ds : [esi+0x35C]
        je public_57a5bf
        public_57a5b1 : nop
        mov byte ptr ds : [esi+0x400], 1
        mov byte ptr ds : [esi+0x401], 1
        public_57a5bf : nop
        mov edx, dword ptr ds : [esi+0x3D4]
        push edx
        lea ecx, ds:[esi+0x384]
        call dword ptr ds : [public_5c6c24]
        public_57a5d2 : nop
        mov ecx, dword ptr ss : [esp+0xE4]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 
        UNREACHABLE_TRAP(0x579e90)
    }
}

#undef public_579f1c
#undef public_57a062
#undef public_57a298
#undef public_57a2a3
#undef public_57a2ad
#undef public_57a2b1
#undef public_57a2b9
#undef public_57a2bb
#undef public_57a2bf
#undef public_57a2ce
#undef public_57a2e0
#undef public_57a2ea
#undef public_57a2f0
#undef public_57a2f8
#undef public_57a2fa
#undef public_57a304
#undef public_57a320
#undef public_57a33f
#undef public_57a34d
#undef public_57a35a
#undef public_57a373
#undef public_57a3bd
#undef public_57a3c5
#undef public_57a3ec
#undef public_57a510
#undef public_57a546
#undef public_57a568
#undef public_57a56b
#undef public_57a591
#undef public_57a5b1
#undef public_57a5bf
#undef public_57a5d2
