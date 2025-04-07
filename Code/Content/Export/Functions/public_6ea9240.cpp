#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9240);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb00c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1550);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2190);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea9270 _public_6ea9270
#define public_6ea9298 _public_6ea9298
#define public_6ea92bd _public_6ea92bd
#define public_6ea92c1 _public_6ea92c1
#define public_6ea92e1 _public_6ea92e1

PROC_DECLARE(0x6ea9240, internal_6ea9240, public_6ea9240);
extern "C" NAKED register_t __cdecl internal_6ea9240()
{
    __asm
    {
        sub esp, 0xC
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
        je public_6ea92bd
        mov ecx, eax
        cmp eax, ecx
        jne public_6ea92bd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ea9298
        nop 
        lea esp, ss:[esp]
        public_6ea9270 : nop
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
        jne public_6ea9270
        public_6ea9298 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6ea92e1
        public_6ea92bd : nop
        cmp eax, edi
        je public_6ea92e1
        public_6ea92c1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6eb1550
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eafb60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ea92c1
        public_6ea92e1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ea9240)
    }
}

#undef public_6ea9270
#undef public_6ea9298
#undef public_6ea92bd
#undef public_6ea92c1
#undef public_6ea92e1
