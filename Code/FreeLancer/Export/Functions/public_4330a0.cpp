#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430990);
CLANG_FORWARD_PROC_SYMBOL(public_4330a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4330b2 _public_4330b2
#define public_4330d9 _public_4330d9

PROC_DECLARE(0x4330a0, internal_4330a0, public_4330a0);
extern "C" NAKED register_t __cdecl internal_4330a0()
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
        je public_4330d9
        public_4330b2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4330a0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_430990
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4330b2
        public_4330d9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4330a0)
    }
}

#undef public_4330b2
#undef public_4330d9
