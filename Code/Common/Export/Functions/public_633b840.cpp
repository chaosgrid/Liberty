#include "Common-PCH.h"


#define public_633b8a4 _public_633b8a4
#define public_633b8bf _public_633b8bf
#define public_633b8d9 _public_633b8d9
#define public_633b910 _public_633b910
#define public_633b92b _public_633b92b
#define public_633b946 _public_633b946
#define public_633b982 _public_633b982
#define public_633b9a0 _public_633b9a0
#define public_633b9c1 _public_633b9c1
#define public_633b9ec _public_633b9ec
#define public_633ba0a _public_633ba0a
#define public_633ba3f _public_633ba3f

PROC_DECLARE(0x633b840, internal_633b840, public_633b840);
extern "C" NAKED register_t __cdecl internal_633b840()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        push esi
        push edi
        call dword ptr ds : [eax+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        jae public_633ba3f
        mov edi, dword ptr ds : [public_658a998]
        xor ebx, ebx
        cmp edi, ebx
        je public_633ba3f
        mov esi, dword ptr ds : [public_658a99c]
        sub esi, edi
        mov eax, 0xEA0EA0EB
        imul esi
        add edx, esi
        sar edx, 8
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_633ba3f
        mov edx, dword ptr ss : [esp+0x14]
        imul ecx, 0x118
        add ecx, edi
        push ebp
        mov ebp, ecx
        lea esi, ss:[ebp+4]
        cmp esi, ebx
        jne public_633b8a4
        mov dword ptr ds : [edx], ebx
        mov byte ptr ds : [edx+4], bl
        jmp public_633b8d9
        public_633b8a4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+4]
        jb public_633b8bf
        mov eax, 0x3F
        public_633b8bf : nop
        mov edi, ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+edx+4], bl
        mov dword ptr ds : [edx], eax
        public_633b8d9 : nop
        lea ecx, ss:[ebp+0x44]
        mov esi, dword ptr ds : [ecx]
        lea eax, ds:[edx+0x44]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [edx+0x50], eax
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [edx+0x54], ecx
        mov eax, dword ptr ss : [ebp+0x58]
        lea esi, ss:[ebp+0x60]
        cmp esi, ebx
        mov dword ptr ds : [edx+0x58], eax
        jne public_633b910
        mov dword ptr ds : [edx+0x5C], ebx
        mov byte ptr ds : [edx+0x60], bl
        jmp public_633b946
        public_633b910 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebx, ds:[edx+0x60]
        jb public_633b92b
        mov eax, 0x1F
        public_633b92b : nop
        mov edi, ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+edx+0x60], bl
        mov dword ptr ds : [edx+0x5C], eax
        public_633b946 : nop
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [edx+0x80], ecx
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [edx+0x84], eax
        mov ecx, dword ptr ss : [ebp+0x88]
        lea esi, ss:[ebp+0x90]
        cmp esi, ebx
        mov dword ptr ds : [edx+0x88], ecx
        jne public_633b982
        mov dword ptr ds : [edx+0x8C], ebx
        mov byte ptr ds : [edx+0x90], bl
        jmp public_633b9c1
        public_633b982 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+0x90]
        jb public_633b9a0
        mov eax, 0x3F
        public_633b9a0 : nop
        mov edi, ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+edx+0x90], bl
        mov dword ptr ds : [edx+0x8C], eax
        public_633b9c1 : nop
        lea esi, ss:[ebp+0xD4]
        cmp esi, ebx
        jne public_633b9ec
        mov dword ptr ds : [edx+0xD0], ebx
        mov byte ptr ds : [edx+0xD4], bl
        mov al, byte ptr ss : [ebp+0x114]
        pop ebp
        pop edi
        pop esi
        mov byte ptr ds : [edx+0x114], al
        mov al, 1
        pop ebx
        ret 8
        public_633b9ec : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+0xD4]
        jb public_633ba0a
        mov eax, 0x3F
        public_633ba0a : nop
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
        mov al, byte ptr ss : [ebp+0x114]
        pop ebp
        pop edi
        pop esi
        mov byte ptr ds : [edx+0x114], al
        mov al, 1
        pop ebx
        ret 8
        public_633ba3f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x633b840)
    }
}

#undef public_633b8a4
#undef public_633b8bf
#undef public_633b8d9
#undef public_633b910
#undef public_633b92b
#undef public_633b946
#undef public_633b982
#undef public_633b9a0
#undef public_633b9c1
#undef public_633b9ec
#undef public_633ba0a
#undef public_633ba3f
