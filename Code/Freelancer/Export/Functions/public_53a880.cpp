#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd0d0);
CLANG_FORWARD_PROC_SYMBOL(public_5361e0);
CLANG_FORWARD_PROC_SYMBOL(public_53a880);

#define public_53a8a5 _public_53a8a5
#define public_53a8dc _public_53a8dc

PROC_DECLARE(0x53a880, internal_53a880, public_53a880);
extern "C" NAKED register_t __cdecl internal_53a880()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_53a8dc
        push 0
        lea ecx, ds:[esi+0x28]
        call public_4fd0d0
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_53a8a5
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        public_53a8a5 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+4]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x40]
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
        public_53a8dc : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x15C]
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x53a880)
    }
}

#undef public_53a8a5
#undef public_53a8dc
