#include "Server-PCH.h"


#define public_6d5e856 _public_6d5e856
#define public_6d5e86a _public_6d5e86a

PROC_DECLARE(0x6d5e830, internal_6d5e830, public_6d5e830);
extern "C" NAKED register_t __cdecl internal_6d5e830()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_6d5e86a
        cmp byte ptr ds : [edi], 0
        je public_6d5e86a
        push esi
        call dword ptr ds : [public_6d647b8]
        push edi
        mov ecx, eax
        xor esi, esi
        call dword ptr ds : [public_6d649f0]
        test eax, eax
        je public_6d5e856
        mov esi, dword ptr ds : [eax]
        public_6d5e856 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        test esi, esi
        setne al
        pop esi
        pop edi
        dec eax
        and eax, 0xFFFFFFFE
        ret 
        public_6d5e86a : nop
        mov eax, 0xFFFFFFFC
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6d5e830)
    }
}

#undef public_6d5e856
#undef public_6d5e86a
