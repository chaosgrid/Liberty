#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562930);

PROC_DECLARE(0x562930, internal_562930, public_562930);
extern "C" NAKED register_t __cdecl internal_562930()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [eax+4], dl
        mov dl, byte ptr ds : [ecx+5]
        mov byte ptr ds : [eax+5], dl
        mov dl, byte ptr ds : [ecx+6]
        mov byte ptr ds : [eax+6], dl
        mov dl, byte ptr ds : [ecx+7]
        mov byte ptr ds : [eax+7], dl
        mov dl, byte ptr ds : [ecx+8]
        mov byte ptr ds : [eax+8], dl
        mov dl, byte ptr ds : [ecx+9]
        mov byte ptr ds : [eax+9], dl
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [eax+0x14], dl
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [eax+0x20], dl
        mov dl, byte ptr ds : [ecx+0x21]
        mov byte ptr ds : [eax+0x21], dl
        mov cl, byte ptr ds : [ecx+0x22]
        mov byte ptr ds : [eax+0x22], cl
        ret 4
        UNREACHABLE_TRAP(0x562930)
    }
}
