#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec610);

PROC_DECLARE(0x62ec610, internal_62ec610, public_62ec610);
extern "C" NAKED register_t __cdecl internal_62ec610()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0xAC]
        mov dword ptr ds : [eax+4], edx
        mov dl, byte ptr ds : [ecx+0xBD]
        mov byte ptr ds : [eax+8], dl
        mov dl, byte ptr ds : [ecx+0xC2]
        mov byte ptr ds : [eax+9], dl
        mov ecx, dword ptr ds : [ecx+0xB8]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x62ec610)
    }
}
