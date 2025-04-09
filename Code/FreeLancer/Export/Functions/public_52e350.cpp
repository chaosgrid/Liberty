#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ae40);

#define public_52e38c _public_52e38c
#define public_52e3b1 _public_52e3b1

PROC_DECLARE(0x52e350, internal_52e350, public_52e350);
extern "C" NAKED register_t __cdecl internal_52e350()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push esi
        je public_52e3b1
        mov eax, dword ptr ds : [eax+0x70]
        test eax, eax
        je public_52e3b1
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_52e3b1
        push edi
        lea edi, ds:[esi+0x58]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52e38c
        push edi
        call public_42ae40
        mov dword ptr ds : [ebx+0x10], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52e38c : nop
        add esi, 0x5C
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        pop edi
        jne public_52e3b1
        push esi
        call public_42ae40
        add esp, 4
        mov dword ptr ds : [ebx+0x14], eax
        mov edx, dword ptr ds : [eax]
        pop esi
        mov ecx, eax
        pop ebx
        jmp dword ptr ds : [edx+0xC]
        public_52e3b1 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x52e350)
    }
}

#undef public_52e38c
#undef public_52e3b1
