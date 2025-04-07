#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_630c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630c7f2 _public_630c7f2
#define public_630c819 _public_630c819

PROC_DECLARE(0x630c7e0, internal_630c7e0, public_630c7e0);
extern "C" NAKED register_t __cdecl internal_630c7e0()
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
        je public_630c819
        public_630c7f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_630c7e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_630bfe0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_630c7f2
        public_630c819 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x630c7e0)
    }
}

#undef public_630c7f2
#undef public_630c819
