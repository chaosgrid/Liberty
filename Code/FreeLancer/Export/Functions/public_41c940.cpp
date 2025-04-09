#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c940);

#define public_41c950 _public_41c950
#define public_41c95b _public_41c95b
#define public_41c961 _public_41c961
#define public_41c963 _public_41c963

PROC_DECLARE(0x41c940, internal_41c940, public_41c940);
extern "C" NAKED register_t __cdecl internal_41c940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_41c961
        mov cx, word ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+4]
        nop 
        public_41c950 : nop
        cmp word ptr ds : [eax+8], cx
        jne public_41c95b
        cmp byte ptr ds : [eax+0xA], dl
        je public_41c963
        public_41c95b : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_41c950
        public_41c961 : nop
        xor eax, eax
        public_41c963 : nop
        ret 8
        UNREACHABLE_TRAP(0x41c940)
    }
}

#undef public_41c950
#undef public_41c95b
#undef public_41c961
#undef public_41c963
