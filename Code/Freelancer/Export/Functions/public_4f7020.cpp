#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4f7030 _public_4f7030
#define public_4f7076 _public_4f7076

PROC_DECLARE(0x4f7020, internal_4f7020, public_4f7020);
extern "C" NAKED register_t __cdecl internal_4f7020()
{
    __asm
    {
        mov ecx, offset public_674cb8
        jmp public_4f7030
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4f7030 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_4f7076
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5d9a8c
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5d9a84
        mov dword ptr ds : [eax+8], 0x5CB
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_4f7076 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f7020)
    }
}

#undef public_4f7030
#undef public_4f7076
