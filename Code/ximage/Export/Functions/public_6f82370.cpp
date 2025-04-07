#include "ximage-PCH.h"


#define public_6f8239a _public_6f8239a

PROC_DECLARE(0x6f82370, internal_6f82370, public_6f82370);
extern "C" NAKED register_t __cdecl internal_6f82370()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6f840fc
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6f8239a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6f8239a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f82370)
    }
}

#undef public_6f8239a
