#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242360);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_624237a _public_624237a
#define public_624238e _public_624238e

PROC_DECLARE(0x6242360, internal_6242360, public_6242360);
extern "C" NAKED register_t __cdecl internal_6242360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        cmp ebx, eax
        push edi
        jae public_624237a
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        jmp public_624238e
        public_624237a : nop
        fld dword ptr ds : [public_624bac4]
        fsub dword ptr ss : [esp+0x1C]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        public_624238e : nop
        fmul dword ptr ds : [public_624babc]
        xor ecx, ecx
        xor edx, edx
        mov dl, byte ptr ss : [esp+0x16]
        mov esi, eax
        mov cl, ah
        and esi, 0xFF
        mov ebp, ecx
        mov dword ptr ss : [esp+0x1C], edx
        call public_6246188
        xor ecx, ecx
        mov edi, eax
        mov cl, byte ptr ss : [esp+0x1A]
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        sub ecx, eax
        mov dl, bh
        imul ecx, edi
        sub edx, ebp
        and ebx, 0xFF
        imul edx, edi
        sub ebx, esi
        imul ebx, edi
        sar ecx, 8
        add ecx, eax
        pop edi
        sar edx, 8
        shl ecx, 0x10
        add edx, ebp
        mov eax, ecx
        shl edx, 8
        sar ebx, 8
        and eax, 0xFF0000
        and edx, 0xFF00
        add ebx, esi
        or eax, edx
        and ebx, 0xFF
        pop esi
        or eax, ebx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6242360)
    }
}

#undef public_624237a
#undef public_624238e
