#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaed40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47590);
CLANG_FORWARD_PROC_SYMBOL(public_6f73bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f475a2 _public_6f475a2
#define public_6f475b6 _public_6f475b6
#define public_6f475e2 _public_6f475e2
#define public_6f47640 _public_6f47640
#define public_6f4764b _public_6f4764b
#define public_6f476a1 _public_6f476a1
#define public_6f476b7 _public_6f476b7
#define public_6f47750 _public_6f47750
#define public_6f47764 _public_6f47764
#define public_6f47770 _public_6f47770
#define public_6f477a9 _public_6f477a9
#define public_6f477ab _public_6f477ab
#define public_6f477b3 _public_6f477b3
#define public_6f47800 _public_6f47800
#define public_6f4782b _public_6f4782b

PROC_DECLARE(0x6f47590, internal_6f47590, public_6f47590);
extern "C" NAKED register_t __cdecl internal_6f47590()
{
    __asm
    {
        sub esp, 0x4C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x184]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f475b6
        public_6f475a2 : nop
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x184]
        jne public_6f475a2
        public_6f475b6 : nop
        push ebp
        push edi
        mov ecx, esi
        call public_6eea860
        mov edi, eax
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edi
        call public_6eb70f0
        mov eax, dword ptr ds : [edi+0xE0]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f47764
        push ebx
        public_6f475e2 : nop
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eb70f0
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call public_6eeaee0
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fcomp dword ptr ds : [public_6fbafd0]
        fnstsw ax
        test ah, 0x41
        jp public_6f47750
        mov eax, dword ptr ds : [esi+0x184]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f476b7
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, edi
        public_6f47640 : nop
        cmp dword ptr ds : [edi+8], ecx
        je public_6f4764b
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6f47640
        public_6f4764b : nop
        cmp edi, eax
        je public_6f476b7
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f476a1
        mov ecx, dword ptr ds : [esi+8]
        call public_6f33f80
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_6fb365c]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6fbafc0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        je public_6f47750
        public_6f476a1 : nop
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [edi+0xC]
        fstp dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x10], 0
        jmp public_6f47750
        public_6f476b7 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6f33f80
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [edx+8]
        call public_6f33f80
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [public_6fb365c]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6fbafc0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jp public_6f47750
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x60]
        mov ebx, dword ptr ds : [esi+0x184]
        lea edi, ds:[esi+0x180]
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x40], 0
        mov edx, dword ptr ds : [ebx+4]
        push edx
        push ebx
        mov ecx, edi
        call public_6eaed40
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x38]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6f36ef0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        inc dword ptr ds : [esi+0x18C]
        public_6f47750 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [eax+0xE0]
        jne public_6f475e2
        pop ebx
        public_6f47764 : nop
        mov eax, dword ptr ds : [esi+0x184]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6f477b3
        public_6f47770 : nop
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f477a9
        mov edx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        push ecx
        mov dword ptr ds : [eax+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+0x188]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x188], eax
        mov ecx, edi
        jmp public_6f477ab
        public_6f477a9 : nop
        mov ecx, dword ptr ds : [ecx]
        public_6f477ab : nop
        cmp ecx, dword ptr ds : [esi+0x184]
        jne public_6f47770
        public_6f477b3 : nop
        mov eax, dword ptr ds : [esi+0x188]
        pop edi
        test eax, eax
        mov al, byte ptr ds : [esi+0x11C]
        pop ebp
        jne public_6f47800
        test al, al
        je public_6f4782b
        mov byte ptr ds : [esi+0x11C], 0
        call public_6efec10
        fstp qword ptr ds : [esi+0x178]
        mov ecx, esi
        mov dword ptr ds : [esi+0x18C], 0
        call public_6eea860
        test eax, eax
        je public_6f4782b
        push 1
        mov ecx, eax
        call public_6f73bb0
        pop esi
        add esp, 0x4C
        ret 4
        public_6f47800 : nop
        test al, al
        jne public_6f4782b
        mov byte ptr ds : [esi+0x11C], 1
        fld dword ptr ds : [public_6fb7d70]
        mov ecx, esi
        fstp qword ptr ds : [esi+0x178]
        call public_6eea860
        test eax, eax
        je public_6f4782b
        push 0
        mov ecx, eax
        call public_6f73bb0
        public_6f4782b : nop
        pop esi
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x6f47590)
    }
}

#undef public_6f475a2
#undef public_6f475b6
#undef public_6f475e2
#undef public_6f47640
#undef public_6f4764b
#undef public_6f476a1
#undef public_6f476b7
#undef public_6f47750
#undef public_6f47764
#undef public_6f47770
#undef public_6f477a9
#undef public_6f477ab
#undef public_6f477b3
#undef public_6f47800
#undef public_6f4782b
