#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);

#define public_623ef7b _public_623ef7b
#define public_623ef85 _public_623ef85
#define public_623efaa _public_623efaa

PROC_DECLARE(0x623ef70, internal_623ef70, public_623ef70);
extern "C" NAKED register_t __cdecl internal_623ef70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_623ef7b
        xor eax, eax
        ret 
        public_623ef7b : nop
        mov cl, byte ptr ds : [edx]
        or eax, 0xFFFFFFFF
        test cl, cl
        je public_623efaa
        push esi
        public_623ef85 : nop
        mov esi, eax
        and ecx, 0xFF
        and esi, 0xFF
        xor ecx, esi
        shr eax, 8
        mov ecx, dword ptr ds : [ecx*4+public_6256d68]
        xor eax, ecx
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_623ef85
        pop esi
        public_623efaa : nop
        not eax
        ret 
        UNREACHABLE_TRAP(0x623ef70)
    }
}

#undef public_623ef7b
#undef public_623ef85
#undef public_623efaa
