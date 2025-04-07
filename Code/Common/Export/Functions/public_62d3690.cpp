#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d3690);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e3460);
CLANG_FORWARD_PROC_SYMBOL(public_62e92e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62d36ce _public_62d36ce
#define public_62d36e7 _public_62d36e7
#define public_62d3700 _public_62d3700
#define public_62d3719 _public_62d3719
#define public_62d374c _public_62d374c
#define public_62d37aa _public_62d37aa
#define public_62d37ac _public_62d37ac
#define public_62d3828 _public_62d3828
#define public_62d382a _public_62d382a
#define public_62d38d8 _public_62d38d8
#define public_62d38df _public_62d38df
#define public_62d38e7 _public_62d38e7
#define public_62d3903 _public_62d3903
#define public_62d39ab _public_62d39ab
#define public_62d3a03 _public_62d3a03
#define public_62d3a91 _public_62d3a91
#define public_62d3aaf _public_62d3aaf
#define public_62d3aba _public_62d3aba
#define public_62d3ac2 _public_62d3ac2

PROC_DECLARE(0x62d3690, internal_62d3690, public_62d3690);
extern "C" NAKED register_t __cdecl internal_62d3690()
{
    __asm
    {
        sub esp, 0xB8
        mov eax, dword ptr ss : [esp+0xBC]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_63a03f0]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        fnstsw ax
        test ah, 5
        jp public_62d36ce
        mov dword ptr ss : [esp+0xC], 0xBF800000
        public_62d36ce : nop
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62d36e7
        mov dword ptr ss : [esp+0xC], 0x3F800000
        public_62d36e7 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_63a03f0]
        fnstsw ax
        test ah, 5
        jp public_62d3700
        mov dword ptr ss : [esp+0x10], 0xBF800000
        public_62d3700 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62d3719
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_62d3719 : nop
        fld dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0xB], 1
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62d374c
        mov byte ptr ss : [esp+0xB], 0
        public_62d374c : nop
        mov dl, byte ptr ss : [esp+0xB]
        mov eax, dword ptr ss : [ebp+0xC0]
        test dl, dl
        sete cl
        cmp eax, 0xFFFFFFFF
        mov byte ptr ss : [ebp+0x150], cl
        je public_62d3ac2
        mov ebx, dword ptr ss : [ebp+eax*4+0x174]
        test ebx, ebx
        je public_62d3ac2
        cmp dword ptr ss : [ebp+0x154], 1
        mov byte ptr ss : [ebp+0xD8], 1
        jne public_62d3aaf
        mov al, byte ptr ss : [ebp+0xF9]
        test al, al
        je public_62d3aaf
        mov eax, dword ptr ss : [ebp+0xF0]
        test eax, eax
        je public_62d37aa
        lea ecx, ds:[eax-8]
        jmp public_62d37ac
        public_62d37aa : nop
        xor ecx, ecx
        public_62d37ac : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov al, byte ptr ss : [ebp+0xF9]
        test al, al
        mov ecx, 9
        lea edi, ss:[esp+0x80]
        rep movsd
        mov dword ptr ss : [esp+0x64], 0x3F800000
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        je public_62d38df
        mov eax, dword ptr ss : [ebp+0xF0]
        test eax, eax
        je public_62d3828
        lea ecx, ds:[eax-8]
        jmp public_62d382a
        public_62d3828 : nop
        xor ecx, ecx
        public_62d382a : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ecx, 9
        lea edi, ss:[esp+0xA4]
        rep movsd
        je public_62d38e7
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        call public_62d3af0
        push eax
        call public_62c47a0
        fabs 
        fld dword ptr ds : [public_63a033c]
        add esp, 8
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62d38df
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        mov byte ptr ss : [ebp+0xF9], 0
        call public_62e92e0
        test al, al
        je public_62d38d8
        push 0
        push 0x3F800000
        push 0
        lea ecx, ss:[esp+0x44]
        call public_628b030
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x134]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov byte ptr ss : [ebp+0x130], 0
        public_62d38d8 : nop
        mov byte ptr ss : [ebp+0xF9], 1
        public_62d38df : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62d3903
        public_62d38e7 : nop
        lea ecx, ss:[ebp+0x140]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x134]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        public_62d3903 : nop
        fld dword ptr ss : [esp+0x88]
        sub esp, 0xC
        fld dword ptr ss : [esp+0xA0]
        lea edx, ss:[ebp+0x134]
        fld dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fchs 
        mov edx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x30], ecx
        fchs 
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x34], edx
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [public_63a0350]
        fadd dword ptr ds : [public_63a033c]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_62e3460
        add esp, 0x10
        test al, al
        pop edi
        pop esi
        je public_62d3a91
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [public_63fc964]
        test eax, eax
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x20]
        jne public_62d39ab
        call public_6391cf0
        mov dword ptr ds : [public_63fc964], eax
        public_62d39ab : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_63fc964]
        test eax, eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        jne public_62d3a03
        call public_6391cf0
        mov dword ptr ds : [public_63fc964], eax
        public_62d3a03 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        fchs 
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ss : [esp+0x60]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x30]
        jmp public_62d3aba
        public_62d3a91 : nop
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        lea eax, ss:[esp+0x18]
        jmp public_62d3aba
        public_62d3aaf : nop
        mov byte ptr ss : [ebp+0x130], 0
        lea eax, ss:[esp+0xC]
        public_62d3aba : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        push eax
        call dword ptr ds : [edx+0x30]
        public_62d3ac2 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x124
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xB8
        ret 4
        UNREACHABLE_TRAP(0x62d3690)
    }
}

#undef public_62d36ce
#undef public_62d36e7
#undef public_62d3700
#undef public_62d3719
#undef public_62d374c
#undef public_62d37aa
#undef public_62d37ac
#undef public_62d3828
#undef public_62d382a
#undef public_62d38d8
#undef public_62d38df
#undef public_62d38e7
#undef public_62d3903
#undef public_62d39ab
#undef public_62d3a03
#undef public_62d3a91
#undef public_62d3aaf
#undef public_62d3aba
#undef public_62d3ac2
