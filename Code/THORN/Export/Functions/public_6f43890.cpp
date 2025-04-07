#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);

PROC_DECLARE(0x6f43890, internal_6f43890, public_6f43890);
extern "C" NAKED register_t __cdecl internal_6f43890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], edx
        ret 
        UNREACHABLE_TRAP(0x6f43890)
    }
}
