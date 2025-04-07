#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280770);
CLANG_FORWARD_PROC_SYMBOL(public_62809c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62807d9 _public_62807d9
#define public_62807ed _public_62807ed
#define public_62807f3 _public_62807f3
#define public_6280801 _public_6280801
#define public_6280842 _public_6280842
#define public_628085b _public_628085b
#define public_628086e _public_628086e
#define public_6280879 _public_6280879
#define public_628087c _public_628087c
#define public_6280881 _public_6280881
#define public_62808aa _public_62808aa
#define public_62808c3 _public_62808c3
#define public_62808d6 _public_62808d6
#define public_62808e0 _public_62808e0
#define public_6280903 _public_6280903
#define public_628091b _public_628091b
#define public_628092e _public_628092e
#define public_628093b _public_628093b
#define public_628093d _public_628093d
#define public_6280943 _public_6280943
#define public_628096c _public_628096c
#define public_628097f _public_628097f
#define public_628098a _public_628098a
#define public_628098d _public_628098d
#define public_628098f _public_628098f
#define public_6280992 _public_6280992
#define public_628099e _public_628099e

PROC_DECLARE(0x6280770, internal_6280770, public_6280770);
extern "C" NAKED register_t __cdecl internal_6280770()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x44
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x40], 0
        mov byte ptr ds : [ebx+0x41], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62809c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62807d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62807d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_62807d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62807f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_62807f3
        public_62807d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62807ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62807f3
        public_62807ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62807f3
        mov dword ptr ds : [eax], ebx
        public_62807f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_628099e
        public_6280801 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_628099e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62808e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6280842
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6280992
        public_6280842 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6280881
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_628085b
        mov dword ptr ds : [edx+4], eax
        public_628085b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_628086e
        mov dword ptr ds : [edx+4], ecx
        jmp public_628087c
        public_628086e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6280879
        mov dword ptr ds : [edx], ecx
        jmp public_628087c
        public_6280879 : nop
        mov dword ptr ds : [edx+8], ecx
        public_628087c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6280881 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62808aa
        mov dword ptr ds : [edi+4], ecx
        public_62808aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62808c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628098f
        public_62808c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62808d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628098f
        public_62808d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628098f
        public_62808e0 : nop
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6280903
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6280992
        public_6280903 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6280943
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_628091b
        mov dword ptr ds : [edx+4], eax
        public_628091b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_628092e
        mov dword ptr ds : [edx+4], ecx
        jmp public_628093d
        public_628092e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_628093b
        mov dword ptr ds : [edx+8], ecx
        jmp public_628093d
        public_628093b : nop
        mov dword ptr ds : [edx], ecx
        public_628093d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6280943 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_628096c
        mov dword ptr ds : [edi+4], ecx
        public_628096c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_628097f
        mov dword ptr ds : [edi+4], edx
        jmp public_628098d
        public_628097f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_628098a
        mov dword ptr ds : [edi], edx
        jmp public_628098d
        public_628098a : nop
        mov dword ptr ds : [edi+8], edx
        public_628098d : nop
        mov dword ptr ds : [edx], ecx
        public_628098f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6280992 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6280801
        public_628099e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6280770)
    }
}

#undef public_62807d9
#undef public_62807ed
#undef public_62807f3
#undef public_6280801
#undef public_6280842
#undef public_628085b
#undef public_628086e
#undef public_6280879
#undef public_628087c
#undef public_6280881
#undef public_62808aa
#undef public_62808c3
#undef public_62808d6
#undef public_62808e0
#undef public_6280903
#undef public_628091b
#undef public_628092e
#undef public_628093b
#undef public_628093d
#undef public_6280943
#undef public_628096c
#undef public_628097f
#undef public_628098a
#undef public_628098d
#undef public_628098f
#undef public_6280992
#undef public_628099e
