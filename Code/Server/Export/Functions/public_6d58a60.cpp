#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d58a94 _public_6d58a94
#define public_6d58a9d _public_6d58a9d

PROC_DECLARE(0x6d58a60, internal_6d58a60, public_6d58a60);
extern "C" NAKED register_t __cdecl internal_6d58a60()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6d58a9d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d58a94
        cmp cl, 0xFF
        je public_6d58a94
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d58a9d
        public_6d58a94 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d58a9d : nop
        push esi
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d58a60)
    }
}

#undef public_6d58a94
#undef public_6d58a9d
