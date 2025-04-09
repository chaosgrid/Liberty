#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4336f0);
CLANG_FORWARD_PROC_SYMBOL(public_433da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_433759 _public_433759
#define public_43376d _public_43376d
#define public_433773 _public_433773
#define public_433781 _public_433781
#define public_4337c2 _public_4337c2
#define public_4337db _public_4337db
#define public_4337ee _public_4337ee
#define public_4337f9 _public_4337f9
#define public_4337fc _public_4337fc
#define public_433801 _public_433801
#define public_43382a _public_43382a
#define public_433843 _public_433843
#define public_433856 _public_433856
#define public_433860 _public_433860
#define public_433883 _public_433883
#define public_43389b _public_43389b
#define public_4338ae _public_4338ae
#define public_4338bb _public_4338bb
#define public_4338bd _public_4338bd
#define public_4338c3 _public_4338c3
#define public_4338ec _public_4338ec
#define public_4338ff _public_4338ff
#define public_43390a _public_43390a
#define public_43390d _public_43390d
#define public_43390f _public_43390f
#define public_433912 _public_433912
#define public_43391e _public_43391e

PROC_DECLARE(0x4336f0, internal_4336f0, public_4336f0);
extern "C" NAKED register_t __cdecl internal_4336f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_433da0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_433759
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_433759
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_433759
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_433773
        mov dword ptr ds : [eax+8], ebx
        jmp public_433773
        public_433759 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_43376d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_433773
        public_43376d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_433773
        mov dword ptr ds : [eax], ebx
        public_433773 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_43391e
        public_433781 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_43391e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_433860
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_4337c2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_433912
        public_4337c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_433801
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4337db
        mov dword ptr ds : [edx+4], eax
        public_4337db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4337ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_4337fc
        public_4337ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4337f9
        mov dword ptr ds : [edx], ecx
        jmp public_4337fc
        public_4337f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4337fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_433801 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_43382a
        mov dword ptr ds : [edi+4], ecx
        public_43382a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_433843
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43390f
        public_433843 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_433856
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43390f
        public_433856 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43390f
        public_433860 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_433883
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_433912
        public_433883 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4338c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_43389b
        mov dword ptr ds : [edx+4], eax
        public_43389b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4338ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_4338bd
        public_4338ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4338bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_4338bd
        public_4338bb : nop
        mov dword ptr ds : [edx], ecx
        public_4338bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4338c3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4338ec
        mov dword ptr ds : [edi+4], ecx
        public_4338ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4338ff
        mov dword ptr ds : [edi+4], edx
        jmp public_43390d
        public_4338ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_43390a
        mov dword ptr ds : [edi], edx
        jmp public_43390d
        public_43390a : nop
        mov dword ptr ds : [edi+8], edx
        public_43390d : nop
        mov dword ptr ds : [edx], ecx
        public_43390f : nop
        mov dword ptr ds : [ecx+4], edx
        public_433912 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_433781
        public_43391e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4336f0)
    }
}

#undef public_433759
#undef public_43376d
#undef public_433773
#undef public_433781
#undef public_4337c2
#undef public_4337db
#undef public_4337ee
#undef public_4337f9
#undef public_4337fc
#undef public_433801
#undef public_43382a
#undef public_433843
#undef public_433856
#undef public_433860
#undef public_433883
#undef public_43389b
#undef public_4338ae
#undef public_4338bb
#undef public_4338bd
#undef public_4338c3
#undef public_4338ec
#undef public_4338ff
#undef public_43390a
#undef public_43390d
#undef public_43390f
#undef public_433912
#undef public_43391e
