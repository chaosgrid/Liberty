#include "EngBase-PCH.h"


#define public_661ffaa _public_661ffaa

PROC_DECLARE(0x661ff90, internal_661ff90, public_661ff90);
extern "C" NAKED register_t __cdecl internal_661ff90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [esi], eax
        jne public_661ffaa
        call dword ptr ds : [public_6629000]
        mov dword ptr ds : [esi], eax
        public_661ffaa : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x661ff90)
    }
}

#undef public_661ffaa
