#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_598210);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_598882 _public_598882

PROC_DECLARE(0x598850, internal_598850, public_598850);
extern "C" NAKED register_t __cdecl internal_598850()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0x60]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_67da38]
        test eax, eax
        push esi
        push edi
        jne public_598882
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_598882 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x3C]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x5C]
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
        UNREACHABLE_TRAP(0x598850)
    }
}

#undef public_598882
