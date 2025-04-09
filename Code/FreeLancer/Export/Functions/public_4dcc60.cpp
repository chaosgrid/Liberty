#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dcc60);
CLANG_FORWARD_PROC_SYMBOL(public_4f1da0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5790);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4dccae _public_4dccae
#define public_4dccdf _public_4dccdf

PROC_DECLARE(0x4dcc60, internal_4dcc60, public_4dcc60);
extern "C" NAKED register_t __cdecl internal_4dcc60()
{
    __asm
    {
        sub esp, 0x2C
        push esi
        push edi
        mov edi, ecx
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_4dccdf
        mov ecx, dword ptr ds : [public_674b70]
        lea eax, ss:[esp+8]
        push eax
        call public_4f1da0
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, dword ptr ds : [edi+0x504]
        jne public_4dccae
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [esi+4]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+4]
        push 0
        push 0
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        add esp, 0x2C
        ret 4
        public_4dccae : nop
        push 0x10
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        mov ecx, offset public_674c0c
        call public_4f5790
        test eax, eax
        jle public_4dccdf
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        mov esi, dword ptr ds : [public_673344]
        push esi
        lea esi, ss:[esp+0xC]
        push esi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x34]
        public_4dccdf : nop
        pop edi
        pop esi
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x4dcc60)
    }
}

#undef public_4dccae
#undef public_4dccdf
