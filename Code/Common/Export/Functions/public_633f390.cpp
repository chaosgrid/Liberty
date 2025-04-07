#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633f390);

#define public_633f3aa _public_633f3aa
#define public_633f3c5 _public_633f3c5
#define public_633f3df _public_633f3df
#define public_633f416 _public_633f416
#define public_633f431 _public_633f431
#define public_633f44c _public_633f44c
#define public_633f488 _public_633f488
#define public_633f4a6 _public_633f4a6
#define public_633f4c7 _public_633f4c7
#define public_633f4df _public_633f4df
#define public_633f4fd _public_633f4fd
#define public_633f51d _public_633f51d

PROC_DECLARE(0x633f390, internal_633f390, public_633f390);
extern "C" NAKED register_t __cdecl internal_633f390()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov edx, ecx
        lea esi, ss:[ebp+4]
        xor ecx, ecx
        cmp esi, ecx
        push edi
        jne public_633f3aa
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_633f3df
        public_633f3aa : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+4]
        jb public_633f3c5
        mov eax, 0x3F
        public_633f3c5 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+4], cl
        mov dword ptr ds : [edx], eax
        public_633f3df : nop
        lea eax, ss:[ebp+0x44]
        mov edi, dword ptr ds : [eax]
        lea esi, ds:[edx+0x44]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [edx+0x50], eax
        mov eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [edx+0x54], eax
        mov eax, dword ptr ss : [ebp+0x58]
        lea esi, ss:[ebp+0x60]
        cmp esi, ecx
        mov dword ptr ds : [edx+0x58], eax
        jne public_633f416
        mov dword ptr ds : [edx+0x5C], ecx
        mov byte ptr ds : [edx+0x60], cl
        jmp public_633f44c
        public_633f416 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebx, ds:[edx+0x60]
        jb public_633f431
        mov eax, 0x1F
        public_633f431 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+0x60], cl
        mov dword ptr ds : [edx+0x5C], eax
        public_633f44c : nop
        mov eax, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [edx+0x80], eax
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [edx+0x84], eax
        mov eax, dword ptr ss : [ebp+0x88]
        lea esi, ss:[ebp+0x90]
        cmp esi, ecx
        mov dword ptr ds : [edx+0x88], eax
        jne public_633f488
        mov dword ptr ds : [edx+0x8C], ecx
        mov byte ptr ds : [edx+0x90], cl
        jmp public_633f4c7
        public_633f488 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+0x90]
        jb public_633f4a6
        mov eax, 0x3F
        public_633f4a6 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+0x90], cl
        mov dword ptr ds : [edx+0x8C], eax
        public_633f4c7 : nop
        lea esi, ss:[ebp+0xD4]
        cmp esi, ecx
        jne public_633f4df
        mov dword ptr ds : [edx+0xD0], ecx
        mov byte ptr ds : [edx+0xD4], cl
        jmp public_633f51d
        public_633f4df : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+0xD4]
        jb public_633f4fd
        mov eax, 0x3F
        public_633f4fd : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx+0xD4], 0
        mov dword ptr ds : [edx+0xD0], eax
        public_633f51d : nop
        mov cl, byte ptr ss : [ebp+0x114]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [edx+0x114], cl
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x633f390)
    }
}

#undef public_633f3aa
#undef public_633f3c5
#undef public_633f3df
#undef public_633f416
#undef public_633f431
#undef public_633f44c
#undef public_633f488
#undef public_633f4a6
#undef public_633f4c7
#undef public_633f4df
#undef public_633f4fd
#undef public_633f51d
