#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349430);

#define public_6349443 _public_6349443
#define public_6349449 _public_6349449
#define public_6349450 _public_6349450

PROC_DECLARE(0x6349430, internal_6349430, public_6349430);
extern "C" NAKED register_t __cdecl internal_6349430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        mov eax, dword ptr ds : [eax+8]
        je public_6349443
        mov dword ptr ds : [ecx+8], eax
        jmp public_6349449
        public_6349443 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        public_6349449 : nop
        test eax, eax
        je public_6349450
        mov dword ptr ds : [eax+4], ecx
        public_6349450 : nop
        ret 8
        UNREACHABLE_TRAP(0x6349430)
    }
}

#undef public_6349443
#undef public_6349449
#undef public_6349450
