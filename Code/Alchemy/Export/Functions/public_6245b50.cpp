#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245b50);

#define public_6245b78 _public_6245b78
#define public_6245b88 _public_6245b88
#define public_6245ba2 _public_6245ba2

PROC_DECLARE(0x6245b50, internal_6245b50, public_6245b50);
extern "C" NAKED register_t __cdecl internal_6245b50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x98]
        cmp eax, edi
        je public_6245b88
        test eax, eax
        je public_6245b78
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], 0
        public_6245b78 : nop
        test edi, edi
        mov dword ptr ds : [esi+0x98], edi
        je public_6245b88
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6245b88 : nop
        mov byte ptr ds : [esi+0xB8], 1
        mov esi, dword ptr ds : [esi+0x98]
        test esi, esi
        je public_6245ba2
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC4]
        public_6245ba2 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6245b50)
    }
}

#undef public_6245b78
#undef public_6245b88
#undef public_6245ba2
