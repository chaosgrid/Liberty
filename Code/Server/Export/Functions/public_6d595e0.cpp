#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d595e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d595f2 _public_6d595f2
#define public_6d59619 _public_6d59619

PROC_DECLARE(0x6d595e0, internal_6d595e0, public_6d595e0);
extern "C" NAKED register_t __cdecl internal_6d595e0()
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
        je public_6d59619
        public_6d595f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6d595e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6d572e0
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d595f2
        public_6d59619 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d595e0)
    }
}

#undef public_6d595f2
#undef public_6d59619
