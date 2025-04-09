#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c70b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4c7100 _public_4c7100
#define public_4c714a _public_4c714a

PROC_DECLARE(0x4c70f0, internal_4c70f0, public_4c70f0);
extern "C" NAKED register_t __cdecl internal_4c70f0()
{
    __asm
    {
        mov ecx, offset public_673538
        jmp public_4c7100
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4c7100 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_4c714a
        push ecx
        push 0x614
        push eax
        mov dword ptr ds : [eax+4], offset public_5d6d58
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_4c70b0
        mov dword ptr ds : [eax], offset public_5d6d50
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_4c714a : nop
        push ecx
        xor eax, eax
        push 0x614
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c70f0)
    }
}

#undef public_4c7100
#undef public_4c714a
