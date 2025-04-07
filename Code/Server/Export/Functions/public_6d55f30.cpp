#include "Server-PCH.h"


#define public_6d55f76 _public_6d55f76

PROC_DECLARE(0x6d55f30, internal_6d55f30, public_6d55f30);
extern "C" NAKED register_t __cdecl internal_6d55f30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        jbe public_6d55f76
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d55f76
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push esi
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        pop esi
        je public_6d55f76
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x164]
        xor eax, eax
        public_6d55f76 : nop
        ret 
        UNREACHABLE_TRAP(0x6d55f30)
    }
}

#undef public_6d55f76
