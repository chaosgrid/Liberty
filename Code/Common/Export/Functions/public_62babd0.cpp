#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62babd0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62babe2 _public_62babe2
#define public_62bac09 _public_62bac09

PROC_DECLARE(0x62babd0, internal_62babd0, public_62babd0);
extern "C" NAKED register_t __cdecl internal_62babd0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_62bac09
        public_62babe2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62babd0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_62bb5a0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62babe2
        public_62bac09 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62babd0)
    }
}

#undef public_62babe2
#undef public_62bac09
