#include "Content-PCH.h"


#define public_6f86862 _public_6f86862
#define public_6f86870 _public_6f86870
#define public_6f86876 _public_6f86876

PROC_DECLARE(0x6f86850, internal_6f86850, public_6f86850);
extern "C" NAKED register_t __cdecl internal_6f86850()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        je public_6f86870
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f86870
        public_6f86862 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [esi+0x48]
        je public_6f86876
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f86862
        public_6f86870 : nop
        xor eax, eax
        pop esi
        ret 4
        public_6f86876 : nop
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f86850)
    }
}

#undef public_6f86862
#undef public_6f86870
#undef public_6f86876
