#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4ef5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5c5b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66fe);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f87);
CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);

#define public_6ef4f10 _public_6ef4f10
#define public_6ef4f16 _public_6ef4f16
#define public_6ef4f41 _public_6ef4f41
#define public_6ef4f60 _public_6ef4f60
#define public_6ef4f75 _public_6ef4f75
#define public_6ef4f8b _public_6ef4f8b
#define public_6ef4f8e _public_6ef4f8e
#define public_6ef4f99 _public_6ef4f99
#define public_6ef4f9b _public_6ef4f9b
#define public_6ef4f9f _public_6ef4f9f
#define public_6ef4fa2 _public_6ef4fa2

PROC_DECLARE(0x6ef4ef5, internal_6ef4ef5, public_6ef4ef5);
extern "C" NAKED register_t __cdecl internal_6ef4ef5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        imul esi, dword ptr ss : [ebp+0xC]
        cmp esi, 0xFFFFFFE0
        push edi
        mov dword ptr ss : [ebp+8], esi
        ja public_6ef4f16
        test esi, esi
        jne public_6ef4f10
        push 1
        pop esi
        public_6ef4f10 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        public_6ef4f16 : nop
        xor edi, edi
        cmp esi, 0xFFFFFFE0
        ja public_6ef4f75
        mov eax, dword ptr ds : [public_6f02674]
        cmp eax, 3
        jne public_6ef4f41
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [public_6f0266c]
        ja public_6ef4f60
        push eax
        call public_6ef5c5b
        mov edi, eax
        pop ecx
        test edi, edi
        jne public_6ef4f8b
        jmp public_6ef4f60
        public_6ef4f41 : nop
        cmp eax, 2
        jne public_6ef4f60
        cmp esi, dword ptr ds : [public_6f0052c]
        ja public_6ef4f60
        mov eax, esi
        shr eax, 4
        push eax
        call public_6ef66fe
        mov edi, eax
        pop ecx
        test edi, edi
        jne public_6ef4f9f
        public_6ef4f60 : nop
        push esi
        push 8
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        mov edi, eax
        test edi, edi
        jne public_6ef4f99
        public_6ef4f75 : nop
        cmp dword ptr ds : [public_6f010d8], 0
        je public_6ef4f99
        push esi
        call public_6ef6f87
        test eax, eax
        pop ecx
        je public_6ef4fa2
        jmp public_6ef4f16
        public_6ef4f8b : nop
        push dword ptr ss : [ebp+8]
        public_6ef4f8e : nop
        push 0
        push edi
        call public_6ef85b0
        add esp, 0xC
        public_6ef4f99 : nop
        mov eax, edi
        public_6ef4f9b : nop
        pop edi
        pop esi
        pop ebp
        ret 
        public_6ef4f9f : nop
        push esi
        jmp public_6ef4f8e
        public_6ef4fa2 : nop
        xor eax, eax
        jmp public_6ef4f9b
        UNREACHABLE_TRAP(0x6ef4ef5)
    }
}

#undef public_6ef4f10
#undef public_6ef4f16
#undef public_6ef4f41
#undef public_6ef4f60
#undef public_6ef4f75
#undef public_6ef4f8b
#undef public_6ef4f8e
#undef public_6ef4f99
#undef public_6ef4f9b
#undef public_6ef4f9f
#undef public_6ef4fa2
