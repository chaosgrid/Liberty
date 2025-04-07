#include "Deformable2-PCH.h"


#define public_6600b2e _public_6600b2e

PROC_DECLARE(0x6600af0, internal_6600af0, public_6600af0);
extern "C" NAKED register_t __cdecl internal_6600af0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6600b2e
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6600b2e
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6600b2e
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push 1
        push 0x8D
        push esi
        call dword ptr ds : [eax+0xF0]
        public_6600b2e : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6600af0)
    }
}

#undef public_6600b2e
