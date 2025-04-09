#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47e920);
CLANG_FORWARD_PROC_SYMBOL(public_4c6430);
CLANG_FORWARD_PROC_SYMBOL(public_4c6530);
CLANG_FORWARD_PROC_SYMBOL(public_585ef0);

#define public_47e986 _public_47e986
#define public_47e9be _public_47e9be
#define public_47e9d2 _public_47e9d2

PROC_DECLARE(0x47e920, internal_47e920, public_47e920);
extern "C" NAKED register_t __cdecl internal_47e920()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x360]
        test ecx, ecx
        je public_47e9d2
        call public_47e790
        mov esi, eax
        test esi, esi
        je public_47e9d2
        mov eax, dword ptr ds : [edi+0x360]
        mov ebp, dword ptr ds : [eax+0x988]
        test ebp, ebp
        je public_47e9d2
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6394]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        mov ecx, dword ptr ds : [edi+0x330]
        push 0
        lea ebx, ds:[edi+0x330]
        push esi
        call public_585ef0
        test eax, eax
        jne public_47e986
        mov ecx, dword ptr ds : [public_5c6210]
        mov eax, dword ptr ds : [ecx]
        public_47e986 : nop
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        add esp, 8
        push 1
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_4c6530
        test al, al
        pop ebx
        je public_47e9be
        mov ecx, dword ptr ds : [edi+0x360]
        push ebp
        push esi
        add ecx, 0x330
        call public_4c6430
        public_47e9be : nop
        mov ecx, dword ptr ds : [edi+0x360]
        xor eax, eax
        mov dword ptr ds : [edi+0x4F4], eax
        mov dword ptr ds : [ecx+0x4F4], eax
        public_47e9d2 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x47e920)
    }
}

#undef public_47e986
#undef public_47e9be
#undef public_47e9d2
