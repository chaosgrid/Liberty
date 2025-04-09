#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bfd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43bfe2 _public_43bfe2
#define public_43c001 _public_43c001

PROC_DECLARE(0x43bfd0, internal_43bfd0, public_43bfd0);
extern "C" NAKED register_t __cdecl internal_43bfd0()
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
        je public_43c001
        public_43bfe2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_43bfd0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_43bfe2
        public_43c001 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x43bfd0)
    }
}

#undef public_43bfe2
#undef public_43c001
