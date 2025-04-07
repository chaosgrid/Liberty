#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6278242 _public_6278242
#define public_6278269 _public_6278269

PROC_DECLARE(0x6278230, internal_6278230, public_6278230);
extern "C" NAKED register_t __cdecl internal_6278230()
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
        je public_6278269
        public_6278242 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6278230
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6279d90
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6278242
        public_6278269 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6278230)
    }
}

#undef public_6278242
#undef public_6278269
