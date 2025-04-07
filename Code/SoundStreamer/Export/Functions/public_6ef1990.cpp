#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1990);

#define public_6ef19af _public_6ef19af
#define public_6ef19bf _public_6ef19bf
#define public_6ef19c9 _public_6ef19c9

PROC_DECLARE(0x6ef1990, internal_6ef1990, public_6ef1990);
extern "C" NAKED register_t __cdecl internal_6ef1990()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 3
        mov byte ptr ds : [esi+0x86], 0
        je public_6ef19af
        cmp eax, 6
        je public_6ef19af
        cmp eax, 2
        jne public_6ef19c9
        public_6ef19af : nop
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        je public_6ef19bf
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        public_6ef19bf : nop
        mov dword ptr ds : [esi+0x80], 9
        public_6ef19c9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef1990)
    }
}

#undef public_6ef19af
#undef public_6ef19bf
#undef public_6ef19c9
