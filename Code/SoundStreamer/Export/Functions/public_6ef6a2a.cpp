#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6a2a);

#define public_6ef6a64 _public_6ef6a64
#define public_6ef6a79 _public_6ef6a79
#define public_6ef6a85 _public_6ef6a85
#define public_6ef6a87 _public_6ef6a87
#define public_6ef6aaa _public_6ef6aaa
#define public_6ef6ab1 _public_6ef6ab1
#define public_6ef6ab6 _public_6ef6ab6
#define public_6ef6abf _public_6ef6abf
#define public_6ef6ac4 _public_6ef6ac4
#define public_6ef6acb _public_6ef6acb

PROC_DECLARE(0x6ef6a2a, internal_6ef6a2a, public_6ef6a2a);
extern "C" NAKED register_t __cdecl internal_6ef6a2a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        movzx ecx, byte ptr ds : [edx]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        mov eax, ebx
        sub eax, dword ptr ds : [edi+0x10]
        sar eax, 0xC
        cmp ecx, dword ptr ss : [ebp+0x14]
        lea edi, ds:[edi+eax*8+0x18]
        jbe public_6ef6a64
        mov eax, dword ptr ss : [ebp+0x14]
        sub ecx, eax
        mov byte ptr ds : [edx], al
        add dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], 0xF1
        jmp public_6ef6ac4
        public_6ef6a64 : nop
        jae public_6ef6acb
        mov eax, dword ptr ss : [ebp+0x14]
        lea esi, ds:[edx+eax]
        lea eax, ds:[ebx+0xF8]
        cmp esi, eax
        ja public_6ef6acb
        lea eax, ds:[ecx+edx]
        public_6ef6a79 : nop
        cmp eax, esi
        jae public_6ef6a87
        cmp byte ptr ds : [eax], 0
        jne public_6ef6a85
        inc eax
        jmp public_6ef6a79
        public_6ef6a85 : nop
        cmp eax, esi
        public_6ef6a87 : nop
        jne public_6ef6acb
        mov al, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ds : [ebx]
        cmp edx, eax
        ja public_6ef6abf
        cmp esi, eax
        jbe public_6ef6abf
        lea eax, ds:[ebx+0xF8]
        cmp esi, eax
        jae public_6ef6ab6
        xor eax, eax
        mov dword ptr ds : [ebx], esi
        cmp byte ptr ds : [esi], al
        jne public_6ef6ab1
        public_6ef6aaa : nop
        inc eax
        cmp byte ptr ds : [esi+eax], 0
        je public_6ef6aaa
        public_6ef6ab1 : nop
        mov dword ptr ds : [ebx+4], eax
        jmp public_6ef6abf
        public_6ef6ab6 : nop
        and dword ptr ds : [ebx+4], 0
        lea eax, ds:[ebx+8]
        mov dword ptr ds : [ebx], eax
        public_6ef6abf : nop
        sub ecx, dword ptr ss : [ebp+0x14]
        add dword ptr ds : [edi], ecx
        public_6ef6ac4 : nop
        mov dword ptr ss : [ebp-4], 1
        public_6ef6acb : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6a2a)
    }
}

#undef public_6ef6a64
#undef public_6ef6a79
#undef public_6ef6a85
#undef public_6ef6a87
#undef public_6ef6aaa
#undef public_6ef6ab1
#undef public_6ef6ab6
#undef public_6ef6abf
#undef public_6ef6ac4
#undef public_6ef6acb
