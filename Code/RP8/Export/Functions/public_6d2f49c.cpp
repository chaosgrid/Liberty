#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);

#define public_6d2f4ab _public_6d2f4ab
#define public_6d2f4ba _public_6d2f4ba
#define public_6d2f4bf _public_6d2f4bf

PROC_DECLARE(0x6d2f49c, internal_6d2f49c, public_6d2f49c);
extern "C" NAKED register_t __cdecl internal_6d2f49c()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d6c3c8]
        mov eax, offset public_6d5eb88
        cmp ecx, eax
        jbe public_6d2f4ba
        public_6d2f4ab : nop
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [eax]
        je public_6d2f4bf
        add eax, 0x24
        cmp eax, ecx
        jb public_6d2f4ab
        public_6d2f4ba : nop
        mov eax, offset public_6d5eb60
        public_6d2f4bf : nop
        ret 
        UNREACHABLE_TRAP(0x6d2f49c)
    }
}

#undef public_6d2f4ab
#undef public_6d2f4ba
#undef public_6d2f4bf
