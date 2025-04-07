#include "Server-PCH.h"


#define public_6d5e990 _public_6d5e990
#define public_6d5e997 _public_6d5e997

PROC_DECLARE(0x6d5e960, internal_6d5e960, public_6d5e960);
extern "C" NAKED register_t __cdecl internal_6d5e960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        mov esi, 0xFFFFFFFE
        je public_6d5e990
        cmp byte ptr ds : [eax], 0
        je public_6d5e990
        push eax
        call dword ptr ds : [public_6d648c4]
        add esp, 4
        test eax, 0x3FFFFFFF
        je public_6d5e997
        mov edx, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        pop esi
        ret 
        public_6d5e990 : nop
        mov eax, 0xFFFFFFFC
        pop esi
        ret 
        public_6d5e997 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e960)
    }
}

#undef public_6d5e990
#undef public_6d5e997
