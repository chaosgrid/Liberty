#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_55a67c _public_55a67c
#define public_55a6a6 _public_55a6a6

PROC_DECLARE(0x55a660, internal_55a660, public_55a660);
extern "C" NAKED register_t __cdecl internal_55a660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34C]
        test eax, eax
        push edi
        je public_55a67c
        push 0
        push eax
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        ret 
        public_55a67c : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_55a6a6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_55a6a6
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
        public_55a6a6 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x55a660)
    }
}

#undef public_55a67c
#undef public_55a6a6
