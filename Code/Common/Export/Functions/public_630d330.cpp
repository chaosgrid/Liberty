#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d330);

#define public_630d379 _public_630d379
#define public_630d39a _public_630d39a
#define public_630d3c5 _public_630d3c5

PROC_DECLARE(0x630d330, internal_630d330, public_630d330);
extern "C" NAKED register_t __cdecl internal_630d330()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x414]
        test cl, cl
        mov cl, byte ptr ds : [eax+0x415]
        push esi
        jne public_630d39a
        mov edx, dword ptr ds : [eax+0x418]
        mov esi, edx
        shl edx, 8
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x404]
        je public_630d379
        sub ecx, 8
        shr esi, cl
        movzx ecx, byte ptr ss : [esp+8]
        and esi, 0xFF
        xor esi, ecx
        mov ecx, dword ptr ds : [eax+esi*4]
        xor ecx, edx
        mov dword ptr ds : [eax+0x418], ecx
        pop esi
        ret 4
        public_630d379 : nop
        sub ecx, 8
        shr esi, cl
        and esi, 0xFF
        mov ecx, dword ptr ds : [eax+esi*4]
        xor ecx, edx
        movzx edx, byte ptr ss : [esp+8]
        xor ecx, edx
        mov dword ptr ds : [eax+0x418], ecx
        pop esi
        ret 4
        public_630d39a : nop
        test cl, cl
        movzx esi, byte ptr ss : [esp+8]
        je public_630d3c5
        mov ecx, dword ptr ds : [eax+0x418]
        mov edx, ecx
        and edx, 0xFF
        xor edx, esi
        mov edx, dword ptr ds : [eax+edx*4]
        shr ecx, 8
        xor edx, ecx
        mov dword ptr ds : [eax+0x418], edx
        pop esi
        ret 4
        public_630d3c5 : nop
        mov ecx, dword ptr ds : [eax+0x404]
        mov edx, dword ptr ds : [eax+0x418]
        sub ecx, 8
        shl esi, cl
        mov ecx, edx
        and ecx, 0xFF
        xor esi, dword ptr ds : [eax+ecx*4]
        shr edx, 8
        xor esi, edx
        mov dword ptr ds : [eax+0x418], esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d330)
    }
}

#undef public_630d379
#undef public_630d39a
#undef public_630d3c5
