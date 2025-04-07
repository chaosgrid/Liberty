#include "Common-PCH.h"

PROC_DECLARE(0x6325a20, internal_6325a20, public_6325a20);
extern "C" NAKED register_t __cdecl internal_6325a20()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [eax+4], dl
        mov dl, byte ptr ds : [ecx+5]
        mov byte ptr ds : [eax+5], dl
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x6325a20)
    }
}
