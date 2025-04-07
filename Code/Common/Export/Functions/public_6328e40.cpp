#include "Common-PCH.h"


#define public_6328e50 _public_6328e50

PROC_DECLARE(0x6328e40, internal_6328e40, public_6328e40);
extern "C" NAKED register_t __cdecl internal_6328e40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        jne public_6328e50
        mov ecx, dword ptr ds : [public_639914c]
        public_6328e50 : nop
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [esi+0xC]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6328e40)
    }
}

#undef public_6328e50
