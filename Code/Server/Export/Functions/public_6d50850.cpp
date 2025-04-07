#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50850);

#define public_6d50860 _public_6d50860
#define public_6d5087c _public_6d5087c
#define public_6d50887 _public_6d50887
#define public_6d5088f _public_6d5088f

PROC_DECLARE(0x6d50850, internal_6d50850, public_6d50850);
extern "C" NAKED register_t __cdecl internal_6d50850()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6d5088f
        lea ecx, ds:[ecx]
        public_6d50860 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d5087c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d50887
        public_6d5087c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d50850
        add eax, 3
        public_6d50887 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d50860
        public_6d5088f : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d50850)
    }
}

#undef public_6d50860
#undef public_6d5087c
#undef public_6d50887
#undef public_6d5088f
