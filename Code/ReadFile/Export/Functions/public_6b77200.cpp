#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77200);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b7721f _public_6b7721f
#define public_6b7722e _public_6b7722e
#define public_6b77234 _public_6b77234
#define public_6b77244 _public_6b77244

PROC_DECLARE(0x6b77200, internal_6b77200, public_6b77200);
extern "C" NAKED register_t __cdecl internal_6b77200()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr ds : [esi+8], edi
        je public_6b7722e
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_6b7721f
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        public_6b7721f : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_6b79014]
        mov dword ptr ds : [esi+8], edi
        jmp public_6b77234
        public_6b7722e : nop
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        public_6b77234 : nop
        test byte ptr ss : [esp+0xC], 1
        je public_6b77244
        push esi
        call public_6b782a0
        add esp, 4
        public_6b77244 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b77200)
    }
}

#undef public_6b7721f
#undef public_6b7722e
#undef public_6b77234
#undef public_6b77244
