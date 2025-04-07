#include "Common-PCH.h"


#define public_6333823 _public_6333823

PROC_DECLARE(0x6333800, internal_6333800, public_6333800);
extern "C" NAKED register_t __cdecl internal_6333800()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6333823
        mov edx, dword ptr ds : [esi]
        add eax, 0xFFFFFFF0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        pop esi
        ret 4
        public_6333823 : nop
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6333800)
    }
}

#undef public_6333823
