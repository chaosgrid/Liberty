#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47aab);
CLANG_FORWARD_PROC_SYMBOL(public_6d47b14);
CLANG_FORWARD_PROC_SYMBOL(public_6d47ccc);
CLANG_FORWARD_PROC_SYMBOL(public_6d47d96);
CLANG_FORWARD_PROC_SYMBOL(public_6d47e79);
CLANG_FORWARD_PROC_SYMBOL(public_6d47f07);

PROC_DECLARE(0x6d47f07, internal_6d47f07, public_6d47f07);
extern "C" NAKED register_t __cdecl internal_6d47f07()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset _public_6d47aab
        mov dword ptr ds : [eax+4], offset public_6d47b49
        mov dword ptr ds : [eax+8], offset public_6d47c33
        mov dword ptr ds : [eax+0xC], offset _public_6d47d96
        mov dword ptr ds : [eax+0x10], offset _public_6d47e79
        mov dword ptr ds : [eax+0x14], offset _public_6d47b14
        mov dword ptr ds : [eax+0x18], offset public_6d47bd4
        mov dword ptr ds : [eax+0x1C], offset _public_6d47ccc
        ret 
        UNREACHABLE_TRAP(0x6d47f07)
    }
}
