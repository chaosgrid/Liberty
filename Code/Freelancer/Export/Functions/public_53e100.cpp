#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53e116 _public_53e116

PROC_DECLARE(0x53e100, internal_53e100, public_53e100);
extern "C" NAKED register_t __cdecl internal_53e100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6789f8]
        sub esp, 0x54
        test eax, eax
        jne public_53e116
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53e116 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push esi
        push edi
        lea edx, ds:[ebx+0xC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        lea edi, ss:[esp+0x30]
        rep movsd
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x60], edx
        call public_54bb50
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x53e100)
    }
}

#undef public_53e116
