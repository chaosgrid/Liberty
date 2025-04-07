#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c660);

#define public_6c2c675 _public_6c2c675

PROC_DECLARE(0x6c2c660, internal_6c2c660, public_6c2c660);
extern "C" NAKED register_t __cdecl internal_6c2c660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6c2c675
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6c2c675 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2c660)
    }
}

#undef public_6c2c675
