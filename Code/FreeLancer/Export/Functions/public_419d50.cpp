#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419d50);

#define public_419d91 _public_419d91
#define public_419dc7 _public_419dc7
#define public_419de6 _public_419de6
#define public_419df2 _public_419df2
#define public_419dfc _public_419dfc
#define public_419e05 _public_419e05
#define public_419e3b _public_419e3b

PROC_DECLARE(0x419d50, internal_419d50, public_419d50);
extern "C" NAKED register_t __cdecl internal_419d50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+4], esi
        jne public_419e3b
        cmp dword ptr ds : [esi+0x1C], edx
        jne public_419e3b
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        lea ebp, ds:[esi+4]
        jbe public_419d91
        call dword ptr ds : [public_5c7070]
        xor edx, edx
        public_419d91 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_419dc7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_419dc7
        cmp cl, 0xFF
        je public_419dc7
        cmp ebx, edx
        jne public_419dfc
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_419dc7 : nop
        cmp ebx, edx
        jne public_419de6
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_419de6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_419df2
        cmp eax, ebx
        jae public_419e05
        public_419df2 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        public_419dfc : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_5c7074]
        public_419e05 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_419e3b : nop
        xor al, al
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x419d50)
    }
}

#undef public_419d91
#undef public_419dc7
#undef public_419de6
#undef public_419df2
#undef public_419dfc
#undef public_419e05
#undef public_419e3b
