#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59b6b0);

#define public_59b6f3 _public_59b6f3
#define public_59b6f7 _public_59b6f7
#define public_59b730 _public_59b730
#define public_59b741 _public_59b741
#define public_59b761 _public_59b761
#define public_59b77a _public_59b77a
#define public_59b7d2 _public_59b7d2
#define public_59b7ee _public_59b7ee
#define public_59b80f _public_59b80f
#define public_59b82c _public_59b82c
#define public_59b882 _public_59b882

PROC_DECLARE(0x59b6b0, internal_59b6b0, public_59b6b0);
extern "C" NAKED register_t __cdecl internal_59b6b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_5c60e4]
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_59b882
        mov esi, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        mov ecx, eax
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_5c619c]
        test eax, eax
        je public_59b6f7
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_59b6f3
        mov eax, dword ptr ds : [public_5c7078]
        public_59b6f3 : nop
        mov dword ptr ss : [esp+0x18], eax
        public_59b6f7 : nop
        mov edx, dword ptr ds : [ebx]
        cmp edx, 8
        jge public_59b882
        test esi, esi
        push ebp
        lea ecx, ds:[edx+1]
        push edi
        mov dword ptr ds : [ebx], ecx
        jne public_59b7d2
        test edx, edx
        je public_59b7d2
        lea ebp, ds:[ebx+0x110]
        lea edx, ds:[ebx+0x538]
        mov dword ptr ss : [esp+0x10], 7
        lea ecx, ds:[ecx]
        public_59b730 : nop
        lea eax, ds:[edx-0x94]
        test eax, eax
        jne public_59b741
        mov dword ptr ds : [edx-4], eax
        mov byte ptr ds : [edx], al
        jmp public_59b77a
        public_59b741 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[edx-0x94]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_59b761
        mov eax, 0x7F
        public_59b761 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [edx-4], eax
        public_59b77a : nop
        mov ecx, dword ptr ds : [edx-8]
        mov dword ptr ds : [edx+0x8C], ecx
        lea eax, ds:[edx+0x80]
        lea ecx, ds:[edx-0x14]
        mov edi, dword ptr ds : [ecx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ss:[ebp-0x18]
        mov edi, ebp
        mov ecx, 6
        mov esi, ebx
        rep movsd
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x84], edx
        sub edx, 0x94
        dec eax
        mov ebp, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_59b730
        mov ebx, dword ptr ss : [esp+0x14]
        xor edx, edx
        public_59b7d2 : nop
        mov esi, dword ptr ss : [esp+0x20]
        lea ebp, ds:[edx+2]
        imul ebp, 0x94
        add ebp, ebx
        test esi, esi
        jne public_59b7ee
        mov dword ptr ss : [ebp], esi
        mov byte ptr ss : [ebp+4], 0
        jmp public_59b82c
        public_59b7ee : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x80
        mov dword ptr ss : [esp+0x20], ecx
        jb public_59b80f
        mov ecx, 0x7F
        mov dword ptr ss : [esp+0x20], ecx
        public_59b80f : nop
        mov eax, ecx
        shr ecx, 2
        lea edi, ss:[ebp+4]
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x20]
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+4], 0
        mov dword ptr ss : [ebp], eax
        public_59b82c : nop
        mov ecx, edx
        imul ecx, 0x94
        lea eax, ds:[ecx+ebx]
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x1AC]
        mov dword ptr ds : [esi], ecx
        lea ecx, ds:[eax+0x12C]
        mov dword ptr ds : [eax+0x1B0], ecx
        lea ecx, ds:[edx+edx*2]
        lea ecx, ds:[ebx+ecx*8]
        mov dword ptr ds : [ecx+0x6C], esi
        xor esi, esi
        mov dword ptr ds : [ecx+0x68], 1
        mov dword ptr ds : [ecx+0x70], esi
        mov dword ptr ds : [ecx+0x74], esi
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[edx+edx*2+0xF]
        pop edi
        mov dword ptr ds : [ebx+edx*8], 1
        mov dword ptr ds : [eax+0x1B8], ecx
        pop ebp
        public_59b882 : nop
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x59b6b0)
    }
}

#undef public_59b6f3
#undef public_59b6f7
#undef public_59b730
#undef public_59b741
#undef public_59b761
#undef public_59b77a
#undef public_59b7d2
#undef public_59b7ee
#undef public_59b80f
#undef public_59b82c
#undef public_59b882
