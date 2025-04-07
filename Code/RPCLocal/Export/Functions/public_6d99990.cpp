#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d999d9 _public_6d999d9
#define public_6d999f1 _public_6d999f1
#define public_6d99a01 _public_6d99a01
#define public_6d99a20 _public_6d99a20
#define public_6d99a30 _public_6d99a30
#define public_6d99a4d _public_6d99a4d
#define public_6d99a5d _public_6d99a5d
#define public_6d99a7c _public_6d99a7c
#define public_6d99a7e _public_6d99a7e
#define public_6d99a8d _public_6d99a8d
#define public_6d99a9d _public_6d99a9d
#define public_6d99abd _public_6d99abd
#define public_6d99acd _public_6d99acd
#define public_6d99af4 _public_6d99af4
#define public_6d99b14 _public_6d99b14
#define public_6d99b45 _public_6d99b45

PROC_DECLARE(0x6d99990, internal_6d99990, public_6d99990);
extern "C" NAKED register_t __cdecl internal_6d99990()
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
        je public_6d999d9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d999d9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6d999f1
        mov dword ptr ds : [ebx+0xC], edi
        public_6d999f1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99a01
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99a01 : nop
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
        jbe public_6d99a20
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99a20 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99a30
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99a30 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99a4d
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99a4d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99a5d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99a5d : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x2C]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6d99a7c
        push eax
        call dword ptr ds : [public_6db31ec]
        add esp, 4
        inc al
        jmp public_6d99a7e
        public_6d99a7c : nop
        xor al, al
        public_6d99a7e : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6d99a8d
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99a8d : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6d99a9d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99a9d : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        mov dword ptr ds : [esi], ecx
        je public_6d99af4
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        movzx eax, al
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6d99abd
        mov dword ptr ds : [ebx+0xC], edi
        public_6d99abd : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6d99acd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99acd : nop
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
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
        public_6d99af4 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d99b14
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99b14 : nop
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
        jbe public_6d99b45
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d99b45 : nop
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
        UNREACHABLE_TRAP(0x6d99990)
    }
}

#undef public_6d999d9
#undef public_6d999f1
#undef public_6d99a01
#undef public_6d99a20
#undef public_6d99a30
#undef public_6d99a4d
#undef public_6d99a5d
#undef public_6d99a7c
#undef public_6d99a7e
#undef public_6d99a8d
#undef public_6d99a9d
#undef public_6d99abd
#undef public_6d99acd
#undef public_6d99af4
#undef public_6d99b14
#undef public_6d99b45
