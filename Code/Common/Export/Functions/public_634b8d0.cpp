#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b8d0);

#define public_634b8e0 _public_634b8e0
#define public_634b8ed _public_634b8ed

PROC_DECLARE(0x634b8d0, internal_634b8d0, public_634b8d0);
extern "C" NAKED register_t __cdecl internal_634b8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_634b8e0
        mov dword ptr ds : [eax+4], edx
        public_634b8e0 : nop
        test edx, edx
        je public_634b8ed
        mov dword ptr ds : [edx], eax
        dec word ptr ds : [ecx+0x3E]
        ret 4
        public_634b8ed : nop
        dec word ptr ds : [ecx+0x3E]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x634b8d0)
    }
}

#undef public_634b8e0
#undef public_634b8ed
