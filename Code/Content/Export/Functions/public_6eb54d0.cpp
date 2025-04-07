#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb54d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5b50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb69b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb54ee _public_6eb54ee
#define public_6eb54f0 _public_6eb54f0
#define public_6eb5520 _public_6eb5520
#define public_6eb5548 _public_6eb5548
#define public_6eb556d _public_6eb556d
#define public_6eb5571 _public_6eb5571
#define public_6eb5591 _public_6eb5591

PROC_DECLARE(0x6eb54d0, internal_6eb54d0, public_6eb54d0);
extern "C" NAKED register_t __cdecl internal_6eb54d0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcef0c]
        mov al, 1
        test al, cl
        jne public_6eb54ee
        or cl, al
        mov byte ptr ds : [public_6fcef0c], cl
        mov ecx, offset public_6fcef10
        jmp public_6eb54f0
        public_6eb54ee : nop
        ret 
        nop 
        public_6eb54f0 : nop
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
        je public_6eb556d
        mov ecx, eax
        cmp eax, ecx
        jne public_6eb556d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eb5548
        nop 
        lea esp, ss:[esp]
        public_6eb5520 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eb5fb0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6eb69b0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eb5520
        public_6eb5548 : nop
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
        jmp public_6eb5591
        public_6eb556d : nop
        cmp eax, edi
        je public_6eb5591
        public_6eb5571 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6eb66f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eb5b50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6eb5571
        public_6eb5591 : nop
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
        UNREACHABLE_TRAP(0x6eb54d0)
    }
}

#undef public_6eb54ee
#undef public_6eb54f0
#undef public_6eb5520
#undef public_6eb5548
#undef public_6eb556d
#undef public_6eb5571
#undef public_6eb5591
