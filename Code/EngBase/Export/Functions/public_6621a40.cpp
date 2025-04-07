#include "EngBase-PCH.h"


#define public_6621a54 _public_6621a54

PROC_DECLARE(0x6621a40, internal_6621a40, public_6621a40);
extern "C" NAKED register_t __cdecl internal_6621a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_6621a54
        test eax, eax
        je public_6621a54
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x28], ecx
        public_6621a54 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6621a40)
    }
}

#undef public_6621a54
