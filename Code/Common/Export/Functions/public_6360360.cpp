#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360360);

PROC_DECLARE(0x6360360, internal_6360360, public_6360360);
extern "C" NAKED register_t __cdecl internal_6360360()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov edx, 0x3F000000
        mov ecx, 0x3DCCCCCD
        mov dword ptr ds : [eax], offset public_63a5738
        mov dword ptr ds : [eax+0x20], 0x3F800000
        mov dword ptr ds : [eax+0x24], 0x40A00000
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x2C], 0x41700000
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], 0x3F666666
        mov dword ptr ds : [eax+0x14], 0x3F4CCCCD
        mov dword ptr ds : [eax+0x18], 0x41200000
        mov dword ptr ds : [eax+0x1C], ecx
        ret 8
        UNREACHABLE_TRAP(0x6360360)
    }
}
