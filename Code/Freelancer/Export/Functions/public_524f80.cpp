#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_524fcc _public_524fcc
#define public_524fd1 _public_524fd1
#define public_524fd9 _public_524fd9
#define public_52501a _public_52501a
#define public_525035 _public_525035

PROC_DECLARE(0x524f80, internal_524f80, public_524f80);
extern "C" NAKED register_t __cdecl internal_524f80()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0xA8]
        test al, al
        je public_52501a
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_525035
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_524fd9
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_524fcc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_524fcc
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_524fd1
        public_524fcc : nop
        call public_54bb00
        public_524fd1 : nop
        cmp eax, dword ptr ds : [public_673344]
        jne public_525035
        public_524fd9 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov cx, word ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_673344]
        mov word ptr ss : [esp+0x10], cx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [edx+0xD8]
        pop edi
        pop esi
        add esp, 0xC
        ret 0x10
        public_52501a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call public_539e70
        public_525035 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x524f80)
    }
}

#undef public_524fcc
#undef public_524fd1
#undef public_524fd9
#undef public_52501a
#undef public_525035
