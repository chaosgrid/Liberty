#include "Common-PCH.h"


#define public_628774b _public_628774b

PROC_DECLARE(0x6287730, internal_6287730, public_6287730);
extern "C" NAKED register_t __cdecl internal_6287730()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_628774b
        add ecx, 4
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_639bf6c
        ret 4
        public_628774b : nop
        xor ecx, ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_639bf6c
        ret 4
        UNREACHABLE_TRAP(0x6287730)
    }
}

#undef public_628774b
