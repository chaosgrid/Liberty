#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4245d0 _public_4245d0
#define public_424616 _public_424616

PROC_DECLARE(0x4245c0, internal_4245c0, public_4245c0);
extern "C" NAKED register_t __cdecl internal_4245c0()
{
    __asm
    {
        mov ecx, offset public_6679dd
        jmp public_4245d0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4245d0 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_424616
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5c9848
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5c9840
        mov dword ptr ds : [eax+8], 0x67F
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_424616 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4245c0)
    }
}

#undef public_4245d0
#undef public_424616
