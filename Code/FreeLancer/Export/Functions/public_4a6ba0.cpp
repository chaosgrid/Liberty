#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_4568a0);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4b65a0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_4a6cdd _public_4a6cdd
#define public_4a6d05 _public_4a6d05
#define public_4a6d26 _public_4a6d26
#define public_4a6d3a _public_4a6d3a
#define public_4a6d4f _public_4a6d4f
#define public_4a6d7e _public_4a6d7e
#define public_4a6d92 _public_4a6d92
#define public_4a6e1d _public_4a6e1d
#define public_4a6e93 _public_4a6e93
#define public_4a6ea6 _public_4a6ea6
#define public_4a6eb4 _public_4a6eb4
#define public_4a6ed6 _public_4a6ed6
#define public_4a6ee5 _public_4a6ee5
#define public_4a6ef3 _public_4a6ef3
#define public_4a6f18 _public_4a6f18
#define public_4a6f3a _public_4a6f3a
#define public_4a6f5c _public_4a6f5c
#define public_4a6f7b _public_4a6f7b
#define public_4a6f9a _public_4a6f9a
#define public_4a6fb9 _public_4a6fb9
#define public_4a6fd6 _public_4a6fd6
#define public_4a6fe3 _public_4a6fe3
#define public_4a6fed _public_4a6fed

PROC_DECLARE(0x4a6ba0, internal_4a6ba0, public_4a6ba0);
extern "C" NAKED register_t __cdecl internal_4a6ba0()
{
    __asm
    {
        sub esp, 0x144
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call public_45a460
        push 1
        call public_4424f0
        call public_4b65a0
        xor ebp, ebp
        push ebp
/*FIXUP push offset public_5cb128 @0x4a6bc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 0xC
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        push ebp
        push ebp
        push 1
        push ebp
        push 1
        push 1
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x48]
        push ecx
        push ebp
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5d21b0 @0x4a6bea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d21b0
/*FIXUP push offset public_5d4750 @0x4a6bef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4750
        mov ecx, edi
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0db0
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        push ebp
        push ebp
        push 1
        push ebp
        push 1
        push 1
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x48]
        push ecx
        push ebp
        lea edx, ss:[esp+0x5C]
        push edx
/*FIXUP push offset public_5d4720 @0x4a6c40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4720
/*FIXUP push offset public_5d4714 @0x4a6c45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4714
        mov ecx, edi
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], 0x3C1374C0
        mov dword ptr ss : [esp+0x70], 0xBF800000
        call public_5a0db0
        push ebp
        push ebp
        push 1
        mov dword ptr ss : [esp+0x1C], 0xB2800000
        mov dword ptr ss : [esp+0x20], 0x3E6147AF
        mov dword ptr ss : [esp+0x24], 0xBF800000
        push ebp
        push 0x402CCCCD
        push 0x3CF5C28F
        push 0x3EB33333
        push ebp
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5ce91c @0x4a6caf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d4708 @0x4a6cb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4708
        mov ecx, edi
        call public_5a0e30
        mov dword ptr ds : [edi+0x334], eax
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4a6d26
        mov eax, dword ptr ds : [public_66873c]
        xor bl, bl
        cmp eax, ebp
        je public_4a6cdd
        mov bl, 1
        public_4a6cdd : nop
        mov ecx, offset public_66d2d0
        call public_4568a0
        test al, al
        je public_4a6d05
        test bl, bl
        je public_4a6d05
        mov dword ptr ds : [edi+0x364], 2
        mov dword ptr ds : [edi+0x368], 3
        jmp public_4a6d3a
        public_4a6d05 : nop
        mov ebx, 4
        mov dword ptr ds : [edi+0x364], 3
        mov dword ptr ds : [edi+0x368], ebx
        mov dword ptr ds : [edi+0x36C], 5
        jmp public_4a6d4f
        public_4a6d26 : nop
        mov dword ptr ds : [edi+0x364], 6
        mov dword ptr ds : [edi+0x368], 7
        public_4a6d3a : nop
        mov ebx, 5
        mov dword ptr ds : [edi+0x36C], 4
        mov dword ptr ds : [edi+0x370], ebx
        public_4a6d4f : nop
        cmp ebx, 4
        mov dword ptr ds : [edi+0x360], 1
        mov dword ptr ss : [esp+0x40], 0x3E189375
        mov dword ptr ss : [esp+0x38], 0x3DA8F5C3
        jne public_4a6d7e
        mov dword ptr ss : [esp+0x40], 0x3E0374BD
        mov dword ptr ss : [esp+0x38], 0x3DC51EB9
        public_4a6d7e : nop
        xor esi, esi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x34], esi
        jle public_4a6e93
        lea ebp, ds:[edi+0x34C]
        public_4a6d92 : nop
        fild dword ptr ss : [esp+0x34]
        push esi
        lea ecx, ss:[esp+0x58]
/*FIXUP push offset public_5d46f4 @0x4a6d9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d46f4
        fmul dword ptr ss : [esp+0x40]
        push ecx
        fld dword ptr ss : [esp+0x4C]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x58]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push 0
        lea ecx, ss:[esp+0x74]
        push ecx
        fstp dword ptr ss : [esp+0x44]
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], 0x3E333333
        mov dword ptr ss : [esp+0x38], 0x3CE56042
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x48], 0xBF800000
        call public_5a0d00
        lea ecx, ds:[ebx-1]
        cmp esi, ecx
        mov dword ptr ss : [ebp-0x14], eax
        jne public_4a6e1d
        or byte ptr ds : [eax+0x35D], 1
        public_4a6e1d : nop
        push esi
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_5d46e0 @0x4a6e22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d46e0
        push edx
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [public_5d3e44]
        add esp, 0xC
        push 0
        push 0
        push 1
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea eax, ss:[esp+0x48]
        push eax
/*FIXUP push offset public_5d0410 @0x4a6e59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        lea ecx, ss:[esp+0x7C]
        push ecx
        fstp dword ptr ss : [esp+0x58]
        mov ecx, edi
        mov dword ptr ss : [esp+0x54], 0x32300000
        mov dword ptr ss : [esp+0x5C], 0xBF800000
        call public_5a0e30
        inc esi
        mov dword ptr ss : [ebp], eax
        add ebp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], esi
        jl public_4a6d92
        xor ebp, ebp
        public_4a6e93 : nop
        cmp ebx, 5
        jge public_4a6eb4
        mov ecx, 5
        lea eax, ds:[edi+ebx*4+0x34C]
        sub ecx, ebx
        public_4a6ea6 : nop
        mov dword ptr ds : [eax-0x14], ebp
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+0x14], ebp
        add eax, 4
        dec ecx
        jne public_4a6ea6
        public_4a6eb4 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov ecx, dword ptr ds : [edi+0x334]
        push ebp
        je public_4a6ed6
        mov edx, dword ptr ds : [ecx]
        push 0x71C
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        jmp public_4a6ee5
        public_4a6ed6 : nop
        mov eax, dword ptr ds : [ecx]
        push 0x724
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_4a6ee5 : nop
        cmp ebx, ebp
        jle public_4a6fed
        lea esi, ds:[edi+0x34C]
        public_4a6ef3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 1
        jne public_4a6f18
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x71D
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33A
        jmp public_4a6fd6
        public_4a6f18 : nop
        cmp eax, 2
        jne public_4a6f3a
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x71E
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33B
        jmp public_4a6fd6
        public_4a6f3a : nop
        cmp eax, 3
        jne public_4a6f5c
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x71F
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33C
        jmp public_4a6fd6
        public_4a6f5c : nop
        cmp eax, 4
        jne public_4a6f7b
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x720
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33D
        jmp public_4a6fd6
        public_4a6f7b : nop
        cmp eax, 5
        jne public_4a6f9a
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x721
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33E
        jmp public_4a6fd6
        public_4a6f9a : nop
        cmp eax, 6
        jne public_4a6fb9
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x752
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x33F
        jmp public_4a6fd6
        public_4a6fb9 : nop
        cmp eax, 7
        jne public_4a6fe3
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 0x725
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push ebp
        push 0x340
        public_4a6fd6 : nop
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push 3
        call dword ptr ds : [eax+0xA8]
        public_4a6fe3 : nop
        add esi, 4
        dec ebx
        jne public_4a6ef3
        public_4a6fed : nop
        push 1
        mov dword ptr ds : [edi+0x70], 0x64
        mov dword ptr ds : [edi+0x78], 6
        call public_42d6f0
        call public_41dd90
        push 1
        mov bl, al
        call public_41dda0
        lea esi, ds:[edi+0x32C]
        push esi
        mov byte ptr ds : [edi+0x330], bl
        call public_577b40
        add esp, 0xC
        push 0x11
        mov ecx, esi
        call public_5760d0
        push 0xF
        mov ecx, esi
        call public_5760d0
        push 0x14
        mov ecx, esi
        call public_5760d0
        mov ecx, dword ptr ss : [esp+0x15C]
        mov edx, dword ptr ss : [esp+0x158]
        push ecx
        push edx
        mov ecx, edi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x144
        ret 8
        UNREACHABLE_TRAP(0x4a6ba0)
    }
}

#undef public_4a6cdd
#undef public_4a6d05
#undef public_4a6d26
#undef public_4a6d3a
#undef public_4a6d4f
#undef public_4a6d7e
#undef public_4a6d92
#undef public_4a6e1d
#undef public_4a6e93
#undef public_4a6ea6
#undef public_4a6eb4
#undef public_4a6ed6
#undef public_4a6ee5
#undef public_4a6ef3
#undef public_4a6f18
#undef public_4a6f3a
#undef public_4a6f5c
#undef public_4a6f7b
#undef public_4a6f9a
#undef public_4a6fb9
#undef public_4a6fd6
#undef public_4a6fe3
#undef public_4a6fed
