#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6f2df90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2dfa2 _public_6f2dfa2
#define public_6f2dfc9 _public_6f2dfc9

PROC_DECLARE(0x6f2df90, internal_6f2df90, public_6f2df90);
extern "C" NAKED register_t __cdecl internal_6f2df90()
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
        je public_6f2dfc9
        public_6f2dfa2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f2df90
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f29680
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f2dfa2
        public_6f2dfc9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2df90)
    }
}

#undef public_6f2dfa2
#undef public_6f2dfc9
