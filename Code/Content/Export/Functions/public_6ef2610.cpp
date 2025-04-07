#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2610);
CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac0e8);

#define public_6ef267c _public_6ef267c
#define public_6ef26ae _public_6ef26ae
#define public_6ef26b0 _public_6ef26b0
#define public_6ef26f0 _public_6ef26f0
#define public_6ef2748 _public_6ef2748
#define public_6ef2760 _public_6ef2760
#define public_6ef276d _public_6ef276d
#define public_6ef2796 _public_6ef2796
#define public_6ef27aa _public_6ef27aa
#define public_6ef27fa _public_6ef27fa
#define public_6ef280e _public_6ef280e
#define public_6ef2815 _public_6ef2815
#define public_6ef2826 _public_6ef2826
#define public_6ef282a _public_6ef282a
#define public_6ef282e _public_6ef282e
#define public_6ef2833 _public_6ef2833
#define public_6ef2843 _public_6ef2843
#define public_6ef2848 _public_6ef2848
#define public_6ef2880 _public_6ef2880
#define public_6ef28d6 _public_6ef28d6
#define public_6ef28e6 _public_6ef28e6
#define public_6ef28f1 _public_6ef28f1
#define public_6ef2903 _public_6ef2903
#define public_6ef2908 _public_6ef2908
#define public_6ef2965 _public_6ef2965
#define public_6ef2988 _public_6ef2988
#define public_6ef2995 _public_6ef2995
#define public_6ef29a0 _public_6ef29a0
#define public_6ef29aa _public_6ef29aa
#define public_6ef29b1 _public_6ef29b1
#define public_6ef29bb _public_6ef29bb
#define public_6ef29c6 _public_6ef29c6
#define public_6ef29ea _public_6ef29ea

PROC_DECLARE(0x6ef2610, internal_6ef2610, public_6ef2610);
extern "C" NAKED register_t __cdecl internal_6ef2610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac0e8 @0x6ef2612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac0e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        mov eax, dword ptr ss : [esp+0x80]
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push eax
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x13], 1
        call public_6f49b00
        xor esi, esi
        add esp, 4
        cmp eax, esi
        je public_6ef267c
        mov ecx, eax
        call public_6f478c0
        cmp eax, esi
        je public_6ef267c
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, esi
        je public_6ef267c
        mov eax, dword ptr ds : [eax+0x48]
        cmp eax, dword ptr ds : [ecx+0x48]
        je public_6ef267c
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 4
        public_6ef267c : nop
        cmp dword ptr ds : [ebx+0x18], esi
        je public_6ef29ea
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], esi
        mov byte ptr ss : [esp+0x4C], 0
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6ef29ea
        push ebp
        jmp public_6ef26b0
        public_6ef26ae : nop
        xor esi, esi
        public_6ef26b0 : nop
        mov cl, byte ptr ss : [esp+0x90]
        mov byte ptr ss : [esp+0x3C], cl
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov ebp, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [eax+0x48]
        cmp ebp, edx
        lea ecx, ds:[eax+0x48]
        mov dword ptr ss : [esp+0x88], esi
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x38], ecx
        je public_6ef2880
        add ebp, 4
        lea ebx, ds:[ebx]
        public_6ef26f0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x18]
        push edx
        lea ebx, ss:[ebp+0x30]
        push ebx
        call public_6f73ac0
        xor edx, edx
        mov edi, offset public_6fb4708
        lea esi, ds:[ebx+4]
        mov ecx, 7
        repe cmpsb
        sete cl
        test cl, cl
        mov dword ptr ss : [esp+0x20], eax
        je public_6ef2760
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6ef2748
        mov ecx, dword ptr ss : [esp+0x90]
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ef2843
        public_6ef2748 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6ef2843
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        jmp public_6ef276d
        public_6ef2760 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x18]
        push eax
        call public_6f73a40
        public_6ef276d : nop
        test eax, eax
        je public_6ef2843
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x70], eax
        mov al, byte ptr ds : [ebx+0x34]
        test al, al
        je public_6ef2848
        test ebp, ebp
        jne public_6ef2796
        mov dword ptr ss : [esp+0x4C], ebp
        mov byte ptr ss : [esp+0x50], 0
        jmp public_6ef27aa
        public_6ef2796 : nop
        push ebp
        lea ecx, ss:[esp+0x54]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x4C], eax
        public_6ef27aa : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0x18]
        push edx
        push eax
        call public_6f73ac0
        xor edx, edx
        mov edi, offset public_6fb4708
        mov esi, ebp
        mov ecx, 7
        repe cmpsb
        sete cl
        test cl, cl
        mov dword ptr ss : [esp+0x2C], eax
        je public_6ef2815
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6ef27fa
        mov ecx, dword ptr ss : [esp+0x90]
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ef280e
        public_6ef27fa : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6ef282e
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        jmp public_6ef282a
        public_6ef280e : nop
        mov byte ptr ss : [esp+0x13], 0
        jmp public_6ef2826
        public_6ef2815 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x18]
        push eax
        call public_6f73a40
        mov dword ptr ss : [esp+0x18], eax
        public_6ef2826 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6ef282a : nop
        test eax, eax
        jne public_6ef2833
        public_6ef282e : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ef2833 : nop
        mov eax, dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_6ef2848
        public_6ef2843 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ef2848 : nop
        mov eax, dword ptr ss : [esp+0x44]
        lea edx, ss:[ebp+0x68]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6f69d50
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x7C
        add ebp, 0x7C
        cmp eax, edx
        mov dword ptr ss : [esp+0x24], eax
        jne public_6ef26f0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ef2880 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+0x18]
        push edx
        add eax, 0xC
        push eax
        call public_6f73ac0
        mov ecx, dword ptr ss : [esp+0x1C]
        lea esi, ds:[ecx+0x10]
        xor edx, edx
        mov edi, offset public_6fb4708
        mov ecx, 7
        mov dword ptr ss : [esp+0x30], eax
        repe cmpsb
        sete cl
        test cl, cl
        je public_6ef28e6
        lea eax, ss:[esp+0x30]
        push eax
        call public_6f49bc0
        xor esi, esi
        add esp, 4
        cmp eax, esi
        jne public_6ef28d6
        mov ecx, dword ptr ss : [esp+0x90]
        push ecx
        call public_6f49b00
        add esp, 4
        cmp eax, esi
        je public_6ef2903
        public_6ef28d6 : nop
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, esi
        je public_6ef2903
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6ef28f1
        public_6ef28e6 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        push eax
        call public_6f73a40
        xor esi, esi
        public_6ef28f1 : nop
        cmp eax, esi
        je public_6ef2903
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, eax
        call public_6eb6ea0
        jmp public_6ef2908
        public_6ef2903 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ef2908 : nop
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        call public_6f466e0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ebx+8]
        jne public_6ef26ae
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        pop ebp
        je public_6ef29ea
        mov eax, dword ptr ds : [public_6fd0bc0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x8C], 0x3F000000
        je public_6ef29c6
        public_6ef2965 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        call public_6f481e0
        cmp dword ptr ss : [esp+0x24], eax
        je public_6ef29bb
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ef2995
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ef29b1
        public_6ef2988 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ef2988
        jmp public_6ef29b1
        public_6ef2995 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ef29aa
        lea ecx, ds:[ecx]
        public_6ef29a0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ef29a0
        public_6ef29aa : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ef29b1
        mov esi, eax
        public_6ef29b1 : nop
        cmp esi, dword ptr ds : [public_6fd0bc0]
        jne public_6ef2965
        jmp public_6ef29c6
        public_6ef29bb : nop
        mov dword ptr ss : [esp+0x8C], 0x3F800000
        public_6ef29c6 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        push 0
        push 0
        push 0
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        call public_6f72930
        public_6ef29ea : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 4
        UNREACHABLE_TRAP(0x6ef2610)
    }
}

#undef public_6ef267c
#undef public_6ef26ae
#undef public_6ef26b0
#undef public_6ef26f0
#undef public_6ef2748
#undef public_6ef2760
#undef public_6ef276d
#undef public_6ef2796
#undef public_6ef27aa
#undef public_6ef27fa
#undef public_6ef280e
#undef public_6ef2815
#undef public_6ef2826
#undef public_6ef282a
#undef public_6ef282e
#undef public_6ef2833
#undef public_6ef2843
#undef public_6ef2848
#undef public_6ef2880
#undef public_6ef28d6
#undef public_6ef28e6
#undef public_6ef28f1
#undef public_6ef2903
#undef public_6ef2908
#undef public_6ef2965
#undef public_6ef2988
#undef public_6ef2995
#undef public_6ef29a0
#undef public_6ef29aa
#undef public_6ef29b1
#undef public_6ef29bb
#undef public_6ef29c6
#undef public_6ef29ea
