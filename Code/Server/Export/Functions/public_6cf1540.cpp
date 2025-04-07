#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cf15ab _public_6cf15ab
#define public_6cf15d9 _public_6cf15d9

PROC_DECLARE(0x6cf1540, internal_6cf1540, public_6cf1540);
extern "C" NAKED register_t __cdecl internal_6cf1540()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edi, ds:[esi+4]
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf15d9
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6cf15d9
        add eax, 0xC
        test eax, eax
        je public_6cf15d9
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6cf15d9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6cf15d9
        call dword ptr ds : [public_6d6422c]
        test eax, eax
        je public_6cf15ab
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [edx]
        public_6cf15ab : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf15d9
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0xC]
        push edx
        push 0x2F
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6d43650
        add esp, 8
        public_6cf15d9 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6cf1540)
    }
}

#undef public_6cf15ab
#undef public_6cf15d9
