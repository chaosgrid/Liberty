#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f964e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f964f2 _public_6f964f2
#define public_6f96519 _public_6f96519

PROC_DECLARE(0x6f964e0, internal_6f964e0, public_6f964e0);
extern "C" NAKED register_t __cdecl internal_6f964e0()
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
        je public_6f96519
        public_6f964f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f964e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f956a0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f964f2
        public_6f96519 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f964e0)
    }
}

#undef public_6f964f2
#undef public_6f96519
