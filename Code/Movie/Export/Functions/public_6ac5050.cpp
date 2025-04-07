#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac5050);
CLANG_FORWARD_PROC_SYMBOL(public_6acff50);

#define public_6ac506b _public_6ac506b

PROC_DECLARE(0x6ac5050, internal_6ac5050, public_6ac5050);
extern "C" NAKED register_t __cdecl internal_6ac5050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jb public_6ac506b
        mov dword ptr ds : [public_6ae097c], 9
        pop edi
        ret 0x14
        public_6ac506b : nop
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        push edi
        push eax
        push esi
        call public_6acff50
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        imul eax, edi
        sub esi, eax
        mov dword ptr ds : [edx], esi
        pop esi
        pop edi
        ret 0x14
        UNREACHABLE_TRAP(0x6ac5050)
    }
}

#undef public_6ac506b
