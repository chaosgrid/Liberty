#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9d70);

#define public_4d9d90 _public_4d9d90
#define public_4d9da1 _public_4d9da1
#define public_4d9db9 _public_4d9db9
#define public_4d9de0 _public_4d9de0
#define public_4d9df5 _public_4d9df5
#define public_4d9e0f _public_4d9e0f
#define public_4d9e38 _public_4d9e38
#define public_4d9e49 _public_4d9e49
#define public_4d9e63 _public_4d9e63
#define public_4d9e81 _public_4d9e81
#define public_4d9ef5 _public_4d9ef5

PROC_DECLARE(0x4d9d70, internal_4d9d70, public_4d9d70);
extern "C" NAKED register_t __cdecl internal_4d9d70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, dword ptr ss : [esp+8]
        je public_4d9ef5
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        lea edx, ds:[ecx+0xAC]
        xor ebx, ebx
        mov edi, edi
        public_4d9d90 : nop
        lea esi, ss:[ebp+4]
        cmp esi, ebx
        jne public_4d9da1
        mov dword ptr ds : [ecx], ebx
        mov byte ptr ds : [edx-0xA8], bl
        jmp public_4d9de0
        public_4d9da1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4d9db9
        mov eax, 0x1F
        public_4d9db9 : nop
        lea ebp, ds:[edx-0xA8]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov byte ptr ds : [eax+ebp], bl
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        public_4d9de0 : nop
        lea esi, ss:[ebp+0x28]
        cmp esi, ebx
        jne public_4d9df5
        mov dword ptr ds : [edx-0x88], ebx
        mov byte ptr ds : [edx-0x84], bl
        jmp public_4d9e38
        public_4d9df5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4d9e0f
        mov eax, 0x7F
        public_4d9e0f : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x84]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov byte ptr ds : [edx+eax-0x84], bl
        mov dword ptr ds : [edx-0x88], eax
        public_4d9e38 : nop
        lea esi, ss:[ebp+0xAC]
        cmp esi, ebx
        jne public_4d9e49
        mov dword ptr ds : [edx-4], ebx
        mov byte ptr ds : [edx], bl
        jmp public_4d9e81
        public_4d9e49 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4d9e63
        mov eax, 0x7F
        public_4d9e63 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov byte ptr ds : [edx+eax], bl
        mov dword ptr ds : [edx-4], eax
        public_4d9e81 : nop
        mov eax, dword ptr ss : [ebp+0x12C]
        mov dword ptr ds : [edx+0x80], eax
        mov eax, dword ptr ss : [ebp+0x130]
        mov dword ptr ds : [edx+0x84], eax
        mov eax, dword ptr ss : [ebp+0x134]
        mov dword ptr ds : [edx+0x88], eax
        mov eax, dword ptr ss : [ebp+0x138]
        mov dword ptr ds : [edx+0x8C], eax
        mov al, byte ptr ss : [ebp+0x13C]
        mov byte ptr ds : [edx+0x90], al
        mov eax, dword ptr ss : [ebp+0x140]
        mov dword ptr ds : [edx+0x94], eax
        mov eax, dword ptr ss : [ebp+0x144]
        mov dword ptr ds : [edx+0x98], eax
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 0x148
        add edx, 0x148
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_4d9d90
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4d9ef5 : nop
        ret 
        UNREACHABLE_TRAP(0x4d9d70)
    }
}

#undef public_4d9d90
#undef public_4d9da1
#undef public_4d9db9
#undef public_4d9de0
#undef public_4d9df5
#undef public_4d9e0f
#undef public_4d9e38
#undef public_4d9e49
#undef public_4d9e63
#undef public_4d9e81
#undef public_4d9ef5
