#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6da31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da31e2 _public_6da31e2
#define public_6da3209 _public_6da3209

PROC_DECLARE(0x6da31d0, internal_6da31d0, public_6da31d0);
extern "C" NAKED register_t __cdecl internal_6da31d0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6da3209
        public_6da31e2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6da31d0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6da2b10
        push edi
        call public_6db1dc2
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6da31e2
        public_6da3209 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6da31d0)
    }
}

#undef public_6da31e2
#undef public_6da3209
