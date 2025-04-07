#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);

#define public_6ea7cfa _public_6ea7cfa

PROC_DECLARE(0x6ea7ce0, internal_6ea7ce0, public_6ea7ce0);
extern "C" NAKED register_t __cdecl internal_6ea7ce0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 0xFFFFFFFF
        lea esi, ds:[edi+4]
        je public_6ea7cfa
        push esi
        call dword ptr ds : [public_6fb3604]
        add esp, 4
        public_6ea7cfa : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6fb3608]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi], ebx
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ea7ce0)
    }
}

#undef public_6ea7cfa
