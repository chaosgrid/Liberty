#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2020);

PROC_DECLARE(0x62d2020, internal_62d2020, public_62d2020);
extern "C" NAKED register_t __cdecl internal_62d2020()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x29], cl
        mov cl, byte ptr ds : [eax+0x28]
        and cl, 0xFC
        mov dword ptr ds : [eax], offset public_63a02c4
        mov dword ptr ds : [eax+0xC], 2
        mov dword ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x28], cl
        ret 4
        UNREACHABLE_TRAP(0x62d2020)
    }
}
