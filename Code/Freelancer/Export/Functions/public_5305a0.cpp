#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5361e0);
CLANG_FORWARD_PROC_SYMBOL(public_53a880);

#define public_5305bc _public_5305bc
#define public_5305f6 _public_5305f6

PROC_DECLARE(0x5305a0, internal_5305a0, public_5305a0);
extern "C" NAKED register_t __cdecl internal_5305a0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x14]
        je public_5305f6
        test eax, eax
        jne public_5305bc
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        public_5305bc : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+4]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [eax+8]
        push esi
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_5361e0
        add esp, 0xC
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c67f4]
        pop esi
        add esp, 0xC
        ret 4
        public_5305f6 : nop
        push eax
        mov ecx, esi
        call public_53a880
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5305a0)
    }
}

#undef public_5305bc
#undef public_5305f6
