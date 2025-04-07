#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628d570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d59a _public_628d59a
#define public_628d5a0 _public_628d5a0
#define public_628d5c0 _public_628d5c0
#define public_628d5d8 _public_628d5d8
#define public_628d5e4 _public_628d5e4

PROC_DECLARE(0x628d570, internal_628d570, public_628d570);
extern "C" NAKED register_t __cdecl internal_628d570()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_628d59a
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_628d59a : nop
        test eax, eax
        jge public_628d5a0
        xor eax, eax
        public_628d5a0 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_628d5e4
        push ebx
        push ebp
        public_628d5c0 : nop
        test ecx, ecx
        je public_628d5d8
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], esi
        public_628d5d8 : nop
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_628d5c0
        pop ebp
        pop ebx
        public_628d5e4 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628d570)
    }
}

#undef public_628d59a
#undef public_628d5a0
#undef public_628d5c0
#undef public_628d5d8
#undef public_628d5e4
