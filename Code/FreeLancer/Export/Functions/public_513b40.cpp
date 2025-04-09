#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4fcc40);
CLANG_FORWARD_PROC_SYMBOL(public_513b40);
CLANG_FORWARD_PROC_SYMBOL(public_513fb0);
CLANG_FORWARD_PROC_SYMBOL(public_514010);
CLANG_FORWARD_PROC_SYMBOL(public_514050);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_5140c0);
CLANG_FORWARD_PROC_SYMBOL(public_514110);
CLANG_FORWARD_PROC_SYMBOL(public_514260);
CLANG_FORWARD_PROC_SYMBOL(public_5142e0);
CLANG_FORWARD_PROC_SYMBOL(public_5145a0);
CLANG_FORWARD_PROC_SYMBOL(public_514750);
CLANG_FORWARD_PROC_SYMBOL(public_514960);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_513b56 _public_513b56
#define public_513b58 _public_513b58
#define public_513b90 _public_513b90
#define public_513bcd _public_513bcd
#define public_513bd9 _public_513bd9
#define public_513bdb _public_513bdb
#define public_513c03 _public_513c03
#define public_513c0f _public_513c0f
#define public_513c11 _public_513c11
#define public_513c4b _public_513c4b
#define public_513c60 _public_513c60
#define public_513c7f _public_513c7f
#define public_513cab _public_513cab
#define public_513cd9 _public_513cd9
#define public_513d03 _public_513d03
#define public_513d1a _public_513d1a
#define public_513d2b _public_513d2b
#define public_513d2d _public_513d2d
#define public_513da7 _public_513da7
#define public_513db1 _public_513db1
#define public_513db7 _public_513db7
#define public_513dc8 _public_513dc8
#define public_513dd4 _public_513dd4
#define public_513dd6 _public_513dd6
#define public_513e59 _public_513e59
#define public_513e6e _public_513e6e
#define public_513e83 _public_513e83
#define public_513ebb _public_513ebb
#define public_513ebd _public_513ebd
#define public_513ed6 _public_513ed6
#define public_513ee1 _public_513ee1
#define public_513ee4 _public_513ee4
#define public_513ef0 _public_513ef0
#define public_513ef2 _public_513ef2
#define public_513f1f _public_513f1f
#define public_513f21 _public_513f21
#define public_513f2d _public_513f2d
#define public_513f2f _public_513f2f
#define public_513f4d _public_513f4d
#define public_513f92 _public_513f92
#define public_513fa3 _public_513fa3

PROC_DECLARE(0x513b40, internal_513b40, public_513b40);
extern "C" NAKED register_t __cdecl internal_513b40()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513b56
        add eax, 0xFFFFFFF8
        jmp public_513b58
        public_513b56 : nop
        xor eax, eax
        public_513b58 : nop
        test eax, eax
        setne al
        test al, al
        je public_513fa3
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        xor ebp, ebp
        lea ecx, ds:[edi+8]
        push eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x2C], 0x4B189680
        call public_53e430
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edi+0xC], eax
        je public_513dc8
        nop 
        public_513b90 : nop
        mov esi, dword ptr ds : [eax+8]
        push 0
        lea ecx, ss:[esp+0x48]
        mov ebx, eax
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], ebx
        call public_53ab20
        push 1
        push esi
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_513bcd
        push ebx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ds:[edi+8]
        call public_516f70
        jmp public_513db7
        public_513bcd : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513bd9
        add eax, 0xFFFFFFF8
        jmp public_513bdb
        public_513bd9 : nop
        xor eax, eax
        public_513bdb : nop
        push eax
        call public_5140c0
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x160]
        add esp, 4
        cmp eax, edi
        je public_513c03
        push ebx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ds:[edi+8]
        call public_516f70
        jmp public_513db7
        public_513c03 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        test ecx, ecx
        je public_513c0f
        add ecx, 0xFFFFFFF8
        jmp public_513c11
        public_513c0f : nop
        xor ecx, ecx
        public_513c11 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        push ebx
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x2C]
        call public_513fb0
        fstp dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        jns public_513c4b
        fld dword ptr ds : [public_5db7d8]
        jmp public_513c60
        public_513c4b : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x38]
        call public_513fb0
        public_513c60 : nop
        fcom dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x1C], 0x42C80000
        fnstsw ax
        test ah, 0x41
        jne public_513c7f
        fld dword ptr ss : [esp+0x18]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        public_513c7f : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [ebp+0x94]
        fnstsw ax
        test ah, 5
        jp public_513cab
        push esi
        mov ecx, edi
        call public_5145a0
        mov al, byte ptr ds : [public_675200]
        test al, al
        je public_513cab
        push esi
        mov ecx, edi
        call public_514750
        public_513cab : nop
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        js public_513cd9
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_513db7
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x14], esi
        jmp public_513db7
        public_513cd9 : nop
        mov ecx, edi
        call public_514260
        fld dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_513d03
        fcomp dword ptr ss : [ebp+0x9C]
        fnstsw ax
        test ah, 5
        jp public_513d1a
        push esi
        mov ecx, edi
        call public_514960
        jmp public_513d1a
        public_513d03 : nop
        fcomp dword ptr ss : [ebp+0x98]
        fnstsw ax
        test ah, 5
        jp public_513d1a
        push 1
        push esi
        mov ecx, edi
        call public_514bf0
        public_513d1a : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        je public_513d2b
        lea ebp, ds:[eax-8]
        jmp public_513d2d
        public_513d2b : nop
        xor ebp, ebp
        public_513d2d : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x13]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        push eax
        mov ecx, ebp
        call dword ptr ds : [ebx+0x12C]
        mov cl, byte ptr ds : [esi+0x184]
        mov al, byte ptr ss : [esp+0x13]
        shr cl, 1
        and cl, 1
        cmp cl, al
        je public_513db7
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ds:[edi+8]
        call public_516f70
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x160], ecx
        je public_513db1
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1C]
        push 1
        push ecx
        push eax
        call public_515200
        mov ebx, eax
        mov al, byte ptr ds : [esi+0x184]
        add esp, 0xC
        test al, 0x20
        je public_513da7
        call public_54baf0
        cmp esi, eax
        jne public_513da7
        or byte ptr ds : [esi+0x184], 0x40
        public_513da7 : nop
        push esi
        mov ecx, ebx
        call public_5142e0
        jmp public_513db7
        public_513db1 : nop
        mov dword ptr ds : [esi+0x184], ecx
        public_513db7 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edi+0xC], eax
        jne public_513b90
        mov ebp, dword ptr ss : [esp+0x14]
        public_513dc8 : nop
        mov esi, dword ptr ds : [edi+0x14]
        test esi, esi
        je public_513dd4
        add esi, 0xFFFFFFF8
        jmp public_513dd6
        public_513dd4 : nop
        xor esi, esi
        public_513dd6 : nop
        mov dl, byte ptr ds : [edi+0x1C]
        mov byte ptr ss : [esp+0x24], dl
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        lea ecx, ss:[esp+0x3C]
        push esi
        push ecx
        call public_514110
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call public_4e7090
        lea ecx, ss:[esp+0x54]
        call public_4215b0
        test ebp, ebp
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x78], edx
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x14], 0
        je public_513f4d
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        lea ebp, ds:[edi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_513e59
        test byte ptr ds : [eax+8], 2
        je public_513f4d
        public_513e59 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_513e6e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_513f4d
        public_513e6e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_513e83
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        je public_513f4d
        public_513e83 : nop
        mov al, byte ptr ds : [edi+0x1D]
        test al, al
        je public_513f4d
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513ebb
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_513ebb
        add eax, 0xC
        test eax, eax
        je public_513ebb
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_513ebb
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_513ebd
        public_513ebb : nop
        xor eax, eax
        public_513ebd : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_513ed6
        xor ebx, ebx
        jmp public_513ee4
        public_513ed6 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_513ee1
        xor ebx, ebx
        jmp public_513ee4
        public_513ee1 : nop
        mov ebx, dword ptr ds : [eax+4]
        public_513ee4 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513ef0
        add eax, 0xFFFFFFF8
        jmp public_513ef2
        public_513ef0 : nop
        xor eax, eax
        public_513ef2 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1C]
        lea edx, ss:[esp+0x38]
        push ecx
        push eax
        push edx
        call public_514110
        add esp, 0xC
        push eax
        lea ecx, ss:[esp+0x88]
        call public_514010
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513f1f
        lea ecx, ds:[eax-8]
        jmp public_513f21
        public_513f1f : nop
        xor ecx, ecx
        public_513f21 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_513f2d
        lea esi, ds:[eax-8]
        jmp public_513f2f
        public_513f2d : nop
        xor esi, esi
        public_513f2f : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        lea eax, ss:[esp+0x88]
        push eax
        call dword ptr ds : [edx+0x1C]
        push eax
        push esi
        add ebx, 0x7C
        push ebx
        mov ecx, offset public_674c60
        call public_514070
        public_513f4d : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        push edx
        lea ecx, ds:[edi+0x20]
        call public_4fcc40
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        pop esi
        pop ebp
        jne public_513f92
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 0x41
        je public_513f92
        pop edi
        xor al, al
        pop ebx
        add esp, 0xA4
        ret 4
        public_513f92 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ds:[edi+0x30]
        mov bl, 1
        call public_514050
        mov al, bl
        public_513fa3 : nop
        pop edi
        pop ebx
        add esp, 0xA4
        ret 4
        UNREACHABLE_TRAP(0x513b40)
    }
}

#undef public_513b56
#undef public_513b58
#undef public_513b90
#undef public_513bcd
#undef public_513bd9
#undef public_513bdb
#undef public_513c03
#undef public_513c0f
#undef public_513c11
#undef public_513c4b
#undef public_513c60
#undef public_513c7f
#undef public_513cab
#undef public_513cd9
#undef public_513d03
#undef public_513d1a
#undef public_513d2b
#undef public_513d2d
#undef public_513da7
#undef public_513db1
#undef public_513db7
#undef public_513dc8
#undef public_513dd4
#undef public_513dd6
#undef public_513e59
#undef public_513e6e
#undef public_513e83
#undef public_513ebb
#undef public_513ebd
#undef public_513ed6
#undef public_513ee1
#undef public_513ee4
#undef public_513ef0
#undef public_513ef2
#undef public_513f1f
#undef public_513f21
#undef public_513f2d
#undef public_513f2f
#undef public_513f4d
#undef public_513f92
#undef public_513fa3
