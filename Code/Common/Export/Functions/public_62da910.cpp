#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da910);

PROC_DECLARE(0x62da910, internal_62da910, public_62da910);
extern "C" NAKED register_t __cdecl internal_62da910()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x40800000
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0x3F800000
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], 0x3F800000
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        mov byte ptr ds : [eax+0x20], cl
        mov dword ptr ds : [eax+0x24], edx
        mov byte ptr ds : [eax+0x28], cl
        mov byte ptr ds : [eax+0x29], cl
        mov dword ptr ds : [eax+0x2C], edx
        mov byte ptr ds : [eax+0x30], cl
        mov byte ptr ds : [eax+0x31], cl
        mov dword ptr ds : [eax+0x34], edx
        mov byte ptr ds : [eax+0x38], cl
        mov byte ptr ds : [eax+0x39], cl
        mov dword ptr ds : [eax+0x3C], edx
        mov byte ptr ds : [eax+0x40], cl
        mov dword ptr ds : [eax+0x44], 5
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x48], 0x3F800000
        mov dword ptr ds : [eax+0x4C], ecx
        mov byte ptr ds : [eax+0x54], cl
        ret 
        UNREACHABLE_TRAP(0x62da910)
    }
}
