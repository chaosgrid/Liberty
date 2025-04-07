#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66faf52 _public_66faf52
#define public_66faf72 _public_66faf72
#define public_66faf76 _public_66faf76
#define public_66faf7b _public_66faf7b
#define public_66fb012 _public_66fb012
#define public_66fb01b _public_66fb01b
#define public_66fb01d _public_66fb01d
#define public_66fb033 _public_66fb033
#define public_66fb04a _public_66fb04a
#define public_66fb062 _public_66fb062
#define public_66fb074 _public_66fb074

PROC_DECLARE(0x66faf30, internal_66faf30, public_66faf30);
extern "C" NAKED register_t __cdecl internal_66faf30()
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
        jne public_66fb062
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66faf52 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66faf76
        cmp al, bl
        je public_66faf72
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66faf76
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66faf52
        public_66faf72 : nop
        xor eax, eax
        jmp public_66faf7b
        public_66faf76 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66faf7b : nop
        cmp eax, ebx
        jne public_66fb062
        push 0x90
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66fb01b
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
        lea eax, ds:[edx+0x84]
        mov dword ptr ds : [eax], offset public_67027fc
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_6702788
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x80], ecx
        jne public_66fb012
        mov dword ptr ds : [edx+0x80], eax
        mov esi, edx
        jmp public_66fb01d
        public_66fb012 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66fb01d
        public_66fb01b : nop
        xor esi, esi
        public_66fb01d : nop
        cmp esi, ebx
        jne public_66fb033
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66fb033 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66fb074
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66fb04a
        mov dword ptr ds : [eax], ebx
        public_66fb04a : nop
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
        public_66fb062 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66fb074 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66faf30)
    }
}

#undef public_66faf52
#undef public_66faf72
#undef public_66faf76
#undef public_66faf7b
#undef public_66fb012
#undef public_66fb01b
#undef public_66fb01d
#undef public_66fb033
#undef public_66fb04a
#undef public_66fb062
#undef public_66fb074
