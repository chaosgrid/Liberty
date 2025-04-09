#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bf90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43bfa2 _public_43bfa2
#define public_43bfc1 _public_43bfc1

PROC_DECLARE(0x43bf90, internal_43bf90, public_43bf90);
extern "C" NAKED register_t __cdecl internal_43bf90()
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
        je public_43bfc1
        public_43bfa2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_43bf90
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_43bfa2
        public_43bfc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x43bf90)
    }
}

#undef public_43bfa2
#undef public_43bfc1
