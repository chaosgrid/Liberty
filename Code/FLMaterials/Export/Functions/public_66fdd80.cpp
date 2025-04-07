#include "FLMaterials-PCH.h"


#define public_66fddaa _public_66fddaa

PROC_DECLARE(0x66fdd80, internal_66fdd80, public_66fdd80);
extern "C" NAKED register_t __cdecl internal_66fdd80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x30]
        fstp dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_66fddaa
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+8]
        pop esi
        ret 4
        public_66fddaa : nop
        fld dword ptr ss : [esp+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66fdd80)
    }
}

#undef public_66fddaa
