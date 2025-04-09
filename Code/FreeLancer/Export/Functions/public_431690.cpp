#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431690);

PROC_DECLARE(0x431690, internal_431690, public_431690);
extern "C" NAKED register_t __cdecl internal_431690()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], dl
        mov dl, byte ptr ds : [ecx+0x11]
        mov byte ptr ds : [eax+0x11], dl
        mov cx, word ptr ds : [ecx+0x12]
        mov word ptr ds : [eax+0x12], cx
        ret 4
        UNREACHABLE_TRAP(0x431690)
    }
}
