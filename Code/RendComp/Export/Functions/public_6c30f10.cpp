#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30f5b);

PROC_DECLARE(0x6c30f10, internal_6c30f10, public_6c30f10);
extern "C" NAKED register_t __cdecl internal_6c30f10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x10]
        movzx ecx, word ptr ds : [eax+0xE]
        cmp dword ptr ss : [esp+0xC], ecx
        jne public_6c30f5b
        mov eax, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax+0x34]
        mov edx, dword ptr ds : [edx+0x10]
        movzx edx, word ptr ds : [edx+0x10]
        push esi
        movzx esi, word ptr ds : [eax+8]
        lea edx, ds:[edx+esi*2]
        add ecx, ecx
        lea edx, ds:[edx+edx*2]
        lea esi, ds:[eax+edx*2+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, ecx
        push edi
        mov edi, dword ptr ds : [eax]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c30f10)
    }
}
