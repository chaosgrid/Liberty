#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebc00);

PROC_DECLARE(0x6bebc00, internal_6bebc00, public_6bebc00);
extern "C" NAKED register_t __cdecl internal_6bebc00()
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
        mov word ptr ds : [eax+0x24], cx
        mov word ptr ds : [eax+0x26], cx
        mov dword ptr ds : [eax], offset public_6c0dbe0
        mov dword ptr ds : [eax+0xC], 0x30040
        ret 
        UNREACHABLE_TRAP(0x6bebc00)
    }
}
