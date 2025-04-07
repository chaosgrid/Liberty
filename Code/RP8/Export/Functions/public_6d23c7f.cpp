#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23c7f);

#define public_6d23cc1 _public_6d23cc1
#define public_6d23cc5 _public_6d23cc5
#define public_6d23cc7 _public_6d23cc7

PROC_DECLARE(0x6d23c7f, internal_6d23c7f, public_6d23c7f);
extern "C" NAKED register_t __cdecl internal_6d23c7f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        movsx eax, byte ptr ss : [ebp+8]
        cmp eax, 0x3E
        je public_6d23cc1
        movsx ecx, byte ptr ss : [ebp+8]
        cmp ecx, 0x3C
        je public_6d23cc1
        movsx edx, byte ptr ss : [ebp+8]
        cmp edx, 0x21
        je public_6d23cc1
        movsx eax, byte ptr ss : [ebp+8]
        cmp eax, 0x3D
        je public_6d23cc1
        movsx ecx, byte ptr ss : [ebp+8]
        cmp ecx, 0x20
        je public_6d23cc1
        movsx edx, byte ptr ss : [ebp+8]
        cmp edx, 0xD
        je public_6d23cc1
        movsx eax, byte ptr ss : [ebp+8]
        cmp eax, 9
        jne public_6d23cc5
        public_6d23cc1 : nop
        mov al, 1
        jmp public_6d23cc7
        public_6d23cc5 : nop
        xor al, al
        public_6d23cc7 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d23c7f)
    }
}

#undef public_6d23cc1
#undef public_6d23cc5
#undef public_6d23cc7
