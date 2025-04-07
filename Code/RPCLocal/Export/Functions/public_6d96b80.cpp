#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96b80);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d96b92 _public_6d96b92
#define public_6d96bb1 _public_6d96bb1

PROC_DECLARE(0x6d96b80, internal_6d96b80, public_6d96b80);
extern "C" NAKED register_t __cdecl internal_6d96b80()
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
        je public_6d96bb1
        public_6d96b92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6d96b80
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6db1dc2
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d96b92
        public_6d96bb1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d96b80)
    }
}

#undef public_6d96b92
#undef public_6d96bb1
