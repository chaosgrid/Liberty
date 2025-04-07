#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f14c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f34800);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6f14c30 _public_6f14c30
#define public_6f14cbd _public_6f14cbd
#define public_6f14ce0 _public_6f14ce0
#define public_6f14d11 _public_6f14d11
#define public_6f14d42 _public_6f14d42
#define public_6f14e0f _public_6f14e0f
#define public_6f14e18 _public_6f14e18
#define public_6f14e25 _public_6f14e25

PROC_DECLARE(0x6f14c10, internal_6f14c10, public_6f14c10);
extern "C" NAKED register_t __cdecl internal_6f14c10()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], esi
        je public_6f14e25
        push ebp
        push edi
        lea ecx, ds:[ecx]
        public_6f14c30 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 1
        jne public_6f14e0f
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [eax+0xC]
        lea ebp, ds:[eax+0xC]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        lea ecx, ss:[esp+0x38]
        call public_6efc7a0
        mov eax, dword ptr ss : [esp+0x30]
        test al, 0x40
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        je public_6f14cbd
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_6fb8ac8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x28], 0
        jmp public_6f14d11
        public_6f14cbd : nop
        test ah, 8
        je public_6f14ce0
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        mov dword ptr ss : [esp+0x28], 0
        jmp public_6f14d11
        public_6f14ce0 : nop
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f14d42
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb3664]
        mov dword ptr ss : [esp+0x28], 3
        public_6f14d11 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], ecx
        lea esi, ss:[esp+0x80]
        lea edi, ss:[esp+0x44]
        mov ecx, 9
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        public_6f14d42 : nop
        mov edi, dword ptr ds : [public_6fb3630]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x30], 0
        call edi
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x34], 0
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0xA4]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], edx
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call edi
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_6fb8ac4]
        mov edi, dword ptr ss : [esp+0xC0]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+0x50]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        push edi
        call dword ptr ds : [public_6fb3484]
        add esp, 0x30
        test eax, eax
        jne public_6f14e18
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        call public_6f75f30
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        push eax
        call public_6f34800
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f57740
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x70], eax
        lea eax, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x6C], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        mov dword ptr ds : [ebx+0xC], 0
        jmp public_6f14e18
        public_6f14e0f : nop
        cmp eax, 2
        jne public_6f14e18
        mov byte ptr ds : [esi+0x30], 1
        public_6f14e18 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [esi+0x20]
        jne public_6f14c30
        pop edi
        pop ebp
        public_6f14e25 : nop
        pop esi
        pop ebx
        add esp, 0x94
        ret 4
        UNREACHABLE_TRAP(0x6f14c10)
    }
}

#undef public_6f14c30
#undef public_6f14cbd
#undef public_6f14ce0
#undef public_6f14d11
#undef public_6f14d42
#undef public_6f14e0f
#undef public_6f14e18
#undef public_6f14e25
