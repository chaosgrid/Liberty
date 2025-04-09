#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_54c380 _public_54c380
#define public_54c3c6 _public_54c3c6

PROC_DECLARE(0x54c370, internal_54c370, public_54c370);
extern "C" NAKED register_t __cdecl internal_54c370()
{
    __asm
    {
        mov ecx, offset public_67978c
        jmp public_54c380
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_54c380 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_54c3c6
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5e093c
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5e0934
        mov dword ptr ds : [eax+8], 0x57A
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_54c3c6 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x54c370)
    }
}

#undef public_54c380
#undef public_54c3c6
