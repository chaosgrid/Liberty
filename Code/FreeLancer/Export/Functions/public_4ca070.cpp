#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca070);

#define public_4ca0b5 _public_4ca0b5
#define public_4ca0c6 _public_4ca0c6
#define public_4ca0e6 _public_4ca0e6
#define public_4ca0ff _public_4ca0ff
#define public_4ca157 _public_4ca157
#define public_4ca173 _public_4ca173
#define public_4ca194 _public_4ca194
#define public_4ca1b1 _public_4ca1b1
#define public_4ca20c _public_4ca20c

PROC_DECLARE(0x4ca070, internal_4ca070, public_4ca070);
extern "C" NAKED register_t __cdecl internal_4ca070()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx]
        cmp edx, 8
        mov dword ptr ss : [esp+8], ebx
        jge public_4ca20c
        lea eax, ds:[edx+1]
        push ebp
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        push esi
        push edi
        jne public_4ca157
        test edx, edx
        je public_4ca157
        lea ebp, ds:[ebx+0x110]
        lea edx, ds:[ebx+0x538]
        mov dword ptr ss : [esp+0x10], 7
        public_4ca0b5 : nop
        lea ecx, ds:[edx-0x94]
        test ecx, ecx
        jne public_4ca0c6
        mov dword ptr ds : [edx-4], ecx
        mov byte ptr ds : [edx], cl
        jmp public_4ca0ff
        public_4ca0c6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[edx-0x94]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4ca0e6
        mov eax, 0x7F
        public_4ca0e6 : nop
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
        public_4ca0ff : nop
        mov eax, dword ptr ds : [edx-8]
        mov dword ptr ds : [edx+0x8C], eax
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
        jne public_4ca0b5
        mov ebx, dword ptr ss : [esp+0x14]
        xor edx, edx
        public_4ca157 : nop
        mov esi, dword ptr ss : [esp+0x20]
        lea ebp, ds:[edx+2]
        imul ebp, 0x94
        add ebp, ebx
        test esi, esi
        jne public_4ca173
        mov dword ptr ss : [ebp], esi
        mov byte ptr ss : [ebp+4], 0
        jmp public_4ca1b1
        public_4ca173 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x80
        mov dword ptr ss : [esp+0x20], ecx
        jb public_4ca194
        mov ecx, 0x7F
        mov dword ptr ss : [esp+0x20], ecx
        public_4ca194 : nop
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
        public_4ca1b1 : nop
        mov ecx, edx
        imul ecx, 0x94
        lea eax, ds:[ecx+ebx]
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1AC], ecx
        lea esi, ds:[eax+0x1AC]
        lea ecx, ds:[eax+0x12C]
        mov dword ptr ds : [eax+0x1B0], ecx
        lea ecx, ds:[edx+edx*2]
        lea ecx, ds:[ebx+ecx*8]
        mov dword ptr ds : [ecx+0x6C], esi
        xor esi, esi
        pop edi
        mov dword ptr ds : [ecx+0x70], esi
        mov dword ptr ds : [ecx+0x74], esi
        mov dword ptr ds : [ecx+0x68], 1
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[edx+edx*2+0xF]
        pop esi
        mov dword ptr ds : [ebx+edx*8], 1
        mov dword ptr ds : [eax+0x1B8], ecx
        pop ebp
        public_4ca20c : nop
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4ca070)
    }
}

#undef public_4ca0b5
#undef public_4ca0c6
#undef public_4ca0e6
#undef public_4ca0ff
#undef public_4ca157
#undef public_4ca173
#undef public_4ca194
#undef public_4ca1b1
#undef public_4ca20c
