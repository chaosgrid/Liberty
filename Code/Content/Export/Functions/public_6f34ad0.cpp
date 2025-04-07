#include "Content-PCH.h"


#define public_6f34ae4 _public_6f34ae4

PROC_DECLARE(0x6f34ad0, internal_6f34ad0, public_6f34ad0);
extern "C" NAKED register_t __cdecl internal_6f34ad0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f34ae4
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x2C]
        public_6f34ae4 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f34ad0)
    }
}

#undef public_6f34ae4
