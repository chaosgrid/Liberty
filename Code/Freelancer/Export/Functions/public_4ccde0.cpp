#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4ccde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4cce10 _public_4cce10
#define public_4cce29 _public_4cce29
#define public_4cce47 _public_4cce47
#define public_4cce60 _public_4cce60

PROC_DECLARE(0x4ccde0, internal_4ccde0, public_4ccde0);
extern "C" NAKED register_t __cdecl internal_4ccde0()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        mov ebx, ecx
        fld dword ptr ds : [ebx+0x44]
        push ebp
        fmul dword ptr ds : [public_5d74c8]
        push esi
        push edi
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4cce10
        mov dword ptr ss : [esp+0x10], 0
        jmp public_4cce29
        public_4cce10 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4cce29
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_4cce29 : nop
        fld dword ptr ds : [ebx+0x44]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4cce47
        mov dword ptr ss : [esp+0x14], 0
        jmp public_4cce60
        public_4cce47 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4cce60
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_4cce60 : nop
        lea esi, ds:[ebx+0x30]
        push esi
        lea eax, ds:[ebx+0x24]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x38]
        push esi
        push eax
        call public_423b30
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ebx+0x3C]
        add esp, 0xC
        lea ecx, ss:[esp+0x40]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+0x40]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x14]
        call public_4215b0
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x24]
        fchs 
        push edx
        fst dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x38]
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_423b30
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [public_5c64b0]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x78], ecx
        push edx
        lea eax, ss:[esp+0x98]
        lea edi, ds:[ebx+0x78]
        mov ecx, 0xC
        lea esi, ss:[esp+0x50]
        push eax
        rep movsd
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x43340000
        mov dword ptr ss : [esp+0x34], 0
        call ebp
        mov ecx, 9
        fld dword ptr ss : [esp+0x4C]
        mov esi, eax
        fadd dword ptr ss : [esp+0x28]
        lea edi, ss:[esp+0x54]
        add esp, 0x14
        rep movsd
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x68], eax
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x6C], ecx
        push edx
        lea eax, ss:[esp+0x8C]
        lea edi, ds:[ebx+0xA8]
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        push eax
        rep movsd
        mov dword ptr ss : [esp+0x20], 0x43340000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call ebp
        mov esi, eax
        fld dword ptr ss : [esp+0x38]
        mov ecx, 9
        fld dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x48]
        fchs 
        rep movsd
        fst dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 8
        push ecx
        sub esp, 8
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x68], eax
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x6C], ecx
        push edx
        lea eax, ss:[esp+0x8C]
        lea edi, ds:[ebx+0xD8]
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        push eax
        rep movsd
        mov dword ptr ss : [esp+0x20], 0x43340000
        mov dword ptr ss : [esp+0x24], 0x43340000
        mov dword ptr ss : [esp+0x28], 0
        call ebp
        mov esi, eax
        fld dword ptr ss : [esp+0x38]
        mov ecx, 9
        fld dword ptr ss : [esp+0x3C]
        lea edi, ss:[esp+0x48]
        fadd dword ptr ss : [esp+0x18]
        rep movsd
        add esp, 8
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x64], ecx
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], eax
        lea edx, ds:[ebx+0x9C]
        push edx
        lea edi, ds:[ebx+0x108]
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        rep movsd
        mov esi, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x74]
        push eax
        push esi
        call dword ptr ds : [ecx+0x44]
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ebx+0x12C]
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        push esi
        call dword ptr ds : [ecx+0x44]
        fld dword ptr ss : [esp+0x70]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x74]
        mov dword ptr ds : [ebx+4], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [ebx+8], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ebx+0xC], eax
        call public_5b7ec0
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0x9C
        ret 4
        UNREACHABLE_TRAP(0x4ccde0)
    }
}

#undef public_4cce10
#undef public_4cce29
#undef public_4cce47
#undef public_4cce60
