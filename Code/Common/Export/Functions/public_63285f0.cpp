#include "Common-PCH.h"


#define public_6328604 _public_6328604

PROC_DECLARE(0x63285f0, internal_63285f0, public_63285f0);
extern "C" NAKED register_t __cdecl internal_63285f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6328604
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 1
        jmp dword ptr ds : [eax]
        public_6328604 : nop
        ret 4
        UNREACHABLE_TRAP(0x63285f0)
    }
}

#undef public_6328604
