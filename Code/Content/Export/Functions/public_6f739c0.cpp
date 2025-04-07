#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f739c0);

#define public_6f739d4 _public_6f739d4
#define public_6f739e4 _public_6f739e4
#define public_6f739e7 _public_6f739e7
#define public_6f73a07 _public_6f73a07
#define public_6f73a0b _public_6f73a0b
#define public_6f73a10 _public_6f73a10
#define public_6f73a1f _public_6f73a1f
#define public_6f73a28 _public_6f73a28

PROC_DECLARE(0x6f739c0, internal_6f739c0, public_6f739c0);
extern "C" NAKED register_t __cdecl internal_6f739c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xE0]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        je public_6f73a1f
        mov ebp, dword ptr ss : [esp+0x14]
        public_6f739d4 : nop
        mov esi, dword ptr ds : [edi+8]
        add esi, 0xD8
        jne public_6f739e4
        mov eax, dword ptr ss : [ebp]
        jmp public_6f73a10
        public_6f739e4 : nop
        lea eax, ss:[ebp+4]
        public_6f739e7 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f73a0b
        test cl, cl
        je public_6f73a07
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f73a0b
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f739e7
        public_6f73a07 : nop
        xor eax, eax
        jmp public_6f73a10
        public_6f73a0b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f73a10 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f73a28
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6f739d4
        public_6f73a1f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6f73a28 : nop
        mov eax, dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f739c0)
    }
}

#undef public_6f739d4
#undef public_6f739e4
#undef public_6f739e7
#undef public_6f73a07
#undef public_6f73a0b
#undef public_6f73a10
#undef public_6f73a1f
#undef public_6f73a28
