#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaab0);

PROC_DECLARE(0x6beaab0, internal_6beaab0, public_6beaab0);
extern "C" NAKED register_t __cdecl internal_6beaab0()
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
        mov dword ptr ds : [eax+0x28], ecx
        mov word ptr ds : [eax+0x2C], cx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax], offset public_6c0d930
        mov dword ptr ds : [eax+0xC], 0x3000C
        ret 
        UNREACHABLE_TRAP(0x6beaab0)
    }
}
