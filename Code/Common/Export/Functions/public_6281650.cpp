#include "Common-PCH.h"


#define public_6281678 _public_6281678

PROC_DECLARE(0x6281650, internal_6281650, public_6281650);
extern "C" NAKED register_t __cdecl internal_6281650()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x54]
        test eax, eax
        je public_6281678
        mov ecx, dword ptr ds : [eax+0x78]
        and ecx, 0x300
        cmp ecx, 0x100
        jne public_6281678
        mov ecx, dword ptr ds : [eax+0x1C]
        xor edx, edx
        test ecx, ecx
        sete dl
        mov al, dl
        ret 
        public_6281678 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6281650)
    }
}

#undef public_6281678
