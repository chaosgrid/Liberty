#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d484e4);

PROC_DECLARE(0x6d484e4, internal_6d484e4, public_6d484e4);
extern "C" NAKED register_t __cdecl internal_6d484e4()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        mov bl, al
        mov bh, bl
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d484e4)
    }
}
