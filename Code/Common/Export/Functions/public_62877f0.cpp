#include "Common-PCH.h"


#define public_628780a _public_628780a

PROC_DECLARE(0x62877f0, internal_62877f0, public_62877f0);
extern "C" NAKED register_t __cdecl internal_62877f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_628780a
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_628780a
        mov eax, 1
        pop esi
        ret 
        public_628780a : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62877f0)
    }
}

#undef public_628780a
