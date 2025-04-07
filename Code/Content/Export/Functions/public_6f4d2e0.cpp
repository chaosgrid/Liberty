#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d2e0);

PROC_DECLARE(0x6f4d2e0, internal_6f4d2e0, public_6f4d2e0);
extern "C" NAKED register_t __cdecl internal_6f4d2e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_6fb4338
        mov dword ptr ds : [eax+8], 1
        mov dword ptr ds : [eax+4], offset public_6fb43f8
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x2C], cl
        mov byte ptr ds : [eax+0x2D], cl
        mov byte ptr ds : [eax+0x2E], cl
        mov byte ptr ds : [eax+0x2F], cl
        mov byte ptr ds : [eax+0x30], cl
        mov byte ptr ds : [eax+0x31], cl
        mov byte ptr ds : [eax+0x32], cl
        mov byte ptr ds : [eax+0x33], cl
        mov byte ptr ds : [eax+0x34], cl
        mov byte ptr ds : [eax+0x35], cl
        mov byte ptr ds : [eax+0x36], cl
        mov byte ptr ds : [eax+0x37], cl
        mov byte ptr ds : [eax+0x38], cl
        mov byte ptr ds : [eax+0x39], cl
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov edx, dword ptr ds : [public_6fbb238]
        mov dword ptr ds : [eax+0x48], edx
        mov edx, dword ptr ds : [public_6fbb224]
        mov dword ptr ds : [eax+0x4C], edx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax], offset public_6fbb388
        mov dword ptr ds : [eax+4], offset public_6fbb37c
        ret 
        UNREACHABLE_TRAP(0x6f4d2e0)
    }
}
