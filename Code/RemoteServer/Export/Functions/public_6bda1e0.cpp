#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda1e0, internal_6bda1e0, public_6bda1e0);
extern "C" NAKED register_t __cdecl internal_6bda1e0()
{
    __asm
    {
        fld dword ptr ss : [esp+0x10]
        mov eax, ecx
        fmul dword ptr ds : [public_6c0baac]
        fld st(0)
        fsin 
        fdivr dword ptr ds : [public_6c0baa8]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0xC]
        fcos 
        fstp dword ptr ds : [eax]
        ret 0x10
        UNREACHABLE_TRAP(0x6bda1e0)
    }
}
