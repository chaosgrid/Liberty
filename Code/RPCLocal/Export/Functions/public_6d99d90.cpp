#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d99dd9 _public_6d99dd9
#define public_6d99df1 _public_6d99df1
#define public_6d99e01 _public_6d99e01
#define public_6d99e20 _public_6d99e20
#define public_6d99e30 _public_6d99e30
#define public_6d99e4f _public_6d99e4f
#define public_6d99e5f _public_6d99e5f
#define public_6d99e7d _public_6d99e7d
#define public_6d99e8d _public_6d99e8d
#define public_6d99eaa _public_6d99eaa
#define public_6d99eba _public_6d99eba
#define public_6d99edf _public_6d99edf
#define public_6d99eef _public_6d99eef
#define public_6d99f19 _public_6d99f19
#define public_6d99f39 _public_6d99f39
#define public_6d99f6a _public_6d99f6a

PROC_DECLARE(0x6d99d90, internal_6d99d90, public_6d99d90);
extern "C" NAKED register_t __cdecl internal_6d99d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d99dd9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d99dd9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6d99df1
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99df1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99e01
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99e01 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99e20
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99e20 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99e30
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99e30 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99e4f
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99e4f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99e5f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99e5f : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [ebp+0x2C]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99e7d
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99e7d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99e8d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99e8d : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x30]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99eaa
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99eaa : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99eba
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99eba : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6d99f19
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99edf
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99edf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99eef
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99eef : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x34]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6d99f19 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d99f39
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99f39 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6d99f6a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d99f6a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6d99d90)
    }
}

#undef public_6d99dd9
#undef public_6d99df1
#undef public_6d99e01
#undef public_6d99e20
#undef public_6d99e30
#undef public_6d99e4f
#undef public_6d99e5f
#undef public_6d99e7d
#undef public_6d99e8d
#undef public_6d99eaa
#undef public_6d99eba
#undef public_6d99edf
#undef public_6d99eef
#undef public_6d99f19
#undef public_6d99f39
#undef public_6d99f6a
