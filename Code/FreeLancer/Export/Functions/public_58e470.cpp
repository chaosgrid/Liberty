#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58e49f _public_58e49f
#define public_58e503 _public_58e503

PROC_DECLARE(0x58e470, internal_58e470, public_58e470);
extern "C" NAKED register_t __cdecl internal_58e470()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push esi
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [ebx]
        add esi, 0x24
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        jne public_58e49f
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58e49f : nop
        mov ecx, dword ptr ds : [eax]
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
        je public_58e503
        mov eax, dword ptr ds : [ebx+0x4A8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_58e503
        mov ecx, dword ptr ds : [ebx+0x4B4]
        test ecx, ecx
        je public_58e503
        mov eax, dword ptr ds : [ebx+0x4B8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_58e503
        push 1
        push 1
        mov ecx, ebx
        call public_57a620
        public_58e503 : nop
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x58e470)
    }
}

#undef public_58e49f
#undef public_58e503
