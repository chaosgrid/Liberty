#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced330);

#define public_6ced346 _public_6ced346

PROC_DECLARE(0x6ced330, internal_6ced330, public_6ced330);
extern "C" NAKED register_t __cdecl internal_6ced330()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        mov dword ptr ds : [eax], offset public_6d65744
        je public_6ced346
        push eax
        call dword ptr ds : [public_6d64330]
        public_6ced346 : nop
        ret 
        UNREACHABLE_TRAP(0x6ced330)
    }
}

#undef public_6ced346
