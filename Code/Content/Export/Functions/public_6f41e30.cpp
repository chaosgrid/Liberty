#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f41e99 _public_6f41e99
#define public_6f41ead _public_6f41ead
#define public_6f41eb3 _public_6f41eb3
#define public_6f41ec1 _public_6f41ec1
#define public_6f41f02 _public_6f41f02
#define public_6f41f1b _public_6f41f1b
#define public_6f41f2e _public_6f41f2e
#define public_6f41f39 _public_6f41f39
#define public_6f41f3c _public_6f41f3c
#define public_6f41f41 _public_6f41f41
#define public_6f41f6a _public_6f41f6a
#define public_6f41f83 _public_6f41f83
#define public_6f41f96 _public_6f41f96
#define public_6f41fa0 _public_6f41fa0
#define public_6f41fc3 _public_6f41fc3
#define public_6f41fdb _public_6f41fdb
#define public_6f41fee _public_6f41fee
#define public_6f41ffb _public_6f41ffb
#define public_6f41ffd _public_6f41ffd
#define public_6f42003 _public_6f42003
#define public_6f4202c _public_6f4202c
#define public_6f4203f _public_6f4203f
#define public_6f4204a _public_6f4204a
#define public_6f4204d _public_6f4204d
#define public_6f4204f _public_6f4204f
#define public_6f42052 _public_6f42052
#define public_6f4205e _public_6f4205e

PROC_DECLARE(0x6f41e30, internal_6f41e30, public_6f41e30);
extern "C" NAKED register_t __cdecl internal_6f41e30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x48
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x44], 0
        mov byte ptr ds : [ebx+0x45], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ed2dc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f41e99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f41e99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f41e99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f41eb3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f41eb3
        public_6f41e99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f41ead
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f41eb3
        public_6f41ead : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f41eb3
        mov dword ptr ds : [eax], ebx
        public_6f41eb3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4205e
        public_6f41ec1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6f4205e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f41fa0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x44], 0
        jne public_6f41f02
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f42052
        public_6f41f02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f41f41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f41f1b
        mov dword ptr ds : [edx+4], eax
        public_6f41f1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f41f2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f41f3c
        public_6f41f2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f41f39
        mov dword ptr ds : [edx], ecx
        jmp public_6f41f3c
        public_6f41f39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f41f3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f41f41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f41f6a
        mov dword ptr ds : [edi+4], ecx
        public_6f41f6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f41f83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4204f
        public_6f41f83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f41f96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4204f
        public_6f41f96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4204f
        public_6f41fa0 : nop
        cmp byte ptr ds : [edx+0x44], 0
        jne public_6f41fc3
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f42052
        public_6f41fc3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f42003
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f41fdb
        mov dword ptr ds : [edx+4], eax
        public_6f41fdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f41fee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f41ffd
        public_6f41fee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f41ffb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f41ffd
        public_6f41ffb : nop
        mov dword ptr ds : [edx], ecx
        public_6f41ffd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42003 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4202c
        mov dword ptr ds : [edi+4], ecx
        public_6f4202c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4203f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f4204d
        public_6f4203f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f4204a
        mov dword ptr ds : [edi], edx
        jmp public_6f4204d
        public_6f4204a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f4204d : nop
        mov dword ptr ds : [edx], ecx
        public_6f4204f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f42052 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f41ec1
        public_6f4205e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f41e30)
    }
}

#undef public_6f41e99
#undef public_6f41ead
#undef public_6f41eb3
#undef public_6f41ec1
#undef public_6f41f02
#undef public_6f41f1b
#undef public_6f41f2e
#undef public_6f41f39
#undef public_6f41f3c
#undef public_6f41f41
#undef public_6f41f6a
#undef public_6f41f83
#undef public_6f41f96
#undef public_6f41fa0
#undef public_6f41fc3
#undef public_6f41fdb
#undef public_6f41fee
#undef public_6f41ffb
#undef public_6f41ffd
#undef public_6f42003
#undef public_6f4202c
#undef public_6f4203f
#undef public_6f4204a
#undef public_6f4204d
#undef public_6f4204f
#undef public_6f42052
#undef public_6f4205e
