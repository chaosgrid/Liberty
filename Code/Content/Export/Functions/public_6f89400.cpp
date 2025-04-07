#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f89400);

PROC_DECLARE(0x6f89400, internal_6f89400, public_6f89400);
extern "C" NAKED register_t __cdecl internal_6f89400()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+8], 1
        mov dword ptr ds : [eax+4], offset public_6fb43f8
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x10], edx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov byte ptr ds : [eax+0x44], cl
        mov byte ptr ds : [eax+0x45], cl
        mov byte ptr ds : [eax+0x46], cl
        mov byte ptr ds : [eax+0x47], cl
        mov byte ptr ds : [eax+0x48], cl
        mov byte ptr ds : [eax+0x49], cl
        mov byte ptr ds : [eax+0x4A], cl
        mov byte ptr ds : [eax+0x4B], cl
        mov byte ptr ds : [eax+0x4C], cl
        mov byte ptr ds : [eax+0x4D], cl
        mov byte ptr ds : [eax+0x4E], cl
        mov byte ptr ds : [eax+0x4F], cl
        mov byte ptr ds : [eax+0x50], cl
        mov byte ptr ds : [eax+0x51], cl
        mov byte ptr ds : [eax+0x54], cl
        mov dl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov byte ptr ds : [eax+0x64], cl
        mov byte ptr ds : [eax+0x65], cl
        mov byte ptr ds : [eax+0x66], cl
        mov byte ptr ds : [eax+0x67], cl
        mov byte ptr ds : [eax+0x68], cl
        mov byte ptr ds : [eax+0x69], cl
        mov byte ptr ds : [eax+0x6A], cl
        mov byte ptr ds : [eax+0x6B], cl
        mov byte ptr ds : [eax+0x6C], cl
        mov byte ptr ds : [eax+0x6D], cl
        mov byte ptr ds : [eax+0x6E], cl
        mov byte ptr ds : [eax+0x6F], cl
        mov byte ptr ds : [eax+0x70], cl
        mov byte ptr ds : [eax+0x71], cl
        mov dword ptr ds : [eax+0x74], ecx
        mov byte ptr ds : [eax+0x78], dl
        mov dl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x58], offset public_6fbc700
        mov dword ptr ds : [eax+0x8C], ecx
        mov dword ptr ds : [eax+0x90], ecx
        mov byte ptr ds : [eax+0x94], cl
        mov byte ptr ds : [eax+0x95], cl
        mov byte ptr ds : [eax+0x96], cl
        mov byte ptr ds : [eax+0x97], cl
        mov byte ptr ds : [eax+0x98], cl
        mov byte ptr ds : [eax+0x99], cl
        mov byte ptr ds : [eax+0x9A], cl
        mov byte ptr ds : [eax+0x9B], cl
        mov byte ptr ds : [eax+0x9C], cl
        mov byte ptr ds : [eax+0x9D], cl
        mov byte ptr ds : [eax+0x9E], cl
        mov byte ptr ds : [eax+0x9F], cl
        mov byte ptr ds : [eax+0xA0], cl
        mov byte ptr ds : [eax+0xA1], cl
        mov dword ptr ds : [eax+0xA4], ecx
        mov byte ptr ds : [eax+0xA8], dl
        mov dword ptr ds : [eax+0xAC], ecx
        mov dword ptr ds : [eax+0xB0], ecx
        mov dword ptr ds : [eax+0xB4], ecx
        mov dword ptr ds : [eax+0x88], offset public_6fbc700
        mov dword ptr ds : [eax], offset public_6fbc908
        mov dword ptr ds : [eax+4], offset public_6fbc8fc
        ret 4
        UNREACHABLE_TRAP(0x6f89400)
    }
}
