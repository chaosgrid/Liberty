#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fac62 _public_66fac62
#define public_66fac82 _public_66fac82
#define public_66fac86 _public_66fac86
#define public_66fac8b _public_66fac8b
#define public_66fad12 _public_66fad12
#define public_66fad1b _public_66fad1b
#define public_66fad1d _public_66fad1d
#define public_66fad33 _public_66fad33
#define public_66fad4a _public_66fad4a
#define public_66fad62 _public_66fad62
#define public_66fad74 _public_66fad74

PROC_DECLARE(0x66fac40, internal_66fac40, public_66fac40);
extern "C" NAKED register_t __cdecl internal_66fac40()
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
        jne public_66fad62
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66fac62 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66fac86
        cmp al, bl
        je public_66fac82
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66fac86
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66fac62
        public_66fac82 : nop
        xor eax, eax
        jmp public_66fac8b
        public_66fac86 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fac8b : nop
        cmp eax, ebx
        jne public_66fad62
        push 0x78
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66fad1b
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
        lea eax, ds:[edx+0x6C]
        mov dword ptr ds : [eax], offset public_670269c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_6702628
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x68], ecx
        jne public_66fad12
        mov dword ptr ds : [edx+0x68], eax
        mov esi, edx
        jmp public_66fad1d
        public_66fad12 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66fad1d
        public_66fad1b : nop
        xor esi, esi
        public_66fad1d : nop
        cmp esi, ebx
        jne public_66fad33
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66fad33 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66fad74
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66fad4a
        mov dword ptr ds : [eax], ebx
        public_66fad4a : nop
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
        public_66fad62 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66fad74 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66fac40)
    }
}

#undef public_66fac62
#undef public_66fac82
#undef public_66fac86
#undef public_66fac8b
#undef public_66fad12
#undef public_66fad1b
#undef public_66fad1d
#undef public_66fad33
#undef public_66fad4a
#undef public_66fad62
#undef public_66fad74
