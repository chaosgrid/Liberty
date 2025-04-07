#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c21ef2 _public_6c21ef2
#define public_6c21f11 _public_6c21f11

PROC_DECLARE(0x6c21ee0, internal_6c21ee0, public_6c21ee0);
extern "C" NAKED register_t __cdecl internal_6c21ee0()
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
        je public_6c21f11
        public_6c21ef2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6c21ee0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6c34ea0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6c21ef2
        public_6c21f11 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c21ee0)
    }
}

#undef public_6c21ef2
#undef public_6c21f11
