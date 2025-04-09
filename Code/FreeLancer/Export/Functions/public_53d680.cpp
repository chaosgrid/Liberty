#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543630);
CLANG_FORWARD_PROC_SYMBOL(public_5437a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53d6bb _public_53d6bb
#define public_53d6e2 _public_53d6e2
#define public_53d6f5 _public_53d6f5
#define public_53d714 _public_53d714

PROC_DECLARE(0x53d680, internal_53d680, public_53d680);
extern "C" NAKED register_t __cdecl internal_53d680()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        push edi
        push 0
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_53d714
        mov eax, dword ptr ds : [esi+4]
        test al, 0x40
        jne public_53d6e2
        test ah, 8
        jne public_53d6e2
        mov eax, dword ptr ds : [public_6789f8]
        test eax, eax
        jne public_53d6bb
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d6bb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x14]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        lea eax, ss:[esp+8]
        push eax
        add esi, 8
        push esi
        mov ecx, edi
        call public_5437a0
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        public_53d6e2 : nop
        mov eax, dword ptr ds : [public_6789f8]
        test eax, eax
        jne public_53d6f5
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d6f5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x14]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        lea eax, ss:[esp+8]
        push eax
        add esi, 8
        push esi
        mov ecx, edi
        call public_543630
        public_53d714 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x53d680)
    }
}

#undef public_53d6bb
#undef public_53d6e2
#undef public_53d6f5
#undef public_53d714
