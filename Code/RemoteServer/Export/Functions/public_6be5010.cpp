#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5010);

PROC_DECLARE(0x6be5010, internal_6be5010, public_6be5010);
extern "C" NAKED register_t __cdecl internal_6be5010()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov word ptr ds : [eax+0x28], cx
        mov word ptr ds : [eax+0x2A], cx
        mov dword ptr ds : [eax], offset public_6c0c918
        mov dword ptr ds : [eax+0xC], 0x20038
        ret 
        UNREACHABLE_TRAP(0x6be5010)
    }
}
