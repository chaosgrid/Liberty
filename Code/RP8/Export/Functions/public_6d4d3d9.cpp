#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d3d9);

PROC_DECLARE(0x6d4d3d9, internal_6d4d3d9, public_6d4d3d9);
extern "C" NAKED register_t __cdecl internal_6d4d3d9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x19C]
        push esi
        mov esi, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        lea edx, ds:[edi+edx*4]
        mov edi, dword ptr ss : [ebp+0x10]
        push edx
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+0xC]
        push eax
        call dword ptr ds : [ecx+0xC]
        add esp, 0x10
        inc dword ptr ds : [esi]
        inc dword ptr ds : [edi]
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4d3d9)
    }
}
