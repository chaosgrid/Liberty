#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_509bd0 _public_509bd0
#define public_509c1a _public_509c1a

PROC_DECLARE(0x509bc0, internal_509bc0, public_509bc0);
extern "C" NAKED register_t __cdecl internal_509bc0()
{
    __asm
    {
        mov ecx, offset public_674ff0
        jmp public_509bd0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_509bd0 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_509c1a
        push ecx
        push 0x57D
        push eax
        mov dword ptr ds : [eax+4], offset public_5db0c8
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_509b80
        mov dword ptr ds : [eax], offset public_5d6d50
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_509c1a : nop
        push ecx
        xor eax, eax
        push 0x57D
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x509bc0)
    }
}

#undef public_509bd0
#undef public_509c1a
