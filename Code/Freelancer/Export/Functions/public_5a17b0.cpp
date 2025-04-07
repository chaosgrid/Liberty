#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_5a17b8 _public_5a17b8
#define public_5a17c8 _public_5a17c8
#define public_5a17cd _public_5a17cd
#define public_5a17d4 _public_5a17d4

PROC_DECLARE(0x5a17b0, internal_5a17b0, public_5a17b0);
extern "C" NAKED register_t __cdecl internal_5a17b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_5a17d4
        push esi
        public_5a17b8 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_5a17c8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_5a17cd
        public_5a17c8 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_5a17cd : nop
        test esi, esi
        mov ecx, esi
        jne public_5a17b8
        pop esi
        public_5a17d4 : nop
        ret 
        UNREACHABLE_TRAP(0x5a17b0)
    }
}

#undef public_5a17b8
#undef public_5a17c8
#undef public_5a17cd
#undef public_5a17d4
