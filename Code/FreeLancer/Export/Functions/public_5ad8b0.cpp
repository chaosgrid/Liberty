#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad8b0);

#define public_5ad8c5 _public_5ad8c5
#define public_5ad8dd _public_5ad8dd
#define public_5ad8e6 _public_5ad8e6
#define public_5ad8f7 _public_5ad8f7

PROC_DECLARE(0x5ad8b0, internal_5ad8b0, public_5ad8b0);
extern "C" NAKED register_t __cdecl internal_5ad8b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebx
        je public_5ad8dd
        public_5ad8c5 : nop
        push edi
        mov ecx, esi
        call public_5a9ea0
        add edi, 0x9C
        add esi, 0x9C
        cmp edi, ebx
        jne public_5ad8c5
        public_5ad8dd : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, esi
        je public_5ad8f7
        public_5ad8e6 : nop
        mov ecx, edi
        call public_5686b0
        add edi, 0x9C
        cmp edi, ebx
        jne public_5ad8e6
        public_5ad8f7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ss : [ebp+8], esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x5ad8b0)
    }
}

#undef public_5ad8c5
#undef public_5ad8dd
#undef public_5ad8e6
#undef public_5ad8f7
