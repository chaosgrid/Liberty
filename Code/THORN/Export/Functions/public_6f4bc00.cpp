#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bc00);

PROC_DECLARE(0x6f4bc00, internal_6f4bc00, public_6f4bc00);
extern "C" NAKED register_t __cdecl internal_6f4bc00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [public_6f61e28], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4bc00)
    }
}
