#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c41c0);

PROC_DECLARE(0x65c41c0, internal_65c41c0, public_65c41c0);
extern "C" NAKED register_t __cdecl internal_65c41c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_65c74b8
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x65c41c0)
    }
}
