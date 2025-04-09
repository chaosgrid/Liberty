#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_538f60 _public_538f60
#define public_538f69 _public_538f69
#define public_538f6b _public_538f6b
#define public_538f80 _public_538f80
#define public_538f87 _public_538f87
#define public_538f9a _public_538f9a
#define public_538fa3 _public_538fa3
#define public_538fa7 _public_538fa7
#define public_538fc0 _public_538fc0
#define public_538fd1 _public_538fd1

PROC_DECLARE(0x538f50, internal_538f50, public_538f50);
extern "C" NAKED register_t __cdecl internal_538f50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ds : [esi], offset public_5de720
        xor edi, edi
        nop 
        public_538f60 : nop
        cmp edi, ebx
        jne public_538f69
        mov edi, dword ptr ds : [esi+4]
        jmp public_538f6b
        public_538f69 : nop
        mov edi, dword ptr ds : [edi]
        public_538f6b : nop
        cmp edi, ebx
        je public_538f80
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_538f60
        public_538f80 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_538fa7
        public_538f87 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_538f9a
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_538fa3
        public_538f9a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_538fa3 : nop
        cmp edi, ebx
        jne public_538f87
        public_538fa7 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5de718
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_538fd1
        lea ebx, ds:[ebx]
        public_538fc0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_538fc0
        public_538fd1 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x538f50)
    }
}

#undef public_538f60
#undef public_538f69
#undef public_538f6b
#undef public_538f80
#undef public_538f87
#undef public_538f9a
#undef public_538fa3
#undef public_538fa7
#undef public_538fc0
#undef public_538fd1
