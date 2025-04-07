#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40720);

#define public_6d40732 _public_6d40732
#define public_6d4074a _public_6d4074a
#define public_6d40756 _public_6d40756

PROC_DECLARE(0x6d40720, internal_6d40720, public_6d40720);
extern "C" NAKED register_t __cdecl internal_6d40720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        push edi
        je public_6d4074a
        public_6d40732 : nop
        mov cl, byte ptr ds : [edx]
        test cl, cl
        je public_6d4074a
        movzx edi, word ptr ds : [eax]
        movsx ecx, cl
        cmp edi, ecx
        jne public_6d40756
        add eax, 2
        inc edx
        cmp eax, esi
        jne public_6d40732
        public_6d4074a : nop
        mov cl, byte ptr ds : [edx]
        xor eax, eax
        test cl, cl
        pop edi
        sete al
        pop esi
        ret 
        public_6d40756 : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d40720)
    }
}

#undef public_6d40732
#undef public_6d4074a
#undef public_6d40756
