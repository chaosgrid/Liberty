#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_424670 _public_424670
#define public_4246b2 _public_4246b2

PROC_DECLARE(0x424660, internal_424660, public_424660);
extern "C" NAKED register_t __cdecl internal_424660()
{
    __asm
    {
        mov ecx, offset public_6679dc
        jmp public_424670
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_424670 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_4246b2
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5c986c
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5c9864
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_4246b2 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x424660)
    }
}

#undef public_424670
#undef public_4246b2
