#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becf00);

#define public_6becf16 _public_6becf16

PROC_DECLARE(0x6becf00, internal_6becf00, public_6becf00);
extern "C" NAKED register_t __cdecl internal_6becf00()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6becf16
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_6becf16 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6becf00)
    }
}

#undef public_6becf16
