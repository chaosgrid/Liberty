#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661caa0);

PROC_DECLARE(0x661caa0, internal_661caa0, public_661caa0);
extern "C" NAKED register_t __cdecl internal_661caa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x20], ecx
        ret 0x24
        UNREACHABLE_TRAP(0x661caa0)
    }
}
