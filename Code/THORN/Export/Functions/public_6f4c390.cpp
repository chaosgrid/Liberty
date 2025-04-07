#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c390);

PROC_DECLARE(0x6f4c390, internal_6f4c390, public_6f4c390);
extern "C" NAKED register_t __cdecl internal_6f4c390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push ebx
        lea ecx, ds:[eax+0xC]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, ecx
        push edi
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        sub edx, esi
        sar edx, 4
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x14], 0
        mov eax, dword ptr ds : [public_6f61e28]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        add ecx, esi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6f61e28]
        add esp, 4
        add edx, 0xC
        mov dword ptr ds : [edx], edi
        pop edi
        mov dword ptr ds : [edx+4], ebx
        pop esi
        mov dword ptr ds : [edx+8], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4c390)
    }
}
