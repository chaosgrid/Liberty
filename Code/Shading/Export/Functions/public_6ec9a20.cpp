#include "Shading-PCH.h"


#define public_6ec9a3a _public_6ec9a3a

PROC_DECLARE(0x6ec9a20, internal_6ec9a20, public_6ec9a20);
extern "C" NAKED register_t __cdecl internal_6ec9a20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x74]
        test eax, eax
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        je public_6ec9a3a
        mov eax, dword ptr ds : [ecx+0x74]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec9a3a : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ec9a20)
    }
}

#undef public_6ec9a3a
