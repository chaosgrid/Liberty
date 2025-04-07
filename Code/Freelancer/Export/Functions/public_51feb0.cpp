#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51feb0);

PROC_DECLARE(0x51feb0, internal_51feb0, public_51feb0);
extern "C" NAKED register_t __cdecl internal_51feb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        movzx ecx, word ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, 0xC
        mov edi, 0x2C
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        xor esi, esi
        lea ebx, ds:[edx+0x18]
        mov dword ptr ds : [eax+0x2C], ebx
        lea ebx, ds:[edx+0x1C]
        mov dword ptr ds : [eax+0xC], edi
        lea ebp, ds:[edx+0xC]
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x34], edi
        mov dword ptr ds : [eax+0x48], edi
        mov dword ptr ds : [eax+0x5C], edi
        pop edi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x24], esi
        mov dword ptr ds : [eax+0x38], esi
        mov dword ptr ds : [eax+0x40], ebx
        mov ebx, 8
        mov dword ptr ds : [eax+0x4C], esi
        mov dword ptr ds : [eax+0x60], esi
        pop esi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0x18], ebp
        add edx, 0x24
        pop ebp
        mov dword ptr ds : [eax+0x44], ebx
        mov dword ptr ds : [eax+0x58], ebx
        mov dword ptr ds : [eax], 2
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x30], 4
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], edx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x68], 0x252
        mov dword ptr ds : [eax+0x6C], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x51feb0)
    }
}
