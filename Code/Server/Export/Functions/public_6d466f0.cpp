#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);

#define public_6d46739 _public_6d46739
#define public_6d4675a _public_6d4675a
#define public_6d46785 _public_6d46785

PROC_DECLARE(0x6d466f0, internal_6d466f0, public_6d466f0);
extern "C" NAKED register_t __cdecl internal_6d466f0()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x414]
        test cl, cl
        mov cl, byte ptr ds : [eax+0x415]
        push esi
        jne public_6d4675a
        mov edx, dword ptr ds : [eax+0x418]
        mov esi, edx
        shl edx, 8
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x404]
        je public_6d46739
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
        public_6d46739 : nop
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
        public_6d4675a : nop
        test cl, cl
        movzx esi, byte ptr ss : [esp+8]
        je public_6d46785
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
        public_6d46785 : nop
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
        UNREACHABLE_TRAP(0x6d466f0)
    }
}

#undef public_6d46739
#undef public_6d4675a
#undef public_6d46785
