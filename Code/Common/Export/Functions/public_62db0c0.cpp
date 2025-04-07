#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db0c0);

PROC_DECLARE(0x62db0c0, internal_62db0c0, public_62db0c0);
extern "C" NAKED register_t __cdecl internal_62db0c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xD
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e164
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [eax+0x18], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], 0x43480000
        mov dword ptr ds : [eax+0x24], 0x43FA0000
        mov dword ptr ds : [eax+0x28], ecx
        ret 
        UNREACHABLE_TRAP(0x62db0c0)
    }
}
