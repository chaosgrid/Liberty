#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63047d0);

PROC_DECLARE(0x6326570, internal_6326570, public_6326570);
extern "C" NAKED register_t __cdecl internal_6326570()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        imul esi, 0x8C
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        push eax
        add esi, offset public_6409588
        lea ebx, ds:[esi+0xC]
        push 0x80
        push ebx
        call public_63047d0
        mov dword ptr ds : [esi], ebx
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], cl
        mov dl, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+9], dl
        mov al, byte ptr ds : [edi+0xA]
        add esp, 0xC
        mov byte ptr ds : [esi+0xA], al
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6326570)
    }
}
