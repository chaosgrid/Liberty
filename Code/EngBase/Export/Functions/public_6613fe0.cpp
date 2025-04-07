#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_6613fe0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6613ff2 _public_6613ff2
#define public_6614019 _public_6614019

PROC_DECLARE(0x6613fe0, internal_6613fe0, public_6613fe0);
extern "C" NAKED register_t __cdecl internal_6613fe0()
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
        je public_6614019
        public_6613ff2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_6613fe0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0x10]
        call public_66113c0
        push edi
        call public_66281d0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6613ff2
        public_6614019 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6613fe0)
    }
}

#undef public_6613ff2
#undef public_6614019
