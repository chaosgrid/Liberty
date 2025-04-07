#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2df00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2e011 _public_6c2e011

PROC_DECLARE(0x6c2dff0, internal_6c2dff0, public_6c2dff0);
extern "C" NAKED register_t __cdecl internal_6c2dff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0x2C], ecx
        jg public_6c2e011
        mov ecx, esi
        call public_6c2df00
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c2e011 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2dff0)
    }
}

#undef public_6c2e011
