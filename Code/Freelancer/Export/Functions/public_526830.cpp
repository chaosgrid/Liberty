#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5267f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_526840 _public_526840
#define public_52688a _public_52688a

PROC_DECLARE(0x526830, internal_526830, public_526830);
extern "C" NAKED register_t __cdecl internal_526830()
{
    __asm
    {
        mov ecx, offset public_67537c
        jmp public_526840
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_526840 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_52688a
        push ecx
        push 0x57C
        push eax
        mov dword ptr ds : [eax+4], offset public_5dd068
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_5267f0
        mov dword ptr ds : [eax], offset public_5d6d50
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_52688a : nop
        push ecx
        xor eax, eax
        push 0x57C
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x526830)
    }
}

#undef public_526840
#undef public_52688a
