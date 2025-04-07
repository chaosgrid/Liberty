#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fbbe2 _public_66fbbe2
#define public_66fbc02 _public_66fbc02
#define public_66fbc06 _public_66fbc06
#define public_66fbc0b _public_66fbc0b
#define public_66fbca2 _public_66fbca2
#define public_66fbcab _public_66fbcab
#define public_66fbcad _public_66fbcad
#define public_66fbcc3 _public_66fbcc3
#define public_66fbcda _public_66fbcda
#define public_66fbcf2 _public_66fbcf2
#define public_66fbd04 _public_66fbd04

PROC_DECLARE(0x66fbbc0, internal_66fbbc0, public_66fbbc0);
extern "C" NAKED register_t __cdecl internal_66fbbc0()
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
        jne public_66fbcf2
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66fbbe2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66fbc06
        cmp al, bl
        je public_66fbc02
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66fbc06
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66fbbe2
        public_66fbc02 : nop
        xor eax, eax
        jmp public_66fbc0b
        public_66fbc06 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fbc0b : nop
        cmp eax, ebx
        jne public_66fbcf2
        push 0x94
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66fbcab
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
        lea eax, ds:[edx+0x88]
        mov dword ptr ds : [eax], offset public_6702974
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_6702900
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x84], ecx
        jne public_66fbca2
        mov dword ptr ds : [edx+0x84], eax
        mov esi, edx
        jmp public_66fbcad
        public_66fbca2 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66fbcad
        public_66fbcab : nop
        xor esi, esi
        public_66fbcad : nop
        cmp esi, ebx
        jne public_66fbcc3
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66fbcc3 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66fbd04
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66fbcda
        mov dword ptr ds : [eax], ebx
        public_66fbcda : nop
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
        public_66fbcf2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66fbd04 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66fbbc0)
    }
}

#undef public_66fbbe2
#undef public_66fbc02
#undef public_66fbc06
#undef public_66fbc0b
#undef public_66fbca2
#undef public_66fbcab
#undef public_66fbcad
#undef public_66fbcc3
#undef public_66fbcda
#undef public_66fbcf2
#undef public_66fbd04
