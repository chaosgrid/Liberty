#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaca20);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb00c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1550);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2190);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eaca50 _public_6eaca50
#define public_6eaca78 _public_6eaca78
#define public_6eaca91 _public_6eaca91
#define public_6eaca95 _public_6eaca95
#define public_6eacab5 _public_6eacab5

PROC_DECLARE(0x6eaca20, internal_6eaca20, public_6eaca20);
extern "C" NAKED register_t __cdecl internal_6eaca20()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6eaca91
        mov ecx, eax
        cmp eax, ecx
        jne public_6eaca91
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eaca78
        nop 
        lea esp, ss:[esp]
        public_6eaca50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eb00c0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6eb2190
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eaca50
        public_6eaca78 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6eacab5
        public_6eaca91 : nop
        cmp eax, edi
        je public_6eacab5
        public_6eaca95 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6eb1550
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6eafb60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6eaca95
        public_6eacab5 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eaca20)
    }
}

#undef public_6eaca50
#undef public_6eaca78
#undef public_6eaca91
#undef public_6eaca95
#undef public_6eacab5
