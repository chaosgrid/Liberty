#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4320b0);

PROC_DECLARE(0x4320b0, internal_4320b0, public_4320b0);
extern "C" NAKED register_t __cdecl internal_4320b0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], offset public_5cad44
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x10], edx
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x14], dl
        mov dl, byte ptr ds : [ecx+0x11]
        mov byte ptr ds : [eax+0x15], dl
        mov cx, word ptr ds : [ecx+0x12]
        mov word ptr ds : [eax+0x16], cx
        mov dword ptr ds : [eax+4], offset public_5cabfc
        ret 8
        UNREACHABLE_TRAP(0x4320b0)
    }
}
