#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff910);

#define public_62b6d67 _public_62b6d67

PROC_DECLARE(0x62b6d50, internal_62b6d50, public_62b6d50);
extern "C" NAKED register_t __cdecl internal_62b6d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        xor esi, esi
        call public_62ff910
        test eax, eax
        je public_62b6d67
        mov eax, dword ptr ds : [eax]
        pop esi
        ret 4
        public_62b6d67 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b6d50)
    }
}

#undef public_62b6d67
