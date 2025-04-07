#include "Server-PCH.h"


#define public_6d5e260 _public_6d5e260

PROC_DECLARE(0x6d5e230, internal_6d5e230, public_6d5e230);
extern "C" NAKED register_t __cdecl internal_6d5e230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, 0x3FFFFFFF
        je public_6d5e260
        push eax
        call dword ptr ds : [public_6d643c0]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        and eax, 0x3FFFFFFF
        add esp, 4
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 
        public_6d5e260 : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e230)
    }
}

#undef public_6d5e260
