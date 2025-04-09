#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0950);

#define public_5a09a5 _public_5a09a5
#define public_5a09b0 _public_5a09b0
#define public_5a09bf _public_5a09bf

PROC_DECLARE(0x5a0950, internal_5a0950, public_5a0950);
extern "C" NAKED register_t __cdecl internal_5a0950()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov ebx, ecx
        push edi
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        mov esi, ebp
        rep movsd
        lea ecx, ds:[ebx+0x80]
        call public_420d60
        test al, al
        je public_5a09a5
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5a09a5 : nop
        mov esi, dword ptr ds : [ebx+0xC]
        test esi, esi
        je public_5a09bf
        lea esp, ss:[esp]
        public_5a09b0 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a09b0
        public_5a09bf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a0950)
    }
}

#undef public_5a09a5
#undef public_5a09b0
#undef public_5a09bf
