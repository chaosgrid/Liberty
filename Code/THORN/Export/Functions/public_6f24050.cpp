#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24050);

PROC_DECLARE(0x6f24050, internal_6f24050, public_6f24050);
extern "C" NAKED register_t __cdecl internal_6f24050()
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
        mov dword ptr ds : [eax+0xC], edx
        ret 0x10
        UNREACHABLE_TRAP(0x6f24050)
    }
}
