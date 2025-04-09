#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5316a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5316b2 _public_5316b2
#define public_5316d1 _public_5316d1

PROC_DECLARE(0x5316a0, internal_5316a0, public_5316a0);
extern "C" NAKED register_t __cdecl internal_5316a0()
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
        je public_5316d1
        public_5316b2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_5316a0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_5316b2
        public_5316d1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5316a0)
    }
}

#undef public_5316b2
#undef public_5316d1
