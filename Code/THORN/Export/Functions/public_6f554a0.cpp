#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f554a0);

PROC_DECLARE(0x6f554a0, internal_6f554a0, public_6f554a0);
extern "C" NAKED register_t __cdecl internal_6f554a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+4]
        add edx, ecx
        mov dword ptr ds : [eax+0x28], edx
        ret 
        UNREACHABLE_TRAP(0x6f554a0)
    }
}
