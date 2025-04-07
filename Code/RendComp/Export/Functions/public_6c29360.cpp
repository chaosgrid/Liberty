#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29360);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c29398 _public_6c29398

PROC_DECLARE(0x6c29360, internal_6c29360, public_6c29360);
extern "C" NAKED register_t __cdecl internal_6c29360()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        je public_6c29398
        push eax
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_6c34ea0
        add esp, 8
        mov dword ptr ds : [esi+0x14], 0
        public_6c29398 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c29360)
    }
}

#undef public_6c29398
