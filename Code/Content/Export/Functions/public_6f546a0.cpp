#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f502e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f546a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f546b2 _public_6f546b2
#define public_6f546d9 _public_6f546d9

PROC_DECLARE(0x6f546a0, internal_6f546a0, public_6f546a0);
extern "C" NAKED register_t __cdecl internal_6f546a0()
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
        je public_6f546d9
        public_6f546b2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f546a0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f502e0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f546b2
        public_6f546d9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f546a0)
    }
}

#undef public_6f546b2
#undef public_6f546d9
