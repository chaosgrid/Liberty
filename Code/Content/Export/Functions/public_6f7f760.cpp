#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7f760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7f786 _public_6f7f786
#define public_6f7f78e _public_6f7f78e
#define public_6f7f794 _public_6f7f794
#define public_6f7f7b0 _public_6f7f7b0
#define public_6f7f7b8 _public_6f7f7b8
#define public_6f7f7c2 _public_6f7f7c2

PROC_DECLARE(0x6f7f760, internal_6f7f760, public_6f7f760);
extern "C" NAKED register_t __cdecl internal_6f7f760()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov dl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], dl
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        push esi
        push edi
        jne public_6f7f786
        xor eax, eax
        jmp public_6f7f78e
        public_6f7f786 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub eax, ecx
        sar eax, 2
        public_6f7f78e : nop
        test eax, eax
        jge public_6f7f794
        xor eax, eax
        public_6f7f794 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        cmp eax, edx
        je public_6f7f7c2
        nop 
        public_6f7f7b0 : nop
        test ecx, ecx
        je public_6f7f7b8
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f7f7b8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f7f7b0
        public_6f7f7c2 : nop
        mov dword ptr ss : [ebp+0x10], ecx
        mov dword ptr ss : [ebp+0x14], ecx
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x30]
        pop edi
        mov dword ptr ss : [ebp+0x30], ecx
        mov dl, byte ptr ds : [ebx+0x34]
        pop esi
        mov byte ptr ss : [ebp+0x34], dl
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f7f760)
    }
}

#undef public_6f7f786
#undef public_6f7f78e
#undef public_6f7f794
#undef public_6f7f7b0
#undef public_6f7f7b8
#undef public_6f7f7c2
