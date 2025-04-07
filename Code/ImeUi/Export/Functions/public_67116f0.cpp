#include "ImeUi-PCH.h"


#define public_67116fe _public_67116fe

PROC_DECLARE(0x67116f0, internal_67116f0, public_67116f0);
extern "C" NAKED register_t __cdecl internal_67116f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        xor al, al
        test ecx, ecx
        je public_67116fe
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x10]
        public_67116fe : nop
        ret 4
        UNREACHABLE_TRAP(0x67116f0)
    }
}

#undef public_67116fe
