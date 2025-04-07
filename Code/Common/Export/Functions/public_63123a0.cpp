#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311a90);
CLANG_FORWARD_PROC_SYMBOL(public_63123a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63123b2 _public_63123b2
#define public_63123d9 _public_63123d9

PROC_DECLARE(0x63123a0, internal_63123a0, public_63123a0);
extern "C" NAKED register_t __cdecl internal_63123a0()
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
        je public_63123d9
        public_63123b2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_63123a0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6311a90
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_63123b2
        public_63123d9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63123a0)
    }
}

#undef public_63123b2
#undef public_63123d9
