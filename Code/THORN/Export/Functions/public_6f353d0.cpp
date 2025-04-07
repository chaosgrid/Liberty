#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22b70);

#define public_6f353fb _public_6f353fb

PROC_DECLARE(0x6f353d0, internal_6f353d0, public_6f353d0);
extern "C" NAKED register_t __cdecl internal_6f353d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6f353fb
        call public_6f224f0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jb public_6f353fb
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f22b70
        pop esi
        ret 0xC
        public_6f353fb : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f353d0)
    }
}

#undef public_6f353fb
