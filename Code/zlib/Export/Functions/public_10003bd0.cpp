#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_100032d0);
CLANG_FORWARD_PROC_SYMBOL(public_100037b0);
CLANG_FORWARD_PROC_SYMBOL(public_10003bd0);
CLANG_FORWARD_PROC_SYMBOL(public_10005840);
CLANG_FORWARD_PROC_SYMBOL(public_10005a00);
CLANG_FORWARD_PROC_SYMBOL(public_1000a406);
CLANG_FORWARD_PROC_SYMBOL(public_1000a40c);

#define public_10003c15 _public_10003c15
#define public_10003c30 _public_10003c30
#define public_10003c86 _public_10003c86
#define public_10003c8c _public_10003c8c
#define public_10003cfb _public_10003cfb
#define public_10003d16 _public_10003d16
#define public_10003d1d _public_10003d1d
#define public_10003d21 _public_10003d21
#define public_10003d43 _public_10003d43
#define public_10003d4f _public_10003d4f
#define public_10003d8e _public_10003d8e
#define public_10003db1 _public_10003db1
#define public_10003dd1 _public_10003dd1
#define public_10003ddb _public_10003ddb
#define public_10003de7 _public_10003de7
#define public_10003df2 _public_10003df2

PROC_DECLARE(0x10003bd0, internal_10003bd0, public_10003bd0);
extern "C" NAKED register_t __cdecl internal_10003bd0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        je public_10003df2
        cmp byte ptr ss : [ebp+0x5C], 0x72
        jne public_10003df2
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, 0xFFFFFFFD
        je public_10003de7
        cmp eax, 0xFFFFFFFF
        je public_10003de7
        cmp eax, 1
        jne public_10003c15
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_10003c15 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp+0x10], ebx
        je public_10003d21
        jmp public_10003c30
        lea ecx, ds:[ecx]
        public_10003c30 : nop
        mov eax, dword ptr ss : [ebp+0x58]
        test eax, eax
        jne public_10003d43
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_10003c8c
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        jne public_10003c8c
        call public_1000a40c
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ss : [ebp+0x44]
        push eax
        push 0x4000
        push 1
        push ecx
        call public_1000a406
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [ebp+4], eax
        jne public_10003c86
        mov edx, dword ptr ss : [ebp+0x40]
        mov dword ptr ss : [ebp+0x3C], 1
        test byte ptr ds : [edx+0xC], 0x20
        jne public_10003ddb
        public_10003c86 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        mov dword ptr ss : [ebp], eax
        public_10003c8c : nop
        push 0
        push ebp
        call public_10005a00
        cmp eax, 1
        mov dword ptr ss : [ebp+0x38], eax
        jne public_10003cfb
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x4C]
        sub ecx, esi
        push ecx
        push esi
        push edx
        call public_10001a80
        mov dword ptr ss : [ebp+0x4C], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, ebp
        call public_100037b0
        cmp eax, dword ptr ss : [ebp+0x4C]
        jne public_10003d16
        mov eax, ebp
        call public_100037b0
        mov eax, ebp
        call public_100032d0
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        jne public_10003d1d
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0x14]
        push ebp
        call public_10005840
        push 0
        push 0
        push 0
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0x14], edi
        call public_10001a80
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x4C], eax
        public_10003cfb : nop
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        jne public_10003d21
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        jne public_10003d21
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_10003c30
        jmp public_10003d21
        public_10003d16 : nop
        mov dword ptr ss : [ebp+0x38], 0xFFFFFFFD
        public_10003d1d : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_10003d21 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x4C]
        sub ecx, esi
        push ecx
        push esi
        push edx
        call public_10001a80
        mov ecx, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ss : [ebp+0x4C], eax
        pop esi
        mov eax, ebx
        pop ebp
        sub eax, ecx
        pop ebx
        pop ecx
        ret 0xC
        public_10003d43 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp eax, ecx
        jbe public_10003d4f
        mov eax, ecx
        public_10003d4f : nop
        test eax, eax
        jbe public_10003d8e
        mov esi, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+0x10]
        add ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+4]
        add esi, eax
        sub edx, eax
        sub ecx, eax
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+0x10], edx
        mov dword ptr ss : [ebp+4], ecx
        public_10003d8e : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jbe public_10003db1
        mov edx, dword ptr ss : [ebp+0x40]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push 1
        push eax
        call public_1000a406
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 0x10
        sub ecx, eax
        mov dword ptr ss : [ebp+0x10], ecx
        public_10003db1 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x14]
        sub ebx, esi
        add edx, ebx
        add ecx, ebx
        test ebx, ebx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0x14], ecx
        jne public_10003dd1
        mov dword ptr ss : [ebp+0x3C], 1
        public_10003dd1 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        public_10003ddb : nop
        mov dword ptr ss : [ebp+0x38], 0xFFFFFFFF
        jmp public_10003d21
        public_10003de7 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0xC
        public_10003df2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x10003bd0)
    }
}

#undef public_10003c15
#undef public_10003c30
#undef public_10003c86
#undef public_10003c8c
#undef public_10003cfb
#undef public_10003d16
#undef public_10003d1d
#undef public_10003d21
#undef public_10003d43
#undef public_10003d4f
#undef public_10003d8e
#undef public_10003db1
#undef public_10003dd1
#undef public_10003ddb
#undef public_10003de7
#undef public_10003df2
