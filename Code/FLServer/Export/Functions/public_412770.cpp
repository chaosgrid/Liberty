#include "FLServer-PCH.h"


#define public_412791 _public_412791

PROC_DECLARE(0x412770, internal_412770, public_412770);
extern "C" NAKED register_t __cdecl internal_412770()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20C]
        test eax, eax
        je public_412791
        push eax
        call dword ptr ds : [public_41b970]
        add esp, 4
        mov dword ptr ds : [esi+0x20C], 0
        public_412791 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x412770)
    }
}

#undef public_412791
