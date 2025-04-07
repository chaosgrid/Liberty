#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63493e0);

#define public_63493f4 _public_63493f4

PROC_DECLARE(0x63493e0, internal_63493e0, public_63493e0);
extern "C" NAKED register_t __cdecl internal_63493e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        je public_63493f4
        mov dword ptr ds : [ecx+4], eax
        public_63493f4 : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [edx], eax
        ret 8
        UNREACHABLE_TRAP(0x63493e0)
    }
}

#undef public_63493f4
