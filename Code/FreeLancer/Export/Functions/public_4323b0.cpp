#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4323b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4323c2 _public_4323c2
#define public_4323e1 _public_4323e1

PROC_DECLARE(0x4323b0, internal_4323b0, public_4323b0);
extern "C" NAKED register_t __cdecl internal_4323b0()
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
        je public_4323e1
        public_4323c2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4323b0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4323c2
        public_4323e1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4323b0)
    }
}

#undef public_4323c2
#undef public_4323e1
