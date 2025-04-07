#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e2d);

PROC_DECLARE(0x6d41e2d, internal_6d41e2d, public_6d41e2d);
extern "C" NAKED register_t __cdecl internal_6d41e2d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x48], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x44], ecx
        ret 
        UNREACHABLE_TRAP(0x6d41e2d)
    }
}
