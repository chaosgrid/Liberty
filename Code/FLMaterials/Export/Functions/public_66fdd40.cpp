#include "FLMaterials-PCH.h"


#define public_66fdd6a _public_66fdd6a

PROC_DECLARE(0x66fdd40, internal_66fdd40, public_66fdd40);
extern "C" NAKED register_t __cdecl internal_66fdd40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_66fdd6a
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+8]
        pop esi
        ret 4
        public_66fdd6a : nop
        fld dword ptr ss : [esp+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66fdd40)
    }
}

#undef public_66fdd6a
