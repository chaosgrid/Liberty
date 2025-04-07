#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f1c0);

#define public_6d0f1d2 _public_6d0f1d2
#define public_6d0f1e3 _public_6d0f1e3

PROC_DECLARE(0x6d0f1c0, internal_6d0f1c0, public_6d0f1c0);
extern "C" NAKED register_t __cdecl internal_6d0f1c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0f1e3
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d0f1d2 : nop
        push ebx
        lea ecx, ds:[esi+8]
        call public_6cf70c0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d0f1d2
        pop ebx
        public_6d0f1e3 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0f1c0)
    }
}

#undef public_6d0f1d2
#undef public_6d0f1e3
