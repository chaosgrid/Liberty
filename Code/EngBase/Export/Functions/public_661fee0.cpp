#include "EngBase-PCH.h"


#define public_661ff02 _public_661ff02
#define public_661ff0f _public_661ff0f

PROC_DECLARE(0x661fee0, internal_661fee0, public_661fee0);
extern "C" NAKED register_t __cdecl internal_661fee0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_661ff0f
        test eax, eax
        je public_661ff02
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], 0
        public_661ff02 : nop
        test esi, esi
        mov dword ptr ds : [edi+4], esi
        je public_661ff0f
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_661ff0f : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x661fee0)
    }
}

#undef public_661ff02
#undef public_661ff0f
