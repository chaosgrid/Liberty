#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006820);
CLANG_FORWARD_PROC_SYMBOL(public_10006870);
CLANG_FORWARD_PROC_SYMBOL(public_10006890);
CLANG_FORWARD_PROC_SYMBOL(public_100068b0);
CLANG_FORWARD_PROC_SYMBOL(public_100068c0);
CLANG_FORWARD_PROC_SYMBOL(public_10006900);
CLANG_FORWARD_PROC_SYMBOL(public_10006910);
CLANG_FORWARD_PROC_SYMBOL(public_10006920);

PROC_DECLARE(0x10006920, internal_10006920, public_10006920);
extern "C" NAKED register_t __cdecl internal_10006920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset _public_10006820
        mov dword ptr ds : [eax+4], offset _public_10006870
        mov dword ptr ds : [eax+8], offset _public_10006890
        mov dword ptr ds : [eax+0xC], offset _public_100068b0
        mov dword ptr ds : [eax+0x10], offset _public_100068c0
        mov dword ptr ds : [eax+0x14], offset _public_10006900
        mov dword ptr ds : [eax+0x18], offset _public_10006910
        mov dword ptr ds : [eax+0x1C], 0
        ret 
        UNREACHABLE_TRAP(0x10006920)
    }
}
