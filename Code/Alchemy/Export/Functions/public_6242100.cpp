#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242100);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

PROC_DECLARE(0x6242100, internal_6242100, public_6242100);
extern "C" NAKED register_t __cdecl internal_6242100()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        xor ecx, ecx
        fmul dword ptr ds : [public_624babc]
        push esi
        mov esi, eax
        mov cl, ah
        xor ebx, ebx
        mov bl, byte ptr ss : [esp+0x12]
        push edi
        and esi, 0xFF
        mov ebp, ecx
        call public_6246188
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, eax
        xor eax, eax
        xor edx, edx
        mov al, byte ptr ss : [esp+0x1A]
        mov dl, ch
        sub eax, ebx
        sub edx, ebp
        imul eax, edi
        imul edx, edi
        and ecx, 0xFF
        sub ecx, esi
        imul ecx, edi
        sar eax, 8
        sar edx, 8
        add eax, ebx
        add edx, ebp
        shl eax, 0x10
        shl edx, 8
        sar ecx, 8
        and eax, 0xFF0000
        and edx, 0xFF00
        add ecx, esi
        pop edi
        or eax, edx
        and ecx, 0xFF
        pop esi
        pop ebp
        or eax, ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6242100)
    }
}
