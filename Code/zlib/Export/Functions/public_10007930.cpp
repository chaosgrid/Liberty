#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10007930);

#define public_10007980 _public_10007980
#define public_10007996 _public_10007996

PROC_DECLARE(0x10007930, internal_10007930, public_10007930);
extern "C" NAKED register_t __cdecl internal_10007930()
{
    __asm
    {
        movzx edx, word ptr ds : [ecx+0xA0]
        movzx eax, word ptr ds : [ecx+0xA4]
        add eax, edx
        movzx edx, word ptr ds : [ecx+0x9C]
        add eax, edx
        movzx edx, word ptr ds : [ecx+0x98]
        add eax, edx
        movzx edx, word ptr ds : [ecx+0x94]
        add eax, edx
        movzx edx, word ptr ds : [ecx+0x90]
        add eax, edx
        movzx edx, word ptr ds : [ecx+0x8C]
        push ebx
        push esi
        xor esi, esi
        push edi
        add eax, edx
        lea edx, ds:[ecx+0xA8]
        mov edi, 0x79
        lea ecx, ds:[ecx]
        public_10007980 : nop
        movzx ebx, word ptr ds : [edx]
        add esi, ebx
        add edx, 4
        dec edi
        jne public_10007980
        lea edx, ds:[ecx+0x28C]
        mov edi, 0x80
        public_10007996 : nop
        movzx ebx, word ptr ds : [edx]
        add eax, ebx
        add edx, 4
        dec edi
        jne public_10007996
        shr esi, 2
        cmp esi, eax
        pop edi
        sbb al, al
        inc al
        pop esi
        mov byte ptr ds : [ecx+0x1C], al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10007930)
    }
}

#undef public_10007980
#undef public_10007996
