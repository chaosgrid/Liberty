#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5316e0);
CLANG_FORWARD_PROC_SYMBOL(public_531980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_531749 _public_531749
#define public_53175d _public_53175d
#define public_531763 _public_531763
#define public_531771 _public_531771
#define public_5317b2 _public_5317b2
#define public_5317cb _public_5317cb
#define public_5317de _public_5317de
#define public_5317e9 _public_5317e9
#define public_5317ec _public_5317ec
#define public_5317f1 _public_5317f1
#define public_53181a _public_53181a
#define public_531833 _public_531833
#define public_531846 _public_531846
#define public_531850 _public_531850
#define public_531873 _public_531873
#define public_53188b _public_53188b
#define public_53189e _public_53189e
#define public_5318ab _public_5318ab
#define public_5318ad _public_5318ad
#define public_5318b3 _public_5318b3
#define public_5318dc _public_5318dc
#define public_5318ef _public_5318ef
#define public_5318fa _public_5318fa
#define public_5318fd _public_5318fd
#define public_5318ff _public_5318ff
#define public_531902 _public_531902
#define public_53190e _public_53190e

PROC_DECLARE(0x5316e0, internal_5316e0, public_5316e0);
extern "C" NAKED register_t __cdecl internal_5316e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_531980
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_531749
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_531749
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_531749
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_531763
        mov dword ptr ds : [eax+8], ebx
        jmp public_531763
        public_531749 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_53175d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_531763
        public_53175d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_531763
        mov dword ptr ds : [eax], ebx
        public_531763 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_53190e
        public_531771 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_53190e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_531850
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_5317b2
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_531902
        public_5317b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5317f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_5317cb
        mov dword ptr ds : [edx+4], eax
        public_5317cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5317de
        mov dword ptr ds : [edx+4], ecx
        jmp public_5317ec
        public_5317de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_5317e9
        mov dword ptr ds : [edx], ecx
        jmp public_5317ec
        public_5317e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5317ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_5317f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_53181a
        mov dword ptr ds : [edi+4], ecx
        public_53181a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_531833
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5318ff
        public_531833 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_531846
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5318ff
        public_531846 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5318ff
        public_531850 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_531873
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_531902
        public_531873 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5318b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_53188b
        mov dword ptr ds : [edx+4], eax
        public_53188b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_53189e
        mov dword ptr ds : [edx+4], ecx
        jmp public_5318ad
        public_53189e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5318ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_5318ad
        public_5318ab : nop
        mov dword ptr ds : [edx], ecx
        public_5318ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5318b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_5318dc
        mov dword ptr ds : [edi+4], ecx
        public_5318dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5318ef
        mov dword ptr ds : [edi+4], edx
        jmp public_5318fd
        public_5318ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_5318fa
        mov dword ptr ds : [edi], edx
        jmp public_5318fd
        public_5318fa : nop
        mov dword ptr ds : [edi+8], edx
        public_5318fd : nop
        mov dword ptr ds : [edx], ecx
        public_5318ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_531902 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_531771
        public_53190e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x5316e0)
    }
}

#undef public_531749
#undef public_53175d
#undef public_531763
#undef public_531771
#undef public_5317b2
#undef public_5317cb
#undef public_5317de
#undef public_5317e9
#undef public_5317ec
#undef public_5317f1
#undef public_53181a
#undef public_531833
#undef public_531846
#undef public_531850
#undef public_531873
#undef public_53188b
#undef public_53189e
#undef public_5318ab
#undef public_5318ad
#undef public_5318b3
#undef public_5318dc
#undef public_5318ef
#undef public_5318fa
#undef public_5318fd
#undef public_5318ff
#undef public_531902
#undef public_53190e
