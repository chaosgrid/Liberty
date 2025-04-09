#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_5a3e6c _public_5a3e6c
#define public_5a3e96 _public_5a3e96

PROC_DECLARE(0x5a3e50, internal_5a3e50, public_5a3e50);
extern "C" NAKED register_t __cdecl internal_5a3e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38C]
        test eax, eax
        push edi
        je public_5a3e6c
        push 0
        push eax
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        ret 
        public_5a3e6c : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5a3e96
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_5a3e96
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x26
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_5a3e96 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a3e50)
    }
}

#undef public_5a3e6c
#undef public_5a3e96
