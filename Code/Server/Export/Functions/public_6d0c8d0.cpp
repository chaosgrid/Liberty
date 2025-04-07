#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);

#define public_6d0c8f1 _public_6d0c8f1
#define public_6d0c8fe _public_6d0c8fe
#define public_6d0c90b _public_6d0c90b
#define public_6d0c918 _public_6d0c918
#define public_6d0c928 _public_6d0c928
#define public_6d0c935 _public_6d0c935
#define public_6d0c945 _public_6d0c945
#define public_6d0c953 _public_6d0c953
#define public_6d0c963 _public_6d0c963

PROC_DECLARE(0x6d0c8d0, internal_6d0c8d0, public_6d0c8d0);
extern "C" NAKED register_t __cdecl internal_6d0c8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        je public_6d0c963
        mov edx, dword ptr ss : [esp+8]
        cmp edx, 0xFFFFFFFF
        jne public_6d0c8f1
        push eax
        call public_6d0c840
        ret 8
        public_6d0c8f1 : nop
        test edx, 0x7F0000
        je public_6d0c8fe
        add ecx, 0x34
        jmp public_6d0c953
        public_6d0c8fe : nop
        test edx, 0x10000000
        je public_6d0c90b
        add ecx, 0x48
        jmp public_6d0c953
        public_6d0c90b : nop
        test edx, 0xFDFF
        je public_6d0c918
        add ecx, 0x5C
        jmp public_6d0c953
        public_6d0c918 : nop
        test edx, 0x4000000
        je public_6d0c928
        add ecx, 0x98
        jmp public_6d0c953
        public_6d0c928 : nop
        test edx, 0x1000000
        je public_6d0c935
        add ecx, 0x70
        jmp public_6d0c953
        public_6d0c935 : nop
        test edx, 0x8000000
        je public_6d0c945
        add ecx, 0xAC
        jmp public_6d0c953
        public_6d0c945 : nop
        test edx, 0x60000000
        je public_6d0c963
        add ecx, 0xC0
        public_6d0c953 : nop
        push eax
        call public_6cf4f00
        test eax, eax
        je public_6d0c963
        mov eax, dword ptr ds : [eax+8]
        ret 8
        public_6d0c963 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d0c8d0)
    }
}

#undef public_6d0c8f1
#undef public_6d0c8fe
#undef public_6d0c90b
#undef public_6d0c918
#undef public_6d0c928
#undef public_6d0c935
#undef public_6d0c945
#undef public_6d0c953
#undef public_6d0c963
