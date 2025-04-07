#include "Common-PCH.h"

PROC_DECLARE(0x6296bc0, internal_6296bc0, public_6296bc0);
extern "C" NAKED register_t __cdecl internal_6296bc0()
{
    __asm
    {
        push esi
        push edi
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
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
        mov dword ptr ds : [eax], offset public_639bdcc
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax], offset public_639c49c
        mov dword ptr ds : [eax+0x24], edx
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
        lea edx, ds:[ecx+0x40]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x40]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [eax], offset public_639c61c
        mov edx, dword ptr ds : [ecx+0x4C]
        mov dword ptr ds : [eax+0x4C], edx
        mov edx, dword ptr ds : [ecx+0x50]
        lea esi, ds:[ecx+0x54]
        lea edi, ds:[eax+0x54]
        mov ecx, 0x68
        mov dword ptr ds : [eax+0x50], edx
        rep movsd
        pop edi
        mov dword ptr ds : [eax], offset public_639d074
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6296bc0)
    }
}
