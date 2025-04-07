#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231470);

#define public_623148f _public_623148f

PROC_DECLARE(0x6231470, internal_6231470, public_6231470);
extern "C" NAKED register_t __cdecl internal_6231470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_623148f
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ecx+4], eax
        ret 4
        public_623148f : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6231470)
    }
}

#undef public_623148f
