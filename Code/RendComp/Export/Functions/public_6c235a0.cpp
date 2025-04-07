#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c27910);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c235b7 _public_6c235b7
#define public_6c235c7 _public_6c235c7
#define public_6c235d8 _public_6c235d8
#define public_6c235e7 _public_6c235e7
#define public_6c2363e _public_6c2363e

PROC_DECLARE(0x6c235a0, internal_6c235a0, public_6c235a0);
extern "C" NAKED register_t __cdecl internal_6c235a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c235b7
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c235b7 : nop
        cmp dword ptr ds : [esi+0x218], 2
        je public_6c235c7
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c235c7 : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        test eax, eax
        je public_6c235d8
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c235d8 : nop
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        je public_6c235e7
        dec eax
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c235e7 : nop
        push edi
        mov ecx, esi
        call public_6c26610
        mov ecx, dword ptr ds : [esi+0x1E8]
        mov ecx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0
        call public_6c27910
        mov edx, dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+0x1C], edi
        je public_6c2363e
        mov eax, dword ptr ds : [eax+0x18]
        push eax
        call public_6c34ea0
        lea ecx, ds:[edi+edi]
        push ecx
        call public_6c34eac
        mov edx, dword ptr ds : [esi+0x1E8]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x18], eax
        mov edx, dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ds : [edx]
        add esp, 8
        mov dword ptr ds : [eax+0x1C], edi
        public_6c2363e : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c235a0)
    }
}

#undef public_6c235b7
#undef public_6c235c7
#undef public_6c235d8
#undef public_6c235e7
#undef public_6c2363e
