#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_510bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_510c70 _public_510c70
#define public_510cba _public_510cba

PROC_DECLARE(0x510c60, internal_510c60, public_510c60);
extern "C" NAKED register_t __cdecl internal_510c60()
{
    __asm
    {
        mov ecx, offset public_675099
        jmp public_510c70
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_510c70 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_510cba
        push ecx
        push 0x5CA
        push eax
        mov dword ptr ds : [eax+4], offset public_5db648
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_510bf0
        mov dword ptr ds : [eax], offset public_5d6d50
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_510cba : nop
        push ecx
        xor eax, eax
        push 0x5CA
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x510c60)
    }
}

#undef public_510c70
#undef public_510cba
