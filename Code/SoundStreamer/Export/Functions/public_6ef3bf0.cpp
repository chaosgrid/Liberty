#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2af0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ef5);

#define public_6ef3c10 _public_6ef3c10
#define public_6ef3c34 _public_6ef3c34
#define public_6ef3c38 _public_6ef3c38
#define public_6ef3c3d _public_6ef3c3d
#define public_6ef3c8c _public_6ef3c8c
#define public_6ef3ca7 _public_6ef3ca7
#define public_6ef3cc7 _public_6ef3cc7
#define public_6ef3cce _public_6ef3cce
#define public_6ef3ce1 _public_6ef3ce1
#define public_6ef3cf2 _public_6ef3cf2

PROC_DECLARE(0x6ef3bf0, internal_6ef3bf0, public_6ef3bf0);
extern "C" NAKED register_t __cdecl internal_6ef3bf0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6ef3ce1
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6ef3c10 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3c38
        test cl, cl
        je public_6ef3c34
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3c38
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef3c10
        public_6ef3c34 : nop
        xor eax, eax
        jmp public_6ef3c3d
        public_6ef3c38 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef3c3d : nop
        test eax, eax
        pop ebx
        jne public_6ef3ce1
        push 1
        push 0x7C
        call public_6ef4ef5
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6ef3cce
        mov ecx, esi
        call public_6ef2af0
        lea eax, ds:[esi+0x70]
        mov dword ptr ds : [eax], offset public_6efc240
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6efc204
        mov dword ptr ds : [esi+4], offset public_6efc1f4
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x6C], ecx
        jne public_6ef3cc7
        mov dword ptr ds : [esi+0x6C], eax
        public_6ef3c8c : nop
        push ebp
        mov ecx, esi
        call public_6ef2d80
        mov edi, eax
        test edi, edi
        je public_6ef3cf2
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ef3ca7
        mov dword ptr ds : [eax], 0
        public_6ef3ca7 : nop
        mov ecx, esi
        call public_6ef2b50
        push esi
        call public_6ef4512
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6ef3cc7 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ef3c8c
        public_6ef3cce : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6ef3ce1 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6ef3cf2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3bf0)
    }
}

#undef public_6ef3c10
#undef public_6ef3c34
#undef public_6ef3c38
#undef public_6ef3c3d
#undef public_6ef3c8c
#undef public_6ef3ca7
#undef public_6ef3cc7
#undef public_6ef3cce
#undef public_6ef3ce1
#undef public_6ef3cf2
