#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec40);

#define public_6f4ec52 _public_6f4ec52

PROC_DECLARE(0x6f4ec40, internal_6f4ec40, public_6f4ec40);
extern "C" NAKED register_t __cdecl internal_6f4ec40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6f4ec52
        mov dword ptr ds : [eax+4], 1
        public_6f4ec52 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4ec40)
    }
}

#undef public_6f4ec52
