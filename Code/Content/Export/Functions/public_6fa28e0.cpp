#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa28e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa294e _public_6fa294e
#define public_6fa2962 _public_6fa2962
#define public_6fa2968 _public_6fa2968
#define public_6fa2976 _public_6fa2976
#define public_6fa299a _public_6fa299a
#define public_6fa29b7 _public_6fa29b7
#define public_6fa29d0 _public_6fa29d0
#define public_6fa29e3 _public_6fa29e3
#define public_6fa29ee _public_6fa29ee
#define public_6fa29f1 _public_6fa29f1
#define public_6fa29f6 _public_6fa29f6
#define public_6fa2a1f _public_6fa2a1f
#define public_6fa2a38 _public_6fa2a38
#define public_6fa2a4b _public_6fa2a4b
#define public_6fa2a55 _public_6fa2a55
#define public_6fa2a77 _public_6fa2a77
#define public_6fa2a8a _public_6fa2a8a
#define public_6fa2a97 _public_6fa2a97
#define public_6fa2a99 _public_6fa2a99
#define public_6fa2a9f _public_6fa2a9f
#define public_6fa2ac8 _public_6fa2ac8
#define public_6fa2adb _public_6fa2adb
#define public_6fa2ae6 _public_6fa2ae6
#define public_6fa2ae9 _public_6fa2ae9
#define public_6fa2aeb _public_6fa2aeb
#define public_6fa2aee _public_6fa2aee
#define public_6fa2afa _public_6fa2afa

PROC_DECLARE(0x6fa28e0, internal_6fa28e0, public_6fa28e0);
extern "C" NAKED register_t __cdecl internal_6fa28e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6fa294e
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6fa294e
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6fa294e
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6fa2968
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa2968
        public_6fa294e : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6fa2962
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_6fa2968
        public_6fa2962 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6fa2968
        mov dword ptr ds : [eax], ebx
        public_6fa2968 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov eax, ebx
        je public_6fa2afa
        public_6fa2976 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6fa2afa
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6fa2a55
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6fa29b7
        public_6fa299a : nop
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6fa2aee
        public_6fa29b7 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6fa29f6
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa29d0
        mov dword ptr ds : [edx+4], eax
        public_6fa29d0 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa29e3
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa29f1
        public_6fa29e3 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6fa29ee
        mov dword ptr ds : [edx], ecx
        jmp public_6fa29f1
        public_6fa29ee : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa29f1 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa29f6 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa2a1f
        mov dword ptr ds : [edi+4], ecx
        public_6fa2a1f : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa2a38
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2aeb
        public_6fa2a38 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa2a4b
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2aeb
        public_6fa2a4b : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2aeb
        public_6fa2a55 : nop
        cmp byte ptr ds : [edx+0x14], 0
        je public_6fa299a
        cmp eax, dword ptr ds : [ecx]
        jne public_6fa2a9f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa2a77
        mov dword ptr ds : [edx+4], eax
        public_6fa2a77 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa2a8a
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa2a99
        public_6fa2a8a : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6fa2a97
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2a99
        public_6fa2a97 : nop
        mov dword ptr ds : [edx], ecx
        public_6fa2a99 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa2a9f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa2ac8
        mov dword ptr ds : [edi+4], ecx
        public_6fa2ac8 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa2adb
        mov dword ptr ds : [edi+4], edx
        jmp public_6fa2ae9
        public_6fa2adb : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6fa2ae6
        mov dword ptr ds : [edi], edx
        jmp public_6fa2ae9
        public_6fa2ae6 : nop
        mov dword ptr ds : [edi+8], edx
        public_6fa2ae9 : nop
        mov dword ptr ds : [edx], ecx
        public_6fa2aeb : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa2aee : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa2976
        public_6fa2afa : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6fa28e0)
    }
}

#undef public_6fa294e
#undef public_6fa2962
#undef public_6fa2968
#undef public_6fa2976
#undef public_6fa299a
#undef public_6fa29b7
#undef public_6fa29d0
#undef public_6fa29e3
#undef public_6fa29ee
#undef public_6fa29f1
#undef public_6fa29f6
#undef public_6fa2a1f
#undef public_6fa2a38
#undef public_6fa2a4b
#undef public_6fa2a55
#undef public_6fa2a77
#undef public_6fa2a8a
#undef public_6fa2a97
#undef public_6fa2a99
#undef public_6fa2a9f
#undef public_6fa2ac8
#undef public_6fa2adb
#undef public_6fa2ae6
#undef public_6fa2ae9
#undef public_6fa2aeb
#undef public_6fa2aee
#undef public_6fa2afa
