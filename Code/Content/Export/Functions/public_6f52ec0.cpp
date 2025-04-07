#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);

#define public_6f52ed4 _public_6f52ed4
#define public_6f52edf _public_6f52edf
#define public_6f52ee1 _public_6f52ee1
#define public_6f52f00 _public_6f52f00
#define public_6f52f1a _public_6f52f1a
#define public_6f52f1c _public_6f52f1c
#define public_6f52f2b _public_6f52f2b

PROC_DECLARE(0x6f52ec0, internal_6f52ec0, public_6f52ec0);
extern "C" NAKED register_t __cdecl internal_6f52ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_6f52edf
        mov edx, dword ptr ds : [edi]
        public_6f52ed4 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f52ee1
        add eax, 8
        cmp eax, ecx
        jne public_6f52ed4
        public_6f52edf : nop
        mov eax, ecx
        public_6f52ee1 : nop
        cmp eax, ecx
        jne public_6f52f2b
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f96770
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f52f1c
        mov ecx, dword ptr ds : [edi]
        lea esp, ss:[esp]
        public_6f52f00 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f52f1a
        add eax, 8
        cmp eax, esi
        jne public_6f52f00
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_6f52f1a : nop
        mov esi, eax
        public_6f52f1c : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_6f52f2b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov byte ptr ds : [ecx+4], 0
        mov eax, ecx
        ret 8
        UNREACHABLE_TRAP(0x6f52ec0)
    }
}

#undef public_6f52ed4
#undef public_6f52edf
#undef public_6f52ee1
#undef public_6f52f00
#undef public_6f52f1a
#undef public_6f52f1c
#undef public_6f52f2b
