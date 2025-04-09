#include "FreeLancer-PCH.h"


#define public_406b76 _public_406b76

PROC_DECLARE(0x406b60, internal_406b60, public_406b60);
extern "C" NAKED register_t __cdecl internal_406b60()
{
    __asm
    {
        push esi
        mov esi, ecx
        dec dword ptr ds : [esi+0x18]
        jne public_406b76
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_406b76 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x406b60)
    }
}

#undef public_406b76
