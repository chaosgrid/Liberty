#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50fb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50fb62 _public_50fb62
#define public_50fb79 _public_50fb79

PROC_DECLARE(0x50fb50, internal_50fb50, public_50fb50);
extern "C" NAKED register_t __cdecl internal_50fb50()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, ebx
        cmp eax, ebx
        je public_50fb79
        push esi
        push edi
        public_50fb62 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x2C
        mov ecx, 0xB
        add edx, 0x2C
        cmp eax, ebx
        rep movsd
        jne public_50fb62
        pop edi
        pop esi
        public_50fb79 : nop
        xor ebx, ebx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0x34], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        mov byte ptr ss : [ebp+0x14], bl
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x50fb50)
    }
}

#undef public_50fb62
#undef public_50fb79
