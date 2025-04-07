#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62878f0);

PROC_DECLARE(0x62878f0, internal_62878f0, public_62878f0);
extern "C" NAKED register_t __cdecl internal_62878f0()
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
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax], offset public_639b60c
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], dl
        mov dword ptr ds : [eax], offset public_639be28
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [eax+0x18], dl
        add ecx, 0x1C
        push esi
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x1C]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [eax], offset public_639bfac
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62878f0)
    }
}
