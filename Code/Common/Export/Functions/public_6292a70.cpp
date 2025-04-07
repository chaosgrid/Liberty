#include "Common-PCH.h"

PROC_DECLARE(0x6292a70, internal_6292a70, public_6292a70);
extern "C" NAKED register_t __cdecl internal_6292a70()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dx, word ptr ds : [ecx+8]
        mov word ptr ds : [eax+8], dx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], dl
        mov dl, byte ptr ds : [ecx+0x11]
        mov byte ptr ds : [eax+0x11], dl
        mov dl, byte ptr ds : [ecx+0x12]
        mov byte ptr ds : [eax+0x12], dl
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax], offset public_639bdcc
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax], offset public_639c49c
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x28], edx
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x2C], edx
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [eax+0x30], edx
        mov edx, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [eax+0x34], edx
        mov dl, byte ptr ds : [ecx+0x38]
        mov byte ptr ds : [eax+0x38], dl
        mov edx, dword ptr ds : [ecx+0x3C]
        mov dword ptr ds : [eax+0x3C], edx
        add ecx, 0x40
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x40]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [eax], offset public_639c61c
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6292a70)
    }
}
