#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_52ad20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_52ad8e _public_52ad8e
#define public_52ada2 _public_52ada2
#define public_52ada8 _public_52ada8
#define public_52adb6 _public_52adb6
#define public_52adda _public_52adda
#define public_52adf7 _public_52adf7
#define public_52ae10 _public_52ae10
#define public_52ae23 _public_52ae23
#define public_52ae2e _public_52ae2e
#define public_52ae31 _public_52ae31
#define public_52ae36 _public_52ae36
#define public_52ae5f _public_52ae5f
#define public_52ae78 _public_52ae78
#define public_52ae8b _public_52ae8b
#define public_52ae95 _public_52ae95
#define public_52aeb7 _public_52aeb7
#define public_52aeca _public_52aeca
#define public_52aed7 _public_52aed7
#define public_52aed9 _public_52aed9
#define public_52aedf _public_52aedf
#define public_52af08 _public_52af08
#define public_52af1b _public_52af1b
#define public_52af26 _public_52af26
#define public_52af29 _public_52af29
#define public_52af2b _public_52af2b
#define public_52af2e _public_52af2e
#define public_52af3a _public_52af3a

PROC_DECLARE(0x52ad20, internal_52ad20, public_52ad20);
extern "C" NAKED register_t __cdecl internal_52ad20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5b7e84
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
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_52ad8e
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_52ad8e
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_52ad8e
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_52ada8
        mov dword ptr ds : [eax+8], ebx
        jmp public_52ada8
        public_52ad8e : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_52ada2
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_52ada8
        public_52ada2 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_52ada8
        mov dword ptr ds : [eax], ebx
        public_52ada8 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov eax, ebx
        je public_52af3a
        public_52adb6 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_52af3a
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_52ae95
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_52adf7
        public_52adda : nop
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_52af2e
        public_52adf7 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_52ae36
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_52ae10
        mov dword ptr ds : [edx+4], eax
        public_52ae10 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_52ae23
        mov dword ptr ds : [edx+4], ecx
        jmp public_52ae31
        public_52ae23 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_52ae2e
        mov dword ptr ds : [edx], ecx
        jmp public_52ae31
        public_52ae2e : nop
        mov dword ptr ds : [edx+8], ecx
        public_52ae31 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_52ae36 : nop
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
        je public_52ae5f
        mov dword ptr ds : [edi+4], ecx
        public_52ae5f : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_52ae78
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52af2b
        public_52ae78 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_52ae8b
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52af2b
        public_52ae8b : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52af2b
        public_52ae95 : nop
        cmp byte ptr ds : [edx+0x14], 0
        je public_52adda
        cmp eax, dword ptr ds : [ecx]
        jne public_52aedf
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_52aeb7
        mov dword ptr ds : [edx+4], eax
        public_52aeb7 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_52aeca
        mov dword ptr ds : [edx+4], ecx
        jmp public_52aed9
        public_52aeca : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_52aed7
        mov dword ptr ds : [edx+8], ecx
        jmp public_52aed9
        public_52aed7 : nop
        mov dword ptr ds : [edx], ecx
        public_52aed9 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_52aedf : nop
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
        je public_52af08
        mov dword ptr ds : [edi+4], ecx
        public_52af08 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_52af1b
        mov dword ptr ds : [edi+4], edx
        jmp public_52af29
        public_52af1b : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_52af26
        mov dword ptr ds : [edi], edx
        jmp public_52af29
        public_52af26 : nop
        mov dword ptr ds : [edi+8], edx
        public_52af29 : nop
        mov dword ptr ds : [edx], ecx
        public_52af2b : nop
        mov dword ptr ds : [ecx+4], edx
        public_52af2e : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_52adb6
        public_52af3a : nop
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
        UNREACHABLE_TRAP(0x52ad20)
    }
}

#undef public_52ad8e
#undef public_52ada2
#undef public_52ada8
#undef public_52adb6
#undef public_52adda
#undef public_52adf7
#undef public_52ae10
#undef public_52ae23
#undef public_52ae2e
#undef public_52ae31
#undef public_52ae36
#undef public_52ae5f
#undef public_52ae78
#undef public_52ae8b
#undef public_52ae95
#undef public_52aeb7
#undef public_52aeca
#undef public_52aed7
#undef public_52aed9
#undef public_52aedf
#undef public_52af08
#undef public_52af1b
#undef public_52af26
#undef public_52af29
#undef public_52af2b
#undef public_52af2e
#undef public_52af3a
