#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0800);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5530);

#define public_4a0869 _public_4a0869
#define public_4a0891 _public_4a0891
#define public_4a0895 _public_4a0895
#define public_4a08c6 _public_4a08c6
#define public_4a08f0 _public_4a08f0
#define public_4a08f8 _public_4a08f8
#define public_4a0940 _public_4a0940
#define public_4a0962 _public_4a0962
#define public_4a0969 _public_4a0969
#define public_4a097d _public_4a097d
#define public_4a099a _public_4a099a
#define public_4a09fb _public_4a09fb

PROC_DECLARE(0x4a0800, internal_4a0800, public_4a0800);
extern "C" NAKED register_t __cdecl internal_4a0800()
{
    __asm
    {
        sub esp, 0x12C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x13C]
        push edi
        mov ebp, ecx
        push esi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_4c5530
        mov ecx, dword ptr ss : [ebp+0xB9C]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4a0869
        mov ecx, dword ptr ss : [esp+0x144]
        lea eax, ss:[ebp+0xBA0]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x148]
        pop edi
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0xBAC]
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ecx
        mov al, 1
        pop ebx
        add esp, 0x12C
        ret 0xC
        public_4a0869 : nop
        push esi
        call public_4c4ff0
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x13], bl
        jne public_4a0895
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x12C
        ret 0xC
        public_4a0891 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_4a0895 : nop
        movzx eax, word ptr ds : [edi+8]
        cmp eax, 0x42
        je public_4a08c6
        cmp eax, 0x4E
        je public_4a099a
        cmp eax, 0x53
        jne public_4a097d
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x148]
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [ecx], eax
        jmp public_4a097d
        public_4a08c6 : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c63ec]
        mov esi, eax
        cmp byte ptr ss : [esp+0x13], bl
        je public_4a08f0
        mov eax, dword ptr ss : [esp+0x148]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_5c6094]
        add esp, 4
        mov esi, eax
        public_4a08f0 : nop
        cmp esi, ebx
        je public_4a097d
        public_4a08f8 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x80], ebx
        mov byte ptr ss : [esp+0x84], bl
        mov dword ptr ss : [esp+0xB0], ebx
        mov byte ptr ss : [esp+0xB4], bl
        mov dword ptr ss : [esp+0xF4], ebx
        mov byte ptr ss : [esp+0xF8], bl
        call dword ptr ds : [edx+0x3C]
        mov ebp, eax
        xor edi, edi
        cmp ebp, ebx
        jbe public_4a0969
        lea esp, ss:[esp]
        public_4a0940 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_4a0962
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [esp+0xA4], edx
        je public_4a09fb
        public_4a0962 : nop
        inc edi
        cmp edi, ebp
        jb public_4a0940
        xor ebx, ebx
        public_4a0969 : nop
        call dword ptr ds : [public_5c63e8]
        mov esi, eax
        cmp esi, ebx
        jne public_4a08f8
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x18]
        public_4a097d : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], edi
        jne public_4a0891
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x12C
        ret 0xC
        public_4a099a : nop
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x148]
        mov esi, dword ptr ss : [esp+0x144]
        mov dword ptr ds : [ecx], eax
        lea eax, ds:[edi+8]
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov esi, dword ptr ds : [eax]
        lea edx, ss:[ebp+0xBA0]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xBAC], ecx
        mov dword ptr ss : [ebp+0xB9C], edx
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x12C
        ret 0xC
        public_4a09fb : nop
        mov edi, dword ptr ss : [esp+0x144]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x148]
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+0xBA0]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0xBAC], ecx
        mov dword ptr ds : [eax+0xB9C], edx
        mov al, 1
        pop ebx
        add esp, 0x12C
        ret 0xC
        UNREACHABLE_TRAP(0x4a0800)
    }
}

#undef public_4a0869
#undef public_4a0891
#undef public_4a0895
#undef public_4a08c6
#undef public_4a08f0
#undef public_4a08f8
#undef public_4a0940
#undef public_4a0962
#undef public_4a0969
#undef public_4a097d
#undef public_4a099a
#undef public_4a09fb
