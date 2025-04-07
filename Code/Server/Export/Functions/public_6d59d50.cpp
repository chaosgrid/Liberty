#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5afd0);

#define public_6d59d67 _public_6d59d67
#define public_6d59d79 _public_6d59d79
#define public_6d59d8f _public_6d59d8f
#define public_6d59d93 _public_6d59d93
#define public_6d59d99 _public_6d59d99

PROC_DECLARE(0x6d59d50, internal_6d59d50, public_6d59d50);
extern "C" NAKED register_t __cdecl internal_6d59d50()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov ebp, eax
        cmp esi, dword ptr ds : [ebx+8]
        je public_6d59d99
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6d59d67 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ds:[esi+0xC]
        jne public_6d59d79
        mov eax, offset public_6d64efc
        public_6d59d79 : nop
        push edx
        push eax
        mov eax, dword ptr ds : [ecx+8]
        push eax
        push 0
        call public_6d5afd0
        test eax, eax
        jge public_6d59d8f
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d59d93
        public_6d59d8f : nop
        mov ebp, esi
        mov esi, dword ptr ds : [esi]
        public_6d59d93 : nop
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6d59d67
        pop edi
        public_6d59d99 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d59d50)
    }
}

#undef public_6d59d67
#undef public_6d59d79
#undef public_6d59d8f
#undef public_6d59d93
#undef public_6d59d99
