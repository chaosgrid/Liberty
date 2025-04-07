#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da1de2 _public_6da1de2
#define public_6da1e01 _public_6da1e01

PROC_DECLARE(0x6da1dd0, internal_6da1dd0, public_6da1dd0);
extern "C" NAKED register_t __cdecl internal_6da1dd0()
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
        je public_6da1e01
        public_6da1de2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6da1dd0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6db1dc2
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6da1de2
        public_6da1e01 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6da1dd0)
    }
}

#undef public_6da1de2
#undef public_6da1e01
