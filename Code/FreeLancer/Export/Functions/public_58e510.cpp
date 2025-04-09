#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_57b0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58e533 _public_58e533
#define public_58e599 _public_58e599

PROC_DECLARE(0x58e510, internal_58e510, public_58e510);
extern "C" NAKED register_t __cdecl internal_58e510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x30
        push ebx
        push eax
        mov ebx, ecx
        call public_57b0a0
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        jne public_58e533
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58e533 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ds:[ebx+0x3C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        lea edi, ds:[ebx+0x504]
        mov ecx, 0xC
        lea esi, ss:[esp+0xC]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x4A4]
        test ecx, ecx
        pop edi
        pop esi
        je public_58e599
        mov eax, dword ptr ds : [ebx+0x4A8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_58e599
        mov ecx, dword ptr ds : [ebx+0x4B4]
        test ecx, ecx
        je public_58e599
        mov eax, dword ptr ds : [ebx+0x4B8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_58e599
        push 1
        push 1
        mov ecx, ebx
        call public_57a620
        public_58e599 : nop
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x58e510)
    }
}

#undef public_58e533
#undef public_58e599
