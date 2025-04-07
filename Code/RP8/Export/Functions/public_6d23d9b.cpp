#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23c7f);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);

#define public_6d23df9 _public_6d23df9
#define public_6d23e00 _public_6d23e00

PROC_DECLARE(0x6d23d9b, internal_6d23d9b, public_6d23d9b);
extern "C" NAKED register_t __cdecl internal_6d23d9b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push edi
        mov dword ptr ss : [ebp-8], ecx
        mov edi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call dword ptr ds : [public_6d5e104]
        add esp, 0xC
        test eax, eax
        jne public_6d23df9
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp-4]
        mov cl, byte ptr ds : [edx+eax]
        push ecx
        call public_6d23c7f
        add esp, 4
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d23df9
        mov dword ptr ss : [ebp-0xC], 1
        jmp public_6d23e00
        public_6d23df9 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d23e00 : nop
        mov al, byte ptr ss : [ebp-0xC]
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d23d9b)
    }
}

#undef public_6d23df9
#undef public_6d23e00
