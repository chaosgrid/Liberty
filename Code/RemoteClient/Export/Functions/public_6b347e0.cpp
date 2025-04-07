#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);

#define public_6b347f0 _public_6b347f0
#define public_6b3480c _public_6b3480c
#define public_6b34817 _public_6b34817
#define public_6b3481f _public_6b3481f

PROC_DECLARE(0x6b347e0, internal_6b347e0, public_6b347e0);
extern "C" NAKED register_t __cdecl internal_6b347e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6b3481f
        lea ecx, ds:[ecx]
        public_6b347f0 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b3480c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b34817
        public_6b3480c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b34817 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b347f0
        public_6b3481f : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b347e0)
    }
}

#undef public_6b347f0
#undef public_6b3480c
#undef public_6b34817
#undef public_6b3481f
