#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4104e0);
CLANG_FORWARD_PROC_SYMBOL(public_410850);
CLANG_FORWARD_PROC_SYMBOL(public_410ec0);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411370);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_410524 _public_410524
#define public_41056b _public_41056b
#define public_410587 _public_410587
#define public_4105b7 _public_4105b7
#define public_41060e _public_41060e
#define public_41062b _public_41062b
#define public_410652 _public_410652
#define public_410689 _public_410689
#define public_4106a6 _public_4106a6
#define public_4106a8 _public_4106a8
#define public_4106ad _public_4106ad
#define public_4106e4 _public_4106e4
#define public_41070f _public_41070f
#define public_410733 _public_410733
#define public_41075b _public_41075b
#define public_410772 _public_410772
#define public_4107b3 _public_4107b3
#define public_4107b6 _public_4107b6
#define public_4107ec _public_4107ec
#define public_4107fd _public_4107fd
#define public_410803 _public_410803
#define public_410815 _public_410815
#define public_41081b _public_41081b
#define public_41083f _public_41083f

PROC_DECLARE(0x4104e0, internal_4104e0, public_4104e0);
extern "C" NAKED register_t __cdecl internal_4104e0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xB4]
        xor bl, bl
        test al, 8
        je public_410772
        test al, 0x20
        lea eax, ss:[esp+0x24]
        je public_410524
        push 0
        push 0
        push eax
        call public_411370
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        mov bl, 1
        jmp public_4106ad
        public_410524 : nop
        mov edx, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xBF800000
        call public_411370
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        test byte ptr ds : [esi+0xB4], 2
        je public_4105b7
        mov eax, dword ptr ds : [esi+0xB0]
        cmp eax, 3
        je public_41056b
        cmp eax, 2
        jne public_4105b7
        public_41056b : nop
        cmp eax, 1
        je public_410587
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ds : [esi+0x54]
        mov dword ptr ds : [esi+0x4C], ecx
        mov dword ptr ds : [esi+0x50], edx
        public_410587 : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_411350
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x7C], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x88], edx
        mov dword ptr ds : [esi+0x94], eax
        call public_410ec0
        public_4105b7 : nop
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        call public_410850
        test al, al
        je public_41060e
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi+0x18], edx
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_41060e
        test byte ptr ds : [esi+0xB4], 4
        je public_41060e
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x12C]
        public_41060e : nop
        cmp dword ptr ds : [esi+0xB0], 0xFFFFFFFE
        jne public_410689
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        jne public_41062b
        mov dword ptr ss : [esp+0x38], 0x3F800000
        jmp public_410652
        public_41062b : nop
        fld dword ptr ds : [esi+0x58]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x38]
        public_410652 : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_411d60
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax]
        add esp, 0xC
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        public_410689 : nop
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c7f68]
        fnstsw ax
        test ah, 5
        jp public_4106a6
        mov al, 1
        jmp public_4106a8
        public_4106a6 : nop
        xor al, al
        public_4106a8 : nop
        test al, al
        sete bl
        public_4106ad : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        je public_410772
        cmp dword ptr ds : [esi+0xB0], 3
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        je public_41070f
        mov eax, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [eax+0x40]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6164ec]
        test eax, eax
        jne public_4106e4
        call public_5b73e0
        mov dword ptr ds : [public_6164ec], eax
        public_4106e4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x98]
        push edx
        push ebp
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        fchs 
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [esi+0x48]
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ecx
        pop ebp
        public_41070f : nop
        cmp dword ptr ds : [esi+0xB0], 1
        je public_41075b
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_6164ec]
        test eax, eax
        jne public_410733
        call public_5b73e0
        mov dword ptr ds : [public_6164ec], eax
        public_410733 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        fchs 
        mov ecx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [esi+0x54]
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], ecx
        public_41075b : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xC]
        push ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        pop edi
        public_410772 : nop
        mov cl, byte ptr ds : [esi+0xB4]
        mov al, cl
        shr al, 4
        and al, 1
        cmp al, bl
        mov al, bl
        je public_41083f
        shl al, 4
        xor al, cl
        and al, 0x10
        xor al, cl
        test al, 0x10
        mov byte ptr ds : [esi+0xB4], al
        je public_4107ec
        mov eax, dword ptr ds : [public_6164e4]
        test eax, eax
        mov dword ptr ds : [public_6164e4], esi
        jne public_4107b3
        mov dword ptr ds : [public_6164e0], esi
        jmp public_4107b6
        public_4107b3 : nop
        mov dword ptr ds : [eax+4], esi
        public_4107b6 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], 0
        mov eax, dword ptr ds : [public_6164e8]
        mov ecx, dword ptr ds : [public_5c6de0]
        inc eax
        push 1
        mov dword ptr ds : [public_6164e8], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esi, 0xC
        push esi
        push eax
        call dword ptr ds : [edx+0xA4]
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x28
        ret 0xC
        public_4107ec : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_4107fd
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6164e0], eax
        jmp public_410803
        public_4107fd : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_410803 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_410815
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [public_6164e4], edx
        jmp public_41081b
        public_410815 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_41081b : nop
        mov eax, dword ptr ds : [public_6164e8]
        mov edx, dword ptr ds : [public_5c6de0]
        dec eax
        push 0
        mov dword ptr ds : [public_6164e8], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esi, 0xC
        push esi
        push eax
        call dword ptr ds : [ecx+0xA4]
        mov al, bl
        public_41083f : nop
        pop esi
        pop ebx
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x4104e0)
    }
}

#undef public_410524
#undef public_41056b
#undef public_410587
#undef public_4105b7
#undef public_41060e
#undef public_41062b
#undef public_410652
#undef public_410689
#undef public_4106a6
#undef public_4106a8
#undef public_4106ad
#undef public_4106e4
#undef public_41070f
#undef public_410733
#undef public_41075b
#undef public_410772
#undef public_4107b3
#undef public_4107b6
#undef public_4107ec
#undef public_4107fd
#undef public_410803
#undef public_410815
#undef public_41081b
#undef public_41083f
