#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c223f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2ea89 _public_6c2ea89
#define public_6c2ea9d _public_6c2ea9d
#define public_6c2eaa3 _public_6c2eaa3
#define public_6c2eab1 _public_6c2eab1
#define public_6c2eaf2 _public_6c2eaf2
#define public_6c2eb0b _public_6c2eb0b
#define public_6c2eb1e _public_6c2eb1e
#define public_6c2eb29 _public_6c2eb29
#define public_6c2eb2c _public_6c2eb2c
#define public_6c2eb31 _public_6c2eb31
#define public_6c2eb5a _public_6c2eb5a
#define public_6c2eb73 _public_6c2eb73
#define public_6c2eb86 _public_6c2eb86
#define public_6c2eb90 _public_6c2eb90
#define public_6c2ebb3 _public_6c2ebb3
#define public_6c2ebcb _public_6c2ebcb
#define public_6c2ebde _public_6c2ebde
#define public_6c2ebeb _public_6c2ebeb
#define public_6c2ebed _public_6c2ebed
#define public_6c2ebf3 _public_6c2ebf3
#define public_6c2ec1c _public_6c2ec1c
#define public_6c2ec2f _public_6c2ec2f
#define public_6c2ec3a _public_6c2ec3a
#define public_6c2ec3d _public_6c2ec3d
#define public_6c2ec3f _public_6c2ec3f
#define public_6c2ec42 _public_6c2ec42
#define public_6c2ec4e _public_6c2ec4e

PROC_DECLARE(0x6c2ea20, internal_6c2ea20, public_6c2ea20);
extern "C" NAKED register_t __cdecl internal_6c2ea20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6c34eac
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6c223f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6c2ea89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6c2ea89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6c2ea89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6c2eaa3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c2eaa3
        public_6c2ea89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6c2ea9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6c2eaa3
        public_6c2ea9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6c2eaa3
        mov dword ptr ds : [eax], ebx
        public_6c2eaa3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6c2ec4e
        public_6c2eab1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2ec4e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6c2eb90
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c2eaf2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6c2ec42
        public_6c2eaf2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6c2eb31
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c2eb0b
        mov dword ptr ds : [edx+4], eax
        public_6c2eb0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c2eb1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c2eb2c
        public_6c2eb1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6c2eb29
        mov dword ptr ds : [edx], ecx
        jmp public_6c2eb2c
        public_6c2eb29 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c2eb2c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c2eb31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c2eb5a
        mov dword ptr ds : [edi+4], ecx
        public_6c2eb5a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c2eb73
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2ec3f
        public_6c2eb73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c2eb86
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2ec3f
        public_6c2eb86 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2ec3f
        public_6c2eb90 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c2ebb3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6c2ec42
        public_6c2ebb3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6c2ebf3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c2ebcb
        mov dword ptr ds : [edx+4], eax
        public_6c2ebcb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c2ebde
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c2ebed
        public_6c2ebde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6c2ebeb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2ebed
        public_6c2ebeb : nop
        mov dword ptr ds : [edx], ecx
        public_6c2ebed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c2ebf3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c2ec1c
        mov dword ptr ds : [edi+4], ecx
        public_6c2ec1c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c2ec2f
        mov dword ptr ds : [edi+4], edx
        jmp public_6c2ec3d
        public_6c2ec2f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6c2ec3a
        mov dword ptr ds : [edi], edx
        jmp public_6c2ec3d
        public_6c2ec3a : nop
        mov dword ptr ds : [edi+8], edx
        public_6c2ec3d : nop
        mov dword ptr ds : [edx], ecx
        public_6c2ec3f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c2ec42 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c2eab1
        public_6c2ec4e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c2ea20)
    }
}

#undef public_6c2ea89
#undef public_6c2ea9d
#undef public_6c2eaa3
#undef public_6c2eab1
#undef public_6c2eaf2
#undef public_6c2eb0b
#undef public_6c2eb1e
#undef public_6c2eb29
#undef public_6c2eb2c
#undef public_6c2eb31
#undef public_6c2eb5a
#undef public_6c2eb73
#undef public_6c2eb86
#undef public_6c2eb90
#undef public_6c2ebb3
#undef public_6c2ebcb
#undef public_6c2ebde
#undef public_6c2ebeb
#undef public_6c2ebed
#undef public_6c2ebf3
#undef public_6c2ec1c
#undef public_6c2ec2f
#undef public_6c2ec3a
#undef public_6c2ec3d
#undef public_6c2ec3f
#undef public_6c2ec42
#undef public_6c2ec4e
