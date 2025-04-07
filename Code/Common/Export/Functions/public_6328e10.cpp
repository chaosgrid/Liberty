#include "Common-PCH.h"


#define public_6328e20 _public_6328e20

PROC_DECLARE(0x6328e10, internal_6328e10, public_6328e10);
extern "C" NAKED register_t __cdecl internal_6328e10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        jne public_6328e20
        mov ecx, dword ptr ds : [public_639914c]
        public_6328e20 : nop
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [esi+0x18]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6328e10)
    }
}

#undef public_6328e20
