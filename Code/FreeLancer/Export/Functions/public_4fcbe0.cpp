#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcbe0);

PROC_DECLARE(0x4fcbe0, internal_4fcbe0, public_4fcbe0);
extern "C" NAKED register_t __cdecl internal_4fcbe0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+8], 0x3F800000
        ret 
        UNREACHABLE_TRAP(0x4fcbe0)
    }
}
