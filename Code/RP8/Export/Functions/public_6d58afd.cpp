#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58afd);

PROC_DECLARE(0x6d58afd, internal_6d58afd, public_6d58afd);
extern "C" NAKED register_t __cdecl internal_6d58afd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax+0x50]
        movsx eax, word ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x10]
        movsx ecx, word ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x14]
        imul eax, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0x11C]
        mov edx, dword ptr ds : [edx]
        add eax, 4
        sar eax, 3
        and eax, 0x3FF
        mov al, byte ptr ds : [eax+ecx+0x80]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx+edx], al
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d58afd)
    }
}
