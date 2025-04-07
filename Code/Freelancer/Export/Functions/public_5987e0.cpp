#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_598210);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_598810 _public_598810

PROC_DECLARE(0x5987e0, internal_5987e0, public_5987e0);
extern "C" NAKED register_t __cdecl internal_5987e0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        push edi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push esi
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [ebx]
        add esi, 0x24
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [public_67da38]
        test eax, eax
        jne public_598810
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_598810 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x3C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        push 0
        push 0
        lea edi, ds:[ebx+0xF4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        push 0
        rep movsd
        push 0
        mov ecx, ebx
        call public_598210
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x5987e0)
    }
}

#undef public_598810
