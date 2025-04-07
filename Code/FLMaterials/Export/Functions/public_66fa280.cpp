#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fa2a2 _public_66fa2a2
#define public_66fa2c2 _public_66fa2c2
#define public_66fa2c6 _public_66fa2c6
#define public_66fa2cb _public_66fa2cb
#define public_66fa36b _public_66fa36b
#define public_66fa374 _public_66fa374
#define public_66fa376 _public_66fa376
#define public_66fa38c _public_66fa38c
#define public_66fa3a3 _public_66fa3a3
#define public_66fa3bb _public_66fa3bb
#define public_66fa3cd _public_66fa3cd

PROC_DECLARE(0x66fa280, internal_66fa280, public_66fa280);
extern "C" NAKED register_t __cdecl internal_66fa280()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_66fa3bb
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66fa2a2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66fa2c6
        cmp al, bl
        je public_66fa2c2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66fa2c6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66fa2a2
        public_66fa2c2 : nop
        xor eax, eax
        jmp public_66fa2cb
        public_66fa2c6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fa2cb : nop
        cmp eax, ebx
        jne public_66fa3bb
        push 0x8C
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66fa374
        mov dword ptr ds : [edx+0x10], ebx
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], ebx
        mov dword ptr ds : [edx+0xC], ebx
        mov dword ptr ds : [edx+0x14], ebx
        mov dword ptr ds : [edx+0x18], ebx
        mov dword ptr ds : [edx+0x1C], ebx
        mov byte ptr ds : [edx+0x64], bl
        mov byte ptr ds : [edx+0x65], bl
        lea esi, ds:[edx+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, esi
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [edx+0x30], eax
        mov dword ptr ds : [edx+0x34], eax
        mov dword ptr ds : [edx+0x38], eax
        mov dword ptr ds : [edx+0x3C], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ds : [edx+0x28], eax
        mov dword ptr ds : [edx+0x2C], eax
        mov dword ptr ds : [edx+0x70], ebx
        mov dword ptr ds : [edx+0x74], ebx
        mov dword ptr ds : [edx+0x6C], ebx
        mov byte ptr ds : [edx+0x78], bl
        mov dword ptr ds : [edx+0x68], ebx
        lea eax, ds:[edx+0x80]
        mov dword ptr ds : [eax], offset public_6702554
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_67024e0
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x7C], ecx
        jne public_66fa36b
        mov dword ptr ds : [edx+0x7C], eax
        mov esi, edx
        jmp public_66fa376
        public_66fa36b : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66fa376
        public_66fa374 : nop
        xor esi, esi
        public_66fa376 : nop
        cmp esi, ebx
        jne public_66fa38c
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66fa38c : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66fa3cd
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66fa3a3
        mov dword ptr ds : [eax], ebx
        public_66fa3a3 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_66fa3bb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66fa3cd : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66fa280)
    }
}

#undef public_66fa2a2
#undef public_66fa2c2
#undef public_66fa2c6
#undef public_66fa2cb
#undef public_66fa36b
#undef public_66fa374
#undef public_66fa376
#undef public_66fa38c
#undef public_66fa3a3
#undef public_66fa3bb
#undef public_66fa3cd
