#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_424480 _public_424480
#define public_4244c6 _public_4244c6

PROC_DECLARE(0x424470, internal_424470, public_424470);
extern "C" NAKED register_t __cdecl internal_424470()
{
    __asm
    {
        mov ecx, offset public_6679de
        jmp public_424480
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_424480 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_4244c6
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5c981c
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5c9814
        mov dword ptr ds : [eax+8], 0x534
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_4244c6 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x424470)
    }
}

#undef public_424480
#undef public_4244c6
