#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391eda);
CLANG_FORWARD_PROC_SYMBOL(public_6391eeb);

PROC_DECLARE(0x6391eda, internal_6391eda, public_6391eda);
extern "C" NAKED register_t __cdecl internal_6391eda()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6391eeb
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6391eda)
    }
}
