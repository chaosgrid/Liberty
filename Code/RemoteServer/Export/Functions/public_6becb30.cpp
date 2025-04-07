#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becb30);
CLANG_FORWARD_PROC_SYMBOL(public_6becf00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6becb99 _public_6becb99
#define public_6becbad _public_6becbad
#define public_6becbb3 _public_6becbb3
#define public_6becbc1 _public_6becbc1
#define public_6becc02 _public_6becc02
#define public_6becc1b _public_6becc1b
#define public_6becc2e _public_6becc2e
#define public_6becc39 _public_6becc39
#define public_6becc3c _public_6becc3c
#define public_6becc41 _public_6becc41
#define public_6becc6a _public_6becc6a
#define public_6becc83 _public_6becc83
#define public_6becc96 _public_6becc96
#define public_6becca0 _public_6becca0
#define public_6beccc3 _public_6beccc3
#define public_6beccdb _public_6beccdb
#define public_6beccee _public_6beccee
#define public_6beccfb _public_6beccfb
#define public_6beccfd _public_6beccfd
#define public_6becd03 _public_6becd03
#define public_6becd2c _public_6becd2c
#define public_6becd3f _public_6becd3f
#define public_6becd4a _public_6becd4a
#define public_6becd4d _public_6becd4d
#define public_6becd4f _public_6becd4f
#define public_6becd52 _public_6becd52
#define public_6becd5e _public_6becd5e

PROC_DECLARE(0x6becb30, internal_6becb30, public_6becb30);
extern "C" NAKED register_t __cdecl internal_6becb30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6c09d26
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x48], 0
        mov byte ptr ds : [ebx+0x49], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0x10]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6becf00
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6becb99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6becb99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0x10]
        jb public_6becb99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6becbb3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6becbb3
        public_6becb99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6becbad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6becbb3
        public_6becbad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6becbb3
        mov dword ptr ds : [eax], ebx
        public_6becbb3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6becd5e
        public_6becbc1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6becd5e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6becca0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6becc02
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6becd52
        public_6becc02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6becc41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6becc1b
        mov dword ptr ds : [edx+4], eax
        public_6becc1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6becc2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6becc3c
        public_6becc2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6becc39
        mov dword ptr ds : [edx], ecx
        jmp public_6becc3c
        public_6becc39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6becc3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6becc41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6becc6a
        mov dword ptr ds : [edi+4], ecx
        public_6becc6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6becc83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6becd4f
        public_6becc83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6becc96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6becd4f
        public_6becc96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6becd4f
        public_6becca0 : nop
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6beccc3
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6becd52
        public_6beccc3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6becd03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6beccdb
        mov dword ptr ds : [edx+4], eax
        public_6beccdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6beccee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6beccfd
        public_6beccee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6beccfb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6beccfd
        public_6beccfb : nop
        mov dword ptr ds : [edx], ecx
        public_6beccfd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6becd03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6becd2c
        mov dword ptr ds : [edi+4], ecx
        public_6becd2c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6becd3f
        mov dword ptr ds : [edi+4], edx
        jmp public_6becd4d
        public_6becd3f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6becd4a
        mov dword ptr ds : [edi], edx
        jmp public_6becd4d
        public_6becd4a : nop
        mov dword ptr ds : [edi+8], edx
        public_6becd4d : nop
        mov dword ptr ds : [edx], ecx
        public_6becd4f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6becd52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6becbc1
        public_6becd5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6becb30)
    }
}

#undef public_6becb99
#undef public_6becbad
#undef public_6becbb3
#undef public_6becbc1
#undef public_6becc02
#undef public_6becc1b
#undef public_6becc2e
#undef public_6becc39
#undef public_6becc3c
#undef public_6becc41
#undef public_6becc6a
#undef public_6becc83
#undef public_6becc96
#undef public_6becca0
#undef public_6beccc3
#undef public_6beccdb
#undef public_6beccee
#undef public_6beccfb
#undef public_6beccfd
#undef public_6becd03
#undef public_6becd2c
#undef public_6becd3f
#undef public_6becd4a
#undef public_6becd4d
#undef public_6becd4f
#undef public_6becd52
#undef public_6becd5e
