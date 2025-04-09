#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452ed0, internal_452ed0, public_452ed0);
extern "C" NAKED register_t __cdecl internal_452ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dl, byte ptr ss : [esp+4]
        mov byte ptr ds : [eax+0x10], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dl, byte ptr ss : [esp+8]
        mov byte ptr ds : [eax+0x11], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x12], dl
        mov eax, dword ptr ds : [ecx+0x6C]
        mov cl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x14], cl
        ret 0x10
        UNREACHABLE_TRAP(0x452ed0)
    }
}
