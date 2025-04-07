#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d5890);
CLANG_FORWARD_PROC_SYMBOL(public_62d65f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7640);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6150);
CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8840);
CLANG_FORWARD_PROC_SYMBOL(public_62ecab0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62cc494 _public_62cc494
#define public_62cc496 _public_62cc496
#define public_62cc4a2 _public_62cc4a2
#define public_62cc4c2 _public_62cc4c2
#define public_62cc4c4 _public_62cc4c4
#define public_62cc4e7 _public_62cc4e7
#define public_62cc4e9 _public_62cc4e9
#define public_62cc52c _public_62cc52c
#define public_62cc52e _public_62cc52e
#define public_62cc54e _public_62cc54e
#define public_62cc5a5 _public_62cc5a5
#define public_62cc5f0 _public_62cc5f0
#define public_62cc5f2 _public_62cc5f2
#define public_62cc638 _public_62cc638
#define public_62cc642 _public_62cc642
#define public_62cc6d2 _public_62cc6d2
#define public_62cc762 _public_62cc762
#define public_62cc778 _public_62cc778
#define public_62cc77e _public_62cc77e
#define public_62cc7b1 _public_62cc7b1
#define public_62cc847 _public_62cc847
#define public_62cc8a9 _public_62cc8a9
#define public_62cc8c0 _public_62cc8c0
#define public_62cc8c2 _public_62cc8c2
#define public_62cc8df _public_62cc8df

PROC_DECLARE(0x62cc470, internal_62cc470, public_62cc470);
extern "C" NAKED register_t __cdecl internal_62cc470()
{
    __asm
    {
        sub esp, 0x98
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x1364
        call public_62ecab0
        test eax, eax
        lea ebx, ss:[ebp+0x2C]
        je public_62cc494
        add eax, 8
        jmp public_62cc496
        public_62cc494 : nop
        xor eax, eax
        public_62cc496 : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62cc4a2
        push eax
        mov ecx, ebx
        call public_6341610
        public_62cc4a2 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62cc8df
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cc8df
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62cc4c2
        add eax, 0xFFFFFFF8
        jmp public_62cc4c4
        public_62cc4c2 : nop
        xor eax, eax
        public_62cc4c4 : nop
        push esi
        push edi
        push eax
        call public_62e61f0
        mov esi, eax
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x78]
        rep movsd
        je public_62cc4e7
        add eax, 0xFFFFFFF8
        jmp public_62cc4e9
        public_62cc4e7 : nop
        xor eax, eax
        public_62cc4e9 : nop
        push eax
        lea eax, ss:[esp+0x70]
        push eax
        call public_62e60e0
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea edi, ss:[ebp+0x290]
        push edi
        call dword ptr ds : [edx+0xAC]
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        je public_62cc52c
        lea ecx, ds:[eax-8]
        jmp public_62cc52e
        public_62cc52c : nop
        xor ecx, ecx
        public_62cc52e : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x54]
        push edx
        call dword ptr ds : [eax+0xAC]
        mov eax, dword ptr ds : [public_63fc538]
        test eax, eax
        jne public_62cc54e
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cc54e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6288800
        mov eax, dword ptr ds : [public_63fc538]
        add esp, 0xC
        test eax, eax
        jne public_62cc5a5
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cc5a5 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_62887d0
        mov eax, dword ptr ds : [ebx]
        add esp, 0xC
        test eax, eax
        je public_62cc5f0
        add eax, 0xFFFFFFF8
        jmp public_62cc5f2
        public_62cc5f0 : nop
        xor eax, eax
        public_62cc5f2 : nop
        push eax
        lea eax, ss:[esp+0x64]
        push eax
        call public_62e6150
        mov ecx, dword ptr ss : [ebp+0x14]
        add esp, 8
        lea eax, ss:[esp+0x13]
        push eax
        lea eax, ss:[esp+0x16]
        mov byte ptr ss : [esp+0x16], 0
        mov byte ptr ss : [esp+0x17], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x5C]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_62cc638
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62cc638
        mov ecx, dword ptr ss : [ebp+0x2A4]
        mov dword ptr ss : [esp+0x38], ecx
        jmp public_62cc642
        public_62cc638 : nop
        mov edx, dword ptr ss : [ebp+0x2A0]
        mov dword ptr ss : [esp+0x38], edx
        public_62cc642 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_628b030
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_62c5a70
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x64]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62cc778
        mov esi, dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        mov bl, 1
        jne public_62cc6d2
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62cc6d2 : nop
        fld dword ptr ss : [esp+0x50]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_62c5a70
        mov esi, dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62cc762
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62cc762 : nop
        fld dword ptr ds : [esi+0x18]
        fadd dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62cc77e
        fstp st(0)
        public_62cc778 : nop
        fld dword ptr ds : [public_6399408]
        public_62cc77e : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_63fc538]
        fsub st, st(1)
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x30], edx
        fstp st(0)
        jne public_62cc7b1
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cc7b1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], ecx
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x34], edx
        lea eax, ss:[esp+0x2C]
        lea esi, ss:[ebp+0x90]
        fstp dword ptr ss : [esp+0x30]
        push eax
        fld dword ptr ss : [esp+0x48]
        mov ecx, esi
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        call public_62d7560
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x34
        call public_62e8840
        test al, al
        je public_62cc847
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        call public_62d7640
        public_62cc847 : nop
        mov al, byte ptr ss : [ebp+0x2A8]
        test al, al
        je public_62cc8a9
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov ecx, esi
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[ebp+0x2AC]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        call public_62d75e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[ebp+0x150]
        call public_62d5890
        public_62cc8a9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x2C]
        test eax, eax
        je public_62cc8c0
        add eax, 0xFFFFFFF8
        jmp public_62cc8c2
        public_62cc8c0 : nop
        xor eax, eax
        public_62cc8c2 : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea esi, ss:[ebp+0x34]
        push eax
        mov ecx, esi
        call public_62d65f0
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        public_62cc8df : nop
        pop ebp
        pop ebx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x62cc470)
    }
}

#undef public_62cc494
#undef public_62cc496
#undef public_62cc4a2
#undef public_62cc4c2
#undef public_62cc4c4
#undef public_62cc4e7
#undef public_62cc4e9
#undef public_62cc52c
#undef public_62cc52e
#undef public_62cc54e
#undef public_62cc5a5
#undef public_62cc5f0
#undef public_62cc5f2
#undef public_62cc638
#undef public_62cc642
#undef public_62cc6d2
#undef public_62cc762
#undef public_62cc778
#undef public_62cc77e
#undef public_62cc7b1
#undef public_62cc847
#undef public_62cc8a9
#undef public_62cc8c0
#undef public_62cc8c2
#undef public_62cc8df
