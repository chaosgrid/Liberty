#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bb30);

PROC_DECLARE(0x6f4bb30, internal_6f4bb30, public_6f4bb30);
extern "C" NAKED register_t __cdecl internal_6f4bb30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        sar ecx, 4
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        sub edx, ecx
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x14], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4bb30)
    }
}
