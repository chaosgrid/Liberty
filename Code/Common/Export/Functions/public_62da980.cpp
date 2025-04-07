#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da980);

PROC_DECLARE(0x62da980, internal_62da980, public_62da980);
extern "C" NAKED register_t __cdecl internal_62da980()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 2
        push ebp
        mov dword ptr ds : [eax+0x124], 3
        mov dword ptr ds : [eax+0x128], ecx
        mov byte ptr ds : [eax+0x12C], 1
        mov byte ptr ds : [eax+0x12D], 1
        mov dword ptr ds : [eax+0xD0], 0x459C4000
        mov dword ptr ds : [eax+0xC], 0x461C4000
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov ebp, dword ptr ds : [public_63a05a8]
        mov dword ptr ds : [eax+0x130], ebp
        mov dword ptr ds : [eax+0x10], 0xB
        mov dword ptr ds : [eax+0x14], 0x459C4000
        mov dword ptr ds : [eax+0x18], 0xF
        mov dword ptr ds : [eax+0x1C], 0xC
        mov dword ptr ds : [eax+0xAC], 6
        mov dword ptr ds : [eax+0xB0], 7
        mov dword ptr ds : [eax+0xD4], 3
        mov byte ptr ds : [eax+0x12E], 1
        mov dword ptr ds : [eax+0xD8], ecx
        mov dword ptr ds : [eax+0xDC], edx
        mov dword ptr ds : [eax+0xE0], ecx
        mov byte ptr ds : [eax+0x134], cl
        mov byte ptr ds : [eax+0x135], cl
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x62da980)
    }
}
