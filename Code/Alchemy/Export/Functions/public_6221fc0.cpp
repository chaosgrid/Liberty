#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6221fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6221fd2 _public_6221fd2
#define public_6221ff9 _public_6221ff9

PROC_DECLARE(0x6221fc0, internal_6221fc0, public_6221fc0);
extern "C" NAKED register_t __cdecl internal_6221fc0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_6221ff9
        public_6221fd2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_6221fc0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_621ff70
        push edi
        call public_62460e0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6221fd2
        public_6221ff9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6221fc0)
    }
}

#undef public_6221fd2
#undef public_6221ff9
