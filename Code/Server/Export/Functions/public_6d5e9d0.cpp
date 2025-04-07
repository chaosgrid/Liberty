#include "Server-PCH.h"


#define public_6d5ea09 _public_6d5ea09

PROC_DECLARE(0x6d5e9d0, internal_6d5e9d0, public_6d5e9d0);
extern "C" NAKED register_t __cdecl internal_6d5e9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, 0xFFFFFFFC
        mov dword ptr ds : [esi], 0
        je public_6d5ea09
        cmp byte ptr ds : [eax], 0
        je public_6d5ea09
        push eax
        call dword ptr ds : [public_6d648bc]
        mov ecx, eax
        add esp, 4
        test ecx, 0x3FFFFFFF
        je public_6d5ea09
        pop edi
        mov dword ptr ds : [esi], ecx
        xor eax, eax
        pop esi
        ret 
        public_6d5ea09 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e9d0)
    }
}

#undef public_6d5ea09
