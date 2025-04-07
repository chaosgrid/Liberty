#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca680);

PROC_DECLARE(0x6eca680, internal_6eca680, public_6eca680);
extern "C" NAKED register_t __cdecl internal_6eca680()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [eax], dl
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax+1], dl
        push ebx
        push esi
        xor edx, edx
        mov byte ptr ds : [eax+0xC], dl
        mov ecx, dword ptr ds : [public_6ed5804]
        push edi
        mov edi, dword ptr ds : [public_6ed5808]
        mov esi, dword ptr ds : [edi]
        add ecx, esi
        add esi, 0x20
        mov dword ptr ds : [edi], esi
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ds : [ecx+0x1D], dl
        mov bl, 1
        mov byte ptr ds : [ecx+0x1C], bl
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [ecx+0x1D], bl
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov ebx, dword ptr ds : [public_6ed5808]
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [public_6ed5804]
        mov edi, dword ptr ds : [eax+8]
        add ecx, esi
        add esi, 0x20
        mov dword ptr ds : [ebx], esi
        mov dword ptr ds : [ecx+4], edi
        mov byte ptr ds : [ecx+0x1C], dl
        mov byte ptr ds : [ecx+0x1D], dl
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ecx], ecx
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+8], ecx
        mov dword ptr ds : [eax+0x10], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eca680)
    }
}
