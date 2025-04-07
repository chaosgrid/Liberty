#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404fe0);
CLANG_FORWARD_PROC_SYMBOL(public_405d00);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_404ff2 _public_404ff2
#define public_405019 _public_405019

PROC_DECLARE(0x404fe0, internal_404fe0, public_404fe0);
extern "C" NAKED register_t __cdecl internal_404fe0()
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
        je public_405019
        public_404ff2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_404fe0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_405d00
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_404ff2
        public_405019 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x404fe0)
    }
}

#undef public_404ff2
#undef public_405019
