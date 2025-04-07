#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91850);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d91864 _public_6d91864

PROC_DECLARE(0x6d91850, internal_6d91850, public_6d91850);
extern "C" NAKED register_t __cdecl internal_6d91850()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        push edi
        je public_6d91864
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d91864 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        push eax
        mov dword ptr ds : [esi+0x20], eax
        call dword ptr ds : [public_6db3204]
        add esp, 0x10
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d91850)
    }
}

#undef public_6d91864
