#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_628e250);

#define public_627e7e4 _public_627e7e4
#define public_627e7ef _public_627e7ef
#define public_627e7f1 _public_627e7f1
#define public_627e810 _public_627e810
#define public_627e82a _public_627e82a
#define public_627e82c _public_627e82c
#define public_627e83b _public_627e83b

PROC_DECLARE(0x627e7d0, internal_627e7d0, public_627e7d0);
extern "C" NAKED register_t __cdecl internal_627e7d0()
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
        je public_627e7ef
        mov edx, dword ptr ds : [edi]
        public_627e7e4 : nop
        cmp dword ptr ds : [eax], edx
        je public_627e7f1
        add eax, 4
        cmp eax, ecx
        jne public_627e7e4
        public_627e7ef : nop
        mov eax, ecx
        public_627e7f1 : nop
        cmp eax, ecx
        jne public_627e83b
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_628e250
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_627e82c
        mov ecx, dword ptr ds : [edi]
        lea esp, ss:[esp]
        public_627e810 : nop
        cmp dword ptr ds : [eax], ecx
        je public_627e82a
        add eax, 4
        cmp eax, esi
        jne public_627e810
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_627e82a : nop
        mov esi, eax
        public_627e82c : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        mov byte ptr ds : [eax+4], 1
        ret 8
        public_627e83b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov byte ptr ds : [ecx+4], 0
        mov eax, ecx
        ret 8
        UNREACHABLE_TRAP(0x627e7d0)
    }
}

#undef public_627e7e4
#undef public_627e7ef
#undef public_627e7f1
#undef public_627e810
#undef public_627e82a
#undef public_627e82c
#undef public_627e83b
