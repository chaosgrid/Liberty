#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287a00);

PROC_DECLARE(0x6287a00, internal_6287a00, public_6287a00);
extern "C" NAKED register_t __cdecl internal_6287a00()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639b62c
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax], offset public_639b60c
        mov dword ptr ds : [eax+0xC], edx
        mov dl, byte ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], offset public_639be28
        mov byte ptr ds : [eax+0x10], dl
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_639bfdc
        ret 4
        UNREACHABLE_TRAP(0x6287a00)
    }
}
