#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c690);

#define public_627c7d2 _public_627c7d2
#define public_627c7dd _public_627c7dd
#define public_627c80b _public_627c80b
#define public_627c816 _public_627c816

PROC_DECLARE(0x627c7a0, internal_627c7a0, public_627c7a0);
extern "C" NAKED register_t __cdecl internal_627c7a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        jne public_627c7dd
        call public_627c690
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_627c7d2
        mov dword ptr ds : [ecx+4], eax
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 8
        public_627c7d2 : nop
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 8
        public_627c7dd : nop
        cmp dword ptr ds : [esi+8], edi
        jne public_627c816
        call public_627c690
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_627c80b
        mov dword ptr ds : [ecx], eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 8
        public_627c80b : nop
        pop edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 8
        public_627c816 : nop
        call public_627c690
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], edi
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [ecx+4], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x627c7a0)
    }
}

#undef public_627c7d2
#undef public_627c7dd
#undef public_627c80b
#undef public_627c816
