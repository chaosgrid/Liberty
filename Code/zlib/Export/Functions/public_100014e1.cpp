#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100014e1);

#define public_1000150f _public_1000150f
#define public_10001511 _public_10001511
#define public_10001518 _public_10001518

PROC_DECLARE(0x100014e1, internal_100014e1, public_100014e1);
extern "C" NAKED register_t __cdecl internal_100014e1()
{
    __asm
    {
        push ebx
        pushfd 
        pop eax
        mov ecx, eax
        xor eax, 0x40000
        push eax
        popfd 
        pushfd 
        pop eax
        xor eax, ecx
        je public_10001511
        push ecx
        popfd 
        pushfd 
        pushfd 
        pop ecx
        mov eax, ecx
        xor eax, 0x200000
        push eax
        popfd 
        pushfd 
        pop eax
        popfd 
        xor eax, ecx
        je public_10001518
        mov eax, 1
        cpuid 
        public_1000150f : nop
        pop ebx
        ret 
        public_10001511 : nop
        mov eax, 0x300
        jmp public_1000150f
        public_10001518 : nop
        mov eax, 0x400
        jmp public_1000150f
        UNREACHABLE_TRAP(0x100014e1)
    }
}

#undef public_1000150f
#undef public_10001511
#undef public_10001518
