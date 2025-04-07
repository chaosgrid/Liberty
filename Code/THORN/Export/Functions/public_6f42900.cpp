#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f42900);

#define public_6f4293c _public_6f4293c
#define public_6f42963 _public_6f42963
#define public_6f42973 _public_6f42973
#define public_6f4297f _public_6f4297f
#define public_6f42989 _public_6f42989
#define public_6f42992 _public_6f42992
#define public_6f429b7 _public_6f429b7
#define public_6f429c4 _public_6f429c4
#define public_6f429ce _public_6f429ce
#define public_6f429d8 _public_6f429d8
#define public_6f429e8 _public_6f429e8
#define public_6f42a07 _public_6f42a07

PROC_DECLARE(0x6f42900, internal_6f42900, public_6f42900);
extern "C" NAKED register_t __cdecl internal_6f42900()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+8], edi
        je public_6f429ce
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        push ebx
        not ecx
        dec ecx
        push ebp
        mov ebp, ecx
        cmp ebp, 0xFFFFFFFD
        lea ebx, ds:[esi+0xD4]
        jbe public_6f4293c
        call dword ptr ds : [public_6f5a01c]
        public_6f4293c : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f42963
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f42963
        cmp cl, 0xFF
        je public_6f42963
        test ebp, ebp
        jne public_6f42989
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f429b7
        public_6f42963 : nop
        test ebp, ebp
        jne public_6f42973
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f429b7
        public_6f42973 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f4297f
        cmp eax, ebp
        jae public_6f42992
        public_6f4297f : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f42989 : nop
        mov ecx, ebx
        push ebp
        call dword ptr ds : [public_6f5a018]
        public_6f42992 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6f429b7 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f429c4
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f429c4 : nop
        pop ebp
        mov dword ptr ds : [esi+0xC8], ebx
        pop ebx
        jmp public_6f429d8
        public_6f429ce : nop
        mov dword ptr ds : [esi+0xC8], 0
        public_6f429d8 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        test eax, eax
        je public_6f429e8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f429e8 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        pop edi
        mov dword ptr ds : [esi+0xCC], eax
        pop esi
        je public_6f42a07
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        public_6f42a07 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f42900)
    }
}

#undef public_6f4293c
#undef public_6f42963
#undef public_6f42973
#undef public_6f4297f
#undef public_6f42989
#undef public_6f42992
#undef public_6f429b7
#undef public_6f429c4
#undef public_6f429ce
#undef public_6f429d8
#undef public_6f429e8
#undef public_6f42a07
