#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec5d0);

PROC_DECLARE(0x62ec5d0, internal_62ec5d0, public_62ec5d0);
extern "C" NAKED register_t __cdecl internal_62ec5d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0xBD], al
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0xA8], edx
        mov dl, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xAC], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+0xC2], dl
        mov dword ptr ds : [ecx+0xB8], eax
        ret 0x14
        UNREACHABLE_TRAP(0x62ec5d0)
    }
}
