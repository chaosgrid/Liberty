#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42738);

#define public_6d4275e _public_6d4275e

PROC_DECLARE(0x6d42738, internal_6d42738, public_6d42738);
extern "C" NAKED register_t __cdecl internal_6d42738()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d4275e
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d4275e
        test byte ptr ds : [eax+8], 1
        je public_6d4275e
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6d4275e
        fld dword ptr ds : [eax+0x28]
        xor eax, eax
        fstp qword ptr ds : [ecx]
        inc eax
        ret 
        public_6d4275e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d42738)
    }
}

#undef public_6d4275e
