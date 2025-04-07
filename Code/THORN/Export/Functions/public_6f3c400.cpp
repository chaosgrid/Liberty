#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c400);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f310);

#define public_6f3c426 _public_6f3c426
#define public_6f3c437 _public_6f3c437
#define public_6f3c44e _public_6f3c44e
#define public_6f3c47f _public_6f3c47f
#define public_6f3c48f _public_6f3c48f
#define public_6f3c4a3 _public_6f3c4a3
#define public_6f3c4be _public_6f3c4be
#define public_6f3c4de _public_6f3c4de
#define public_6f3c4fa _public_6f3c4fa
#define public_6f3c515 _public_6f3c515

PROC_DECLARE(0x6f3c400, internal_6f3c400, public_6f3c400);
extern "C" NAKED register_t __cdecl internal_6f3c400()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov ebx, ecx
        xor esi, esi
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jbe public_6f3c426
        or ebp, 0xFFFFFFFF
        public_6f3c426 : nop
        cmp ebx, edi
        jne public_6f3c48f
        or edi, 0xFFFFFFFF
        cmp ebp, esi
        jbe public_6f3c437
        call dword ptr ds : [public_6f5a044]
        public_6f3c437 : nop
        mov ecx, ebx
        call public_6f3f310
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, 0xFFFFFFFF
        jae public_6f3c44e
        mov edi, eax
        cmp edi, esi
        jbe public_6f3c47f
        public_6f3c44e : nop
        mov ecx, dword ptr ds : [ebx+4]
        add ecx, ebp
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6f5a078]
        mov esi, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebx
        call public_6f3ed70
        test al, al
        je public_6f3c47f
        push esi
        mov ecx, ebx
        call public_6f3ed50
        public_6f3c47f : nop
        mov ecx, ebx
        call public_6f3f310
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6f3c48f : nop
        cmp ebp, esi
        jbe public_6f3c4de
        cmp ebp, eax
        jne public_6f3c4de
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6f3c4a3
        mov eax, offset public_6f5af04
        public_6f3c4a3 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f3c4de
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6f3c4be
        mov eax, offset public_6f5af04
        public_6f3c4be : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        mov byte ptr ds : [eax-1], cl
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6f3c4de : nop
        push 1
        push ebp
        mov ecx, ebx
        call public_6f3ed70
        test al, al
        je public_6f3c515
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, offset public_6f5af04
        je public_6f3c4fa
        mov esi, edi
        public_6f3c4fa : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call public_6f3ed50
        public_6f3c515 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f3c400)
    }
}

#undef public_6f3c426
#undef public_6f3c437
#undef public_6f3c44e
#undef public_6f3c47f
#undef public_6f3c48f
#undef public_6f3c4a3
#undef public_6f3c4be
#undef public_6f3c4de
#undef public_6f3c4fa
#undef public_6f3c515
