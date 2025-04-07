#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad76a4);

#define public_6ad76bb _public_6ad76bb
#define public_6ad76cd _public_6ad76cd
#define public_6ad76e0 _public_6ad76e0
#define public_6ad76f5 _public_6ad76f5
#define public_6ad76f7 _public_6ad76f7
#define public_6ad76fa _public_6ad76fa

PROC_DECLARE(0x6ad76a4, internal_6ad76a4, public_6ad76a4);
extern "C" NAKED register_t __cdecl internal_6ad76a4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        xor edx, edx
        cmp dword ptr ss : [ebp+0xC], 0x7FF00000
        jne public_6ad76bb
        cmp dword ptr ss : [ebp+8], edx
        jne public_6ad76cd
        push 1
        jmp public_6ad76f7
        public_6ad76bb : nop
        cmp dword ptr ss : [ebp+0xC], 0xFFF00000
        jne public_6ad76cd
        cmp dword ptr ss : [ebp+8], edx
        jne public_6ad76cd
        push 2
        jmp public_6ad76f7
        public_6ad76cd : nop
        mov ecx, dword ptr ss : [ebp+0xE]
        mov eax, 0x7FF8
        and ecx, eax
        cmp cx, ax
        jne public_6ad76e0
        push 3
        jmp public_6ad76f7
        public_6ad76e0 : nop
        cmp cx, 0x7FF0
        jne public_6ad76fa
        test dword ptr ss : [ebp+0xC], 0x7FFFF
        jne public_6ad76f5
        cmp dword ptr ss : [ebp+8], edx
        je public_6ad76fa
        public_6ad76f5 : nop
        push 4
        public_6ad76f7 : nop
        pop eax
        pop ebp
        ret 
        public_6ad76fa : nop
        xor eax, eax
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad76a4)
    }
}

#undef public_6ad76bb
#undef public_6ad76cd
#undef public_6ad76e0
#undef public_6ad76f5
#undef public_6ad76f7
#undef public_6ad76fa
