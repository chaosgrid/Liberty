#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_552d40 _public_552d40
#define public_552d8a _public_552d8a

PROC_DECLARE(0x552d30, internal_552d30, public_552d30);
extern "C" NAKED register_t __cdecl internal_552d30()
{
    __asm
    {
        mov ecx, offset public_6798fb
        jmp public_552d40
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_552d40 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_552d8a
        push ecx
        push 0x57B
        push eax
        mov dword ptr ds : [eax+4], offset public_5e0e24
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_552cd0
        mov dword ptr ds : [eax], offset public_5d6d50
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_552d8a : nop
        push ecx
        xor eax, eax
        push 0x57B
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x552d30)
    }
}

#undef public_552d40
#undef public_552d8a
