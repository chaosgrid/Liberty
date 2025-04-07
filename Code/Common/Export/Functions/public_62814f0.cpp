#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62814f0);
CLANG_FORWARD_PROC_SYMBOL(public_6344260);

#define public_628150f _public_628150f

PROC_DECLARE(0x62814f0, internal_62814f0, public_62814f0);
extern "C" NAKED register_t __cdecl internal_62814f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_639b864
        mov ecx, dword ptr ds : [ecx+0x54]
        test ecx, ecx
        je public_628150f
        mov ecx, dword ptr ds : [ecx+0x1C]
        test ecx, ecx
        je public_628150f
        push eax
        call public_6344260
        public_628150f : nop
        ret 
        UNREACHABLE_TRAP(0x62814f0)
    }
}

#undef public_628150f
