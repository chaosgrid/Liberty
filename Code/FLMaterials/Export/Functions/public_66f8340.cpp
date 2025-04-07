#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f8362 _public_66f8362
#define public_66f8382 _public_66f8382
#define public_66f8386 _public_66f8386
#define public_66f838b _public_66f838b
#define public_66f8422 _public_66f8422
#define public_66f842b _public_66f842b
#define public_66f842d _public_66f842d
#define public_66f8443 _public_66f8443
#define public_66f845a _public_66f845a
#define public_66f8472 _public_66f8472
#define public_66f8484 _public_66f8484

PROC_DECLARE(0x66f8340, internal_66f8340, public_66f8340);
extern "C" NAKED register_t __cdecl internal_66f8340()
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
        jne public_66f8472
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66f8362 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66f8386
        cmp al, bl
        je public_66f8382
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66f8386
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66f8362
        public_66f8382 : nop
        xor eax, eax
        jmp public_66f838b
        public_66f8386 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f838b : nop
        cmp eax, ebx
        jne public_66f8472
        push 0x98
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66f842b
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
        lea eax, ds:[edx+0x8C]
        mov dword ptr ds : [eax], offset public_67021d4
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_6702160
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x88], ecx
        jne public_66f8422
        mov dword ptr ds : [edx+0x88], eax
        mov esi, edx
        jmp public_66f842d
        public_66f8422 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66f842d
        public_66f842b : nop
        xor esi, esi
        public_66f842d : nop
        cmp esi, ebx
        jne public_66f8443
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66f8443 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66f8484
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66f845a
        mov dword ptr ds : [eax], ebx
        public_66f845a : nop
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
        public_66f8472 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66f8484 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f8340)
    }
}

#undef public_66f8362
#undef public_66f8382
#undef public_66f8386
#undef public_66f838b
#undef public_66f8422
#undef public_66f842b
#undef public_66f842d
#undef public_66f8443
#undef public_66f845a
#undef public_66f8472
#undef public_66f8484
