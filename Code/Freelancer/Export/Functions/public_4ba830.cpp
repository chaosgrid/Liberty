#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba830);

#define public_4ba843 _public_4ba843
#define public_4ba84e _public_4ba84e
#define public_4ba854 _public_4ba854
#define public_4ba856 _public_4ba856

PROC_DECLARE(0x4ba830, internal_4ba830, public_4ba830);
extern "C" NAKED register_t __cdecl internal_4ba830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_4ba854
        mov cx, word ptr ss : [esp+0xC]
        mov dl, byte ptr ss : [esp+8]
        public_4ba843 : nop
        cmp word ptr ds : [eax+8], cx
        jne public_4ba84e
        cmp byte ptr ds : [eax+0xA], dl
        je public_4ba856
        public_4ba84e : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_4ba843
        public_4ba854 : nop
        xor eax, eax
        public_4ba856 : nop
        ret 
        UNREACHABLE_TRAP(0x4ba830)
    }
}

#undef public_4ba843
#undef public_4ba84e
#undef public_4ba854
#undef public_4ba856
