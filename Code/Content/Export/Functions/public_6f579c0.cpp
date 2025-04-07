#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f579c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);

#define public_6f57a11 _public_6f57a11
#define public_6f57a32 _public_6f57a32
#define public_6f57a60 _public_6f57a60
#define public_6f57a80 _public_6f57a80
#define public_6f57ad9 _public_6f57ad9

PROC_DECLARE(0x6f579c0, internal_6f579c0, public_6f579c0);
extern "C" NAKED register_t __cdecl internal_6f579c0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb31b4]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3408]
        lea esi, ds:[edi+0x158]
        add esp, 8
        mov ecx, esi
        call public_6ed2a00
        mov edx, dword ptr ds : [edi+0x15C]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edi+0x164], edx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f57a32
        public_6f57a11 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f57a11
        public_6f57a32 : nop
        mov ecx, esi
        call public_6ecfec0
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, 0x158
        push ecx
        mov ecx, esi
        call public_6f93490
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f57a80
        public_6f57a60 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f57a60
        public_6f57a80 : nop
        mov eax, dword ptr ds : [edi+0x160]
        test eax, eax
        je public_6f57ad9
        mov edx, dword ptr ds : [edi+0x15C]
        mov esi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 0x13
        jne public_6f57ad9
        mov esi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+4]
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ds:[esi+0x118]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_6f6eca0
        add esp, 0x10
        test al, al
        je public_6f57ad9
        mov byte ptr ds : [esi+0x120], 1
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x124], edx
        public_6f57ad9 : nop
        mov eax, dword ptr ds : [edi+0x15C]
        mov ecx, edi
        mov dword ptr ds : [edi+0x164], eax
        call public_6f57b00
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f579c0)
    }
}

#undef public_6f57a11
#undef public_6f57a32
#undef public_6f57a60
#undef public_6f57a80
#undef public_6f57ad9
