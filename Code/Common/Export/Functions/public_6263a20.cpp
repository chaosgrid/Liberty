#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263a20);

#define public_6263a3b _public_6263a3b
#define public_6263a50 _public_6263a50
#define public_6263a5f _public_6263a5f

PROC_DECLARE(0x6263a20, internal_6263a20, public_6263a20);
extern "C" NAKED register_t __cdecl internal_6263a20()
{
    __asm
    {
        movzx eax, word ptr ds : [ecx+8]
        cmp eax, 0x21
        je public_6263a3b
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        ret 
        public_6263a3b : nop
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [edx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6263a5f
        nop 
        lea esp, ss:[esp]
        public_6263a50 : nop
        mov ecx, esi
        call public_6263a20
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6263a50
        public_6263a5f : nop
        lea eax, ds:[edi+3]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6263a20)
    }
}

#undef public_6263a3b
#undef public_6263a50
#undef public_6263a5f
