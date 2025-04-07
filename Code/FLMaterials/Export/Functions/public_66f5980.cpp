#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f59a2 _public_66f59a2
#define public_66f59c2 _public_66f59c2
#define public_66f59c6 _public_66f59c6
#define public_66f59cb _public_66f59cb
#define public_66f5a62 _public_66f5a62
#define public_66f5a6b _public_66f5a6b
#define public_66f5a6d _public_66f5a6d
#define public_66f5a83 _public_66f5a83
#define public_66f5a9a _public_66f5a9a
#define public_66f5ab2 _public_66f5ab2
#define public_66f5ac4 _public_66f5ac4

PROC_DECLARE(0x66f5980, internal_66f5980, public_66f5980);
extern "C" NAKED register_t __cdecl internal_66f5980()
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
        jne public_66f5ab2
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66f59a2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66f59c6
        cmp al, bl
        je public_66f59c2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66f59c6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66f59a2
        public_66f59c2 : nop
        xor eax, eax
        jmp public_66f59cb
        public_66f59c6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f59cb : nop
        cmp eax, ebx
        jne public_66f5ab2
        push 0x88
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66f5a6b
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
        mov dword ptr ds : [edx+0x68], ebx
        mov dword ptr ds : [edx+0x6C], ebx
        mov byte ptr ds : [edx+0x70], bl
        lea eax, ds:[edx+0x7C]
        mov dword ptr ds : [eax], offset public_6701acc
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_6701a58
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x78], ecx
        jne public_66f5a62
        mov dword ptr ds : [edx+0x78], eax
        mov esi, edx
        jmp public_66f5a6d
        public_66f5a62 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66f5a6d
        public_66f5a6b : nop
        xor esi, esi
        public_66f5a6d : nop
        cmp esi, ebx
        jne public_66f5a83
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66f5a83 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66f5ac4
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66f5a9a
        mov dword ptr ds : [eax], ebx
        public_66f5a9a : nop
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
        public_66f5ab2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66f5ac4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f5980)
    }
}

#undef public_66f59a2
#undef public_66f59c2
#undef public_66f59c6
#undef public_66f59cb
#undef public_66f5a62
#undef public_66f5a6b
#undef public_66f5a6d
#undef public_66f5a83
#undef public_66f5a9a
#undef public_66f5ab2
#undef public_66f5ac4
