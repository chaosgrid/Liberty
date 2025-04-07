#include "Common-PCH.h"


#define public_629ed71 _public_629ed71

PROC_DECLARE(0x629ed60, internal_629ed60, public_629ed60);
extern "C" NAKED register_t __cdecl internal_629ed60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629ed71
        mov al, byte ptr ds : [esi+0x11]
        pop esi
        ret 
        public_629ed71 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629ed60)
    }
}

#undef public_629ed71
