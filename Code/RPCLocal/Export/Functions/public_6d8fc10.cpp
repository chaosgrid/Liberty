#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8fc36 _public_6d8fc36
#define public_6d8fc4c _public_6d8fc4c
#define public_6d8fc52 _public_6d8fc52

PROC_DECLARE(0x6d8fc10, internal_6d8fc10, public_6d8fc10);
extern "C" NAKED register_t __cdecl internal_6d8fc10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        mov ebx, ecx
        je public_6d8fc52
        push esi
        mov esi, dword ptr ds : [ebx+0x40]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d8fc36
        mov edi, eax
        public_6d8fc36 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6d8fc4c
        mov dword ptr ds : [eax], ebp
        public_6d8fc4c : nop
        inc dword ptr ds : [ebx+0x44]
        inc dword ptr ds : [ebx+0x38]
        public_6d8fc52 : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d8fc10)
    }
}

#undef public_6d8fc36
#undef public_6d8fc4c
#undef public_6d8fc52
