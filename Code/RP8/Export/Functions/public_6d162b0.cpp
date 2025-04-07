#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d162b0);

#define public_6d162d1 _public_6d162d1
#define public_6d162e7 _public_6d162e7
#define public_6d162fb _public_6d162fb

PROC_DECLARE(0x6d162b0, internal_6d162b0, public_6d162b0);
extern "C" NAKED register_t __cdecl internal_6d162b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xC
        cmp eax, 0xC
        jne public_6d162d1
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0x1C
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d162fb
        public_6d162d1 : nop
        mov edx, dword ptr ss : [ebp+8]
        and edx, 4
        cmp edx, 4
        jne public_6d162e7
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x10
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d162fb
        public_6d162e7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 2
        cmp ecx, 2
        jne public_6d162fb
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        mov dword ptr ss : [ebp-4], edx
        public_6d162fb : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d162b0)
    }
}

#undef public_6d162d1
#undef public_6d162e7
#undef public_6d162fb
