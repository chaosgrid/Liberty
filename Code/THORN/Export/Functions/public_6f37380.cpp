#include "THORN-PCH.h"


#define public_6f373aa _public_6f373aa

PROC_DECLARE(0x6f37380, internal_6f37380, public_6f37380);
extern "C" NAKED register_t __cdecl internal_6f37380()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6f5fea4
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6f373aa
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6f373aa : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f37380)
    }
}

#undef public_6f373aa
