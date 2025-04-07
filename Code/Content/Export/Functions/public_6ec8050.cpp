#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec8074 _public_6ec8074

PROC_DECLARE(0x6ec8050, internal_6ec8050, public_6ec8050);
extern "C" NAKED register_t __cdecl internal_6ec8050()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15b90
        test eax, 0x3FFFFFFF
        je public_6ec8074
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33c8]
        add esp, 8
        public_6ec8074 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec8050)
    }
}

#undef public_6ec8074
