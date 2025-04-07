#include "Server-PCH.h"


#define public_6d3065d _public_6d3065d
#define public_6d30673 _public_6d30673
#define public_6d30675 _public_6d30675
#define public_6d3067e _public_6d3067e
#define public_6d3068a _public_6d3068a

PROC_DECLARE(0x6d30640, internal_6d30640, public_6d30640);
extern "C" NAKED register_t __cdecl internal_6d30640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0xC], eax
        je public_6d3068a
        mov dx, word ptr ds : [eax]
        cmp dx, word ptr ds : [ecx+8]
        je public_6d3065d
        cmp dx, word ptr ds : [ecx+0xE]
        jne public_6d3068a
        public_6d3065d : nop
        mov ecx, dword ptr ds : [ecx+4]
        add eax, 2
        test ecx, ecx
        je public_6d3067e
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d30673 : nop
        je public_6d3068a
        public_6d30675 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d3067e : nop
        mov cl, byte ptr ds : [esi+0x1C]
        test cl, cl
        je public_6d30675
        cmp dword ptr ds : [esi+8], eax
        jmp public_6d30673
        public_6d3068a : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d30640)
    }
}

#undef public_6d3065d
#undef public_6d30673
#undef public_6d30675
#undef public_6d3067e
#undef public_6d3068a
