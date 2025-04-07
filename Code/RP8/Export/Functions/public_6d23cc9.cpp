#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d233dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d23cc9);

#define public_6d23ce8 _public_6d23ce8
#define public_6d23d07 _public_6d23d07
#define public_6d23d2b _public_6d23d2b
#define public_6d23d4f _public_6d23d4f
#define public_6d23d5b _public_6d23d5b

PROC_DECLARE(0x6d23cc9, internal_6d23cc9, public_6d23cc9);
extern "C" NAKED register_t __cdecl internal_6d23cc9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp-0xC]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d23ce8
        or eax, 0xFFFFFFFF
        jmp public_6d23d5b
        public_6d23ce8 : nop
        mov eax, dword ptr ss : [ebp-8]
        shl eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d23d07
        or eax, 0xFFFFFFFF
        jmp public_6d23d5b
        public_6d23d07 : nop
        mov ecx, dword ptr ss : [ebp-8]
        shl ecx, 8
        mov edx, dword ptr ss : [ebp-4]
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d23d2b
        or eax, 0xFFFFFFFF
        jmp public_6d23d5b
        public_6d23d2b : nop
        mov eax, dword ptr ss : [ebp-8]
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ss : [ebp-0xC]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d23d4f
        or eax, 0xFFFFFFFF
        jmp public_6d23d5b
        public_6d23d4f : nop
        mov edx, dword ptr ss : [ebp-4]
        or edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-4]
        public_6d23d5b : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d23cc9)
    }
}

#undef public_6d23ce8
#undef public_6d23d07
#undef public_6d23d2b
#undef public_6d23d4f
#undef public_6d23d5b
