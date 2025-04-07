#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63217e0);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_632181c _public_632181c
#define public_6321837 _public_6321837
#define public_6321846 _public_6321846
#define public_632185d _public_632185d
#define public_6321886 _public_6321886
#define public_63218a1 _public_63218a1
#define public_63218b0 _public_63218b0
#define public_63218c7 _public_63218c7
#define public_63218eb _public_63218eb
#define public_6321902 _public_6321902
#define public_6321944 _public_6321944
#define public_6321978 _public_6321978
#define public_6321980 _public_6321980
#define public_63219b4 _public_63219b4
#define public_63219cb _public_63219cb
#define public_6321a11 _public_6321a11
#define public_6321a4f _public_6321a4f
#define public_6321a59 _public_6321a59
#define public_6321a63 _public_6321a63

PROC_DECLARE(0x63217e0, internal_63217e0, public_63217e0);
extern "C" NAKED register_t __cdecl internal_63217e0()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ds : [public_63a3cd4]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_64018c4
        mov esi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x14], edx
        call public_63227c0
        test al, al
        je public_632181c
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6321837
        public_632181c : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6321837 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321846
        lea edi, ds:[eax+0x10]
        test edi, edi
        jne public_632185d
        public_6321846 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6320290
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6321a63
        public_632185d : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, offset public_64018c4
        mov ebp, 0xFFFFFFFD
        call public_63227c0
        test al, al
        je public_6321886
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_63218a1
        public_6321886 : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_63218a1 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_63218b0
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_63218c7
        public_63218b0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6321a59
        public_63218c7 : nop
        push ebx
        push esi
        push edi
        xor ebp, ebp
        call public_631ff70
        fld dword ptr ds : [public_63a3ccc]
        fcomp 
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_63218eb
        fstp st(0)
        fld dword ptr ds : [public_63a3ccc]
        public_63218eb : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6321902
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_6321902 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        fld st(0)
        fstp dword ptr ds : [ebx]
        fld st(0)
        fld qword ptr ds : [public_63a3ce8]
        fchs 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6321944
        fsub qword ptr ds : [public_6401918]
        fmul qword ptr ds : [public_6401920]
        call public_6391dae
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fdiv qword ptr ds : [public_6401920]
        fsub qword ptr ds : [public_63a3ce8]
        jmp public_6321980
        public_6321944 : nop
        fcom qword ptr ds : [public_63a3ce8]
        fnstsw ax
        test ah, 0x41
        jne public_6321978
        fadd qword ptr ds : [public_6401918]
        fmul qword ptr ds : [public_6401920]
        call public_6391dae
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fdiv qword ptr ds : [public_6401920]
        fadd qword ptr ds : [public_63a3ce8]
        jmp public_6321980
        public_6321978 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_6321980 : nop
        fstp dword ptr ds : [ebx]
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        je public_6321a59
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push edi
        push esi
        call public_631ff70
        fld dword ptr ds : [public_63a3ccc]
        fcomp 
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_63219b4
        fstp st(0)
        fld dword ptr ds : [public_63a3ccc]
        public_63219b4 : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63219cb
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_63219cb : nop
        fst dword ptr ds : [ebx]
        fld st(0)
        fld qword ptr ds : [public_63a3ce8]
        fchs 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6321a11
        fsub qword ptr ds : [public_6401918]
        fmul qword ptr ds : [public_6401920]
        call public_6391dae
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov eax, ebp
        fdiv qword ptr ds : [public_6401920]
        pop ebp
        fsub qword ptr ds : [public_63a3ce8]
        fstp dword ptr ds : [ebx]
        pop ebx
        add esp, 0xC
        ret 
        public_6321a11 : nop
        fcom qword ptr ds : [public_63a3ce8]
        fnstsw ax
        test ah, 0x41
        jne public_6321a4f
        fadd qword ptr ds : [public_6401918]
        fmul qword ptr ds : [public_6401920]
        call public_6391dae
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov eax, ebp
        fdiv qword ptr ds : [public_6401920]
        pop ebp
        fadd qword ptr ds : [public_63a3ce8]
        fstp dword ptr ds : [ebx]
        pop ebx
        add esp, 0xC
        ret 
        public_6321a4f : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        fstp dword ptr ds : [ebx]
        public_6321a59 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6321a63 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x63217e0)
    }
}

#undef public_632181c
#undef public_6321837
#undef public_6321846
#undef public_632185d
#undef public_6321886
#undef public_63218a1
#undef public_63218b0
#undef public_63218c7
#undef public_63218eb
#undef public_6321902
#undef public_6321944
#undef public_6321978
#undef public_6321980
#undef public_63219b4
#undef public_63219cb
#undef public_6321a11
#undef public_6321a4f
#undef public_6321a59
#undef public_6321a63
