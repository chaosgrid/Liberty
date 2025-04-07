#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f200);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f310);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f990);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3f9a9 _public_6f3f9a9
#define public_6f3f9ba _public_6f3f9ba
#define public_6f3f9d4 _public_6f3f9d4
#define public_6f3f9eb _public_6f3f9eb
#define public_6f3fa1e _public_6f3fa1e
#define public_6f3fa22 _public_6f3fa22
#define public_6f3fa34 _public_6f3fa34
#define public_6f3fa78 _public_6f3fa78
#define public_6f3fa8e _public_6f3fa8e
#define public_6f3faae _public_6f3faae
#define public_6f3fab9 _public_6f3fab9
#define public_6f3face _public_6f3face
#define public_6f3faee _public_6f3faee
#define public_6f3faff _public_6f3faff
#define public_6f3fb2c _public_6f3fb2c
#define public_6f3fb42 _public_6f3fb42
#define public_6f3fb4e _public_6f3fb4e
#define public_6f3fb57 _public_6f3fb57
#define public_6f3fb5f _public_6f3fb5f
#define public_6f3fb6b _public_6f3fb6b
#define public_6f3fb8a _public_6f3fb8a

PROC_DECLARE(0x6f3f990, internal_6f3f990, public_6f3f990);
extern "C" NAKED register_t __cdecl internal_6f3f990()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+8], esi
        mov ebp, ecx
        jae public_6f3f9a9
        call dword ptr ds : [public_6f5a044]
        public_6f3f9a9 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        sub ebx, esi
        cmp ecx, ebx
        jae public_6f3f9ba
        mov ebx, ecx
        public_6f3f9ba : nop
        cmp ebp, edi
        jne public_6f3fa78
        mov eax, dword ptr ss : [ebp+8]
        add ebx, esi
        or edi, 0xFFFFFFFF
        cmp eax, ebx
        jae public_6f3f9d4
        call dword ptr ds : [public_6f5a044]
        public_6f3f9d4 : nop
        mov ecx, ebp
        call public_6f3f310
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_6f3f9eb
        mov edi, eax
        test edi, edi
        jbe public_6f3fa22
        public_6f3f9eb : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, ebx
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6f5a078]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6f3ed70
        test al, al
        je public_6f3fa1e
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+eax], 0
        public_6f3fa1e : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6f3fa22 : nop
        mov ecx, ebp
        mov edi, esi
        call public_6f3f310
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        jae public_6f3fa34
        mov edi, eax
        public_6f3fa34 : nop
        test edi, edi
        jbe public_6f3fb8a
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6f5a078]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6f3ed70
        test al, al
        je public_6f3fb8a
        push esi
        mov ecx, ebp
        call public_6f3ed50
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f3fa78 : nop
        xor edx, edx
        cmp ebx, edx
        jbe public_6f3faee
        cmp ebx, eax
        jne public_6f3faee
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f3fa8e
        mov eax, offset public_6f5af04
        public_6f3fa8e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f3faee
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_6f3fab9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f3faae
        cmp cl, 0xFF
        je public_6f3faae
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f3fab9
        public_6f3faae : nop
        push eax
        call public_6f57e26
        add esp, 4
        xor edx, edx
        public_6f3fab9 : nop
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f3face
        mov eax, offset public_6f5af04
        public_6f3face : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        inc cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f3faee : nop
        mov ecx, ebp
        call public_6f3fba0
        cmp eax, ebx
        jae public_6f3faff
        call dword ptr ds : [public_6f5a01c]
        public_6f3faff : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_6f3fb2c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f3fb2c
        cmp cl, 0xFF
        je public_6f3fb2c
        test ebx, ebx
        jne public_6f3fb57
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, ebp
        call public_6f3c520
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f3fb2c : nop
        test ebx, ebx
        jne public_6f3fb42
        push 1
        mov ecx, ebp
        call public_6f3c520
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f3fb42 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f3fb4e
        cmp eax, ebx
        jae public_6f3fb5f
        public_6f3fb4e : nop
        push 1
        mov ecx, ebp
        call public_6f3c520
        public_6f3fb57 : nop
        mov ecx, ebp
        push ebx
        call public_6f3f200
        public_6f3fb5f : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f3fb6b
        mov eax, offset public_6f5af04
        public_6f3fb6b : nop
        mov edi, dword ptr ss : [ebp+4]
        add esi, eax
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6f3fb8a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3f990)
    }
}

#undef public_6f3f9a9
#undef public_6f3f9ba
#undef public_6f3f9d4
#undef public_6f3f9eb
#undef public_6f3fa1e
#undef public_6f3fa22
#undef public_6f3fa34
#undef public_6f3fa78
#undef public_6f3fa8e
#undef public_6f3faae
#undef public_6f3fab9
#undef public_6f3face
#undef public_6f3faee
#undef public_6f3faff
#undef public_6f3fb2c
#undef public_6f3fb42
#undef public_6f3fb4e
#undef public_6f3fb57
#undef public_6f3fb5f
#undef public_6f3fb6b
#undef public_6f3fb8a
