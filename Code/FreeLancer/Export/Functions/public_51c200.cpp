#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422440);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c83c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c83e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7480);
CLANG_FORWARD_PROC_SYMBOL(public_504880);
CLANG_FORWARD_PROC_SYMBOL(public_504890);
CLANG_FORWARD_PROC_SYMBOL(public_51b730);
CLANG_FORWARD_PROC_SYMBOL(public_51ba20);
CLANG_FORWARD_PROC_SYMBOL(public_51be10);
CLANG_FORWARD_PROC_SYMBOL(public_51c200);
CLANG_FORWARD_PROC_SYMBOL(public_51ed20);
CLANG_FORWARD_PROC_SYMBOL(public_51eda0);
CLANG_FORWARD_PROC_SYMBOL(public_51f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_51f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_51f8d0);
CLANG_FORWARD_PROC_SYMBOL(public_51f950);
CLANG_FORWARD_PROC_SYMBOL(public_540a00);
CLANG_FORWARD_PROC_SYMBOL(public_540a20);
CLANG_FORWARD_PROC_SYMBOL(public_540a40);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_552e70);
CLANG_FORWARD_PROC_SYMBOL(public_555460);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_51c235 _public_51c235
#define public_51c273 _public_51c273
#define public_51c2d8 _public_51c2d8
#define public_51c328 _public_51c328
#define public_51c39d _public_51c39d
#define public_51c3b8 _public_51c3b8
#define public_51c3df _public_51c3df
#define public_51c49d _public_51c49d
#define public_51c4a5 _public_51c4a5
#define public_51c4a7 _public_51c4a7
#define public_51c4dd _public_51c4dd
#define public_51c4f1 _public_51c4f1
#define public_51c500 _public_51c500
#define public_51c51a _public_51c51a
#define public_51c558 _public_51c558
#define public_51c589 _public_51c589
#define public_51c58b _public_51c58b
#define public_51c593 _public_51c593
#define public_51c59f _public_51c59f
#define public_51c5ae _public_51c5ae
#define public_51c5e5 _public_51c5e5
#define public_51c60f _public_51c60f
#define public_51c62e _public_51c62e
#define public_51c64d _public_51c64d
#define public_51c673 _public_51c673
#define public_51c69a _public_51c69a
#define public_51c6e3 _public_51c6e3
#define public_51c793 _public_51c793
#define public_51c7a0 _public_51c7a0
#define public_51c7d4 _public_51c7d4
#define public_51c7db _public_51c7db
#define public_51c86b _public_51c86b
#define public_51c893 _public_51c893

PROC_DECLARE(0x51c200, internal_51c200, public_51c200);
extern "C" NAKED register_t __cdecl internal_51c200()
{
    __asm
    {
        mov eax, 0x2020
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_54baf0
        mov edi, eax
        xor ebp, ebp
        cmp edi, ebp
        je public_51c328
        mov eax, dword ptr ds : [edi+0x158]
        cmp eax, 2
        je public_51c235
        cmp eax, 3
        jne public_51c328
        public_51c235 : nop
        mov eax, dword ptr ds : [public_6164d4]
        push eax
        mov dword ptr ds : [public_675244], ebp
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x18]
        fcomp dword ptr ds : [esi+0xC8]
        fnstsw ax
        test ah, 0x44
        jnp public_51c273
        mov eax, dword ptr ds : [esi+0xC8]
        push eax
        mov ecx, esi
        call public_40f8c0
        public_51c273 : nop
        mov ecx, dword ptr ds : [edi+0x188]
        push esi
        call public_504890
        mov edx, dword ptr ds : [edi]
        push ebp
        push ebp
        mov word ptr ss : [esp+0x18], bp
        mov word ptr ss : [esp+0x1A], 0xFFFF
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x188]
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c2d8
        push 0x25
        call public_42d680
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_4f7480
        add esp, 0xC
        push 0x1B
        call public_42d680
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_4f7480
        add esp, 0xC
        public_51c2d8 : nop
        mov ecx, dword ptr ds : [edi+0x188]
        call public_504880
        cmp eax, ebp
        je public_51c893
        mov cl, byte ptr ds : [eax+2]
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+0xE8]
        mov al, byte ptr ds : [eax]
        or bl, 1
        pop edi
        mov byte ptr ds : [esi+0xE8], bl
        mov byte ptr ds : [esi+0xE9], al
        mov byte ptr ds : [esi+0xEA], dl
        mov byte ptr ds : [esi+0xEB], cl
        mov byte ptr ds : [esi+0xBC], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2020
        ret 8
        public_51c328 : nop
        mov ecx, offset public_675360
        call public_51ed20
        mov edx, dword ptr ss : [esp+0x2034]
        mov eax, dword ptr ss : [esp+0x2038]
        mov ecx, esi
        mov dword ptr ds : [public_675360], edx
        mov dword ptr ds : [public_675364], eax
        call public_51b730
        mov eax, dword ptr ds : [public_67524c]
        mov edi, 2
        cmp eax, edi
        je public_51c39d
        mov ecx, dword ptr ds : [public_610534]
        mov edx, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [edx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, esi
        call public_51ba20
        mov ecx, esi
        call public_51be10
        mov eax, dword ptr ds : [public_6164d4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        public_51c39d : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x24]
        fstp st(0)
        cmp dword ptr ds : [public_67524c], edi
        mov eax, dword ptr ds : [public_6164d4]
        je public_51c3b8
        mov dword ptr ss : [esp+0x14], eax
        jmp public_51c3df
        public_51c3b8 : nop
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x44]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6164d4]
        fnstsw ax
        test ah, 0x41
        jne public_51c3df
        mov ecx, dword ptr ds : [public_6164d4]
        mov dword ptr ss : [esp+0x14], ecx
        public_51c3df : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, dword ptr ss : [esp+0x14]
        push 0x1B
        mov dword ptr ds : [public_675368], ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c51a
        push 0x20
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c51a
        mov ecx, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [ecx]
        push 0xFDFF
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        cmp edi, ebp
        je public_51c4f1
        mov eax, dword ptr ds : [public_613ec8]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x2C], 0x800
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_51c4f1
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        jbe public_51c4f1
        cmp ebp, eax
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x10], edx
        jae public_51c4a5
        public_51c49d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        jmp public_51c4a7
        public_51c4a5 : nop
        xor eax, eax
        public_51c4a7 : nop
        push 0
/*FIXUP push offset public_613718 @0x51c4a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_613718
/*FIXUP push offset public_613700 @0x51c4ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_613700
        push 0
        push eax
        call public_5b8058
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je public_51c4dd
        push edi
        call public_540a40
        add esp, 4
        test al, al
        jne public_51c4dd
        push esi
        push edi
        mov ecx, offset public_675360
        call public_51f2c0
        public_51c4dd : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        inc ebp
        add edx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], edx
        jb public_51c49d
        public_51c4f1 : nop
        call public_4c83c0
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_51c51a
        mov edi, edi
        public_51c500 : nop
        push edi
        call public_4c83e0
        add esp, 4
        push esi
        push eax
        mov ecx, offset public_675360
        call public_51f2c0
        inc edi
        cmp edi, ebp
        jl public_51c500
        public_51c51a : nop
        test byte ptr ss : [esp+0x2034], 0x40
        mov ebx, 7
        je public_51c5ae
        push 0x20
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c5ae
        push 0x1B
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c5ae
        lea ecx, ss:[esp+0x10]
        call public_540a00
        mov edi, eax
        test edi, edi
        je public_51c5ae
        public_51c558 : nop
        push 0x23
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_51c593
        test edi, edi
        je public_51c589
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_51c589
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_51c589
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_51c58b
        public_51c589 : nop
        xor eax, eax
        public_51c58b : nop
        test byte ptr ds : [eax+0xE0], bl
        jne public_51c59f
        public_51c593 : nop
        push esi
        push edi
        mov ecx, offset public_675360
        call public_51f2c0
        public_51c59f : nop
        lea ecx, ss:[esp+0x10]
        call public_540a20
        mov edi, eax
        test edi, edi
        jne public_51c558
        public_51c5ae : nop
        push 0x1B
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c69a
        test byte ptr ss : [esp+0x2034], 0x20
        je public_51c5e5
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c5e5
        push esi
        push 1
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c5e5 : nop
        mov edi, dword ptr ss : [esp+0x2034]
        and edi, 0x80
        je public_51c60f
        push 0x1E
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c60f
        push esi
        push 4
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c60f : nop
        test edi, edi
        je public_51c64d
        push 0x1E
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c62e
        push esi
        push 5
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c62e : nop
        test edi, edi
        je public_51c64d
        push 0x1E
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c64d
        push esi
        push 6
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c64d : nop
        mov eax, dword ptr ss : [esp+0x2034]
        test ah, 8
        je public_51c673
        push 0x1F
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c673
        push esi
        push ebx
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c673 : nop
        mov eax, dword ptr ss : [esp+0x2034]
        test ah, 4
        je public_51c69a
        push 0x1F
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c69a
        push esi
        push 0xA
        mov ecx, offset public_675360
        call public_51f7d0
        public_51c69a : nop
        mov ecx, offset public_675360
        call public_51eda0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        cmp dword ptr ds : [public_67524c], 2
        je public_51c6e3
        push 0x19
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c6e3
        test byte ptr ss : [esp+0x2034], 1
        je public_51c6e3
        push esi
        call public_552e70
        add esp, 4
        public_51c6e3 : nop
        push esi
        mov ecx, offset public_675360
        call public_51f8d0
        push esi
        mov ecx, offset public_675360
        call public_51f950
        mov eax, dword ptr ss : [esp+0x2034]
        test ah, 1
        je public_51c7db
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c7d4
        mov eax, dword ptr ds : [public_67524c]
        test eax, eax
        je public_51c793
        mov edx, dword ptr ds : [public_675244]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov edi, dword ptr ds : [edx]
        push esi
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [public_675244]
        push eax
        call dword ptr ds : [edi+0x3C]
        push ecx
        mov ecx, dword ptr ds : [public_675244]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x38]
        push ecx
        lea eax, ss:[esp+0x20]
        fstp dword ptr ss : [esp]
        push eax
        call public_422440
        add esp, 0xC
        jmp public_51c7a0
        public_51c793 : nop
        push 0xB60
        call public_421ed0
        add esp, 4
        public_51c7a0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [edx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        push 0xFFFFFFFF
        call public_42d680
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_4f7480
        push 0xB60
        call public_421ed0
        add esp, 0x10
        public_51c7d4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        public_51c7db : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [edx+0xF0]
        call public_555460
        mov cl, byte ptr ds : [eax+1]
        mov dl, byte ptr ds : [eax+2]
        mov bl, byte ptr ds : [eax]
        mov byte ptr ss : [esp+0x15], cl
        mov ecx, dword ptr ds : [public_675244]
        test ecx, ecx
        mov byte ptr ss : [esp+0x16], dl
        je public_51c86b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_51c86b
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75d8]
        mov bl, al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75d8]
        mov byte ptr ss : [esp+0x15], al
        call public_5b7ec0
        mov byte ptr ss : [esp+0x16], al
        public_51c86b : nop
        mov al, byte ptr ds : [esi+0xE8]
        mov cl, byte ptr ss : [esp+0x15]
        mov dl, byte ptr ss : [esp+0x16]
        or al, 1
        mov byte ptr ds : [esi+0xE8], al
        mov byte ptr ds : [esi+0xE9], bl
        mov byte ptr ds : [esi+0xEA], cl
        mov byte ptr ds : [esi+0xEB], dl
        public_51c893 : nop
        pop edi
        mov byte ptr ds : [esi+0xBC], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2020
        ret 8
        UNREACHABLE_TRAP(0x51c200)
    }
}

#undef public_51c235
#undef public_51c273
#undef public_51c2d8
#undef public_51c328
#undef public_51c39d
#undef public_51c3b8
#undef public_51c3df
#undef public_51c49d
#undef public_51c4a5
#undef public_51c4a7
#undef public_51c4dd
#undef public_51c4f1
#undef public_51c500
#undef public_51c51a
#undef public_51c558
#undef public_51c589
#undef public_51c58b
#undef public_51c593
#undef public_51c59f
#undef public_51c5ae
#undef public_51c5e5
#undef public_51c60f
#undef public_51c62e
#undef public_51c64d
#undef public_51c673
#undef public_51c69a
#undef public_51c6e3
#undef public_51c793
#undef public_51c7a0
#undef public_51c7d4
#undef public_51c7db
#undef public_51c86b
#undef public_51c893
