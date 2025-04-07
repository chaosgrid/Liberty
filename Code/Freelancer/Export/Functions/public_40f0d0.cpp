#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40f0e2 _public_40f0e2
#define public_40f101 _public_40f101

PROC_DECLARE(0x40f0d0, internal_40f0d0, public_40f0d0);
extern "C" NAKED register_t __cdecl internal_40f0d0()
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
        je public_40f101
        public_40f0e2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_40f0d0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_40f0e2
        public_40f101 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40f0d0)
    }
}

#undef public_40f0e2
#undef public_40f101
