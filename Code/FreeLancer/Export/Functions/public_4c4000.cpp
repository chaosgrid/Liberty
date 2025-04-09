#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4000);

#define public_4c4011 _public_4c4011
#define public_4c4024 _public_4c4024
#define public_4c402b _public_4c402b

PROC_DECLARE(0x4c4000, internal_4c4000, public_4c4000);
extern "C" NAKED register_t __cdecl internal_4c4000()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672970]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_4c402b
        mov dx, word ptr ss : [esp+4]
        public_4c4011 : nop
        cmp word ptr ds : [eax+8], dx
        je public_4c4024
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_4c4011
        inc dword ptr ds : [public_673388]
        ret 
        public_4c4024 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        public_4c402b : nop
        inc dword ptr ds : [public_673388]
        ret 
        UNREACHABLE_TRAP(0x4c4000)
    }
}

#undef public_4c4011
#undef public_4c4024
#undef public_4c402b
