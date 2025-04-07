#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb0830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb0842 _public_6eb0842
#define public_6eb0861 _public_6eb0861

PROC_DECLARE(0x6eb0830, internal_6eb0830, public_6eb0830);
extern "C" NAKED register_t __cdecl internal_6eb0830()
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
        je public_6eb0861
        public_6eb0842 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eb0830
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eb0842
        public_6eb0861 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb0830)
    }
}

#undef public_6eb0842
#undef public_6eb0861
