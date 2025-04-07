#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378b00);
CLANG_FORWARD_PROC_SYMBOL(public_6378c10);

#define public_6378b1e _public_6378b1e
#define public_6378b35 _public_6378b35

PROC_DECLARE(0x6378b00, internal_6378b00, public_6378b00);
extern "C" NAKED register_t __cdecl internal_6378b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6378c10
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        je public_6378b1e
        fstp st(0)
        xor eax, eax
        ret 4
        public_6378b1e : nop
        fcomp dword ptr ds : [public_658b9c8]
        fnstsw ax
        test ah, 0x41
        mov eax, 2
        jne public_6378b35
        mov eax, 1
        public_6378b35 : nop
        ret 4
        UNREACHABLE_TRAP(0x6378b00)
    }
}

#undef public_6378b1e
#undef public_6378b35
