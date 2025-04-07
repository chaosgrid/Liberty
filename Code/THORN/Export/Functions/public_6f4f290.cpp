#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f290);

#define public_6f4f2ab _public_6f4f2ab

PROC_DECLARE(0x6f4f290, internal_6f4f290, public_6f4f290);
extern "C" NAKED register_t __cdecl internal_6f4f290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4f270
        mov ecx, dword ptr ds : [eax+4]
        add esp, 4
        test ecx, ecx
        jne public_6f4f2ab
        mov dword ptr ds : [eax+4], 2
        public_6f4f2ab : nop
        ret 
        UNREACHABLE_TRAP(0x6f4f290)
    }
}

#undef public_6f4f2ab
