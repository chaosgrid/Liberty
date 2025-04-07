#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_63408b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63408c2 _public_63408c2
#define public_63408e9 _public_63408e9

PROC_DECLARE(0x63408b0, internal_63408b0, public_63408b0);
extern "C" NAKED register_t __cdecl internal_63408b0()
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
        je public_63408e9
        public_63408c2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_63408b0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_633bcb0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_63408c2
        public_63408e9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63408b0)
    }
}

#undef public_63408c2
#undef public_63408e9
