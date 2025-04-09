#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3c20);

#define public_4a3c40 _public_4a3c40
#define public_4a3c4f _public_4a3c4f
#define public_4a3c67 _public_4a3c67
#define public_4a3c8c _public_4a3c8c
#define public_4a3cb7 _public_4a3cb7
#define public_4a3ccf _public_4a3ccf
#define public_4a3cf4 _public_4a3cf4
#define public_4a3d02 _public_4a3d02
#define public_4a3d1a _public_4a3d1a
#define public_4a3d38 _public_4a3d38
#define public_4a3d51 _public_4a3d51

PROC_DECLARE(0x4a3c20, internal_4a3c20, public_4a3c20);
extern "C" NAKED register_t __cdecl internal_4a3c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, eax
        je public_4a3d51
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        push edi
        lea edx, ss:[ebp+0x5C]
        xor ebx, ebx
        lea ecx, ds:[ecx]
        public_4a3c40 : nop
        lea esi, ds:[eax+4]
        cmp esi, ebx
        jne public_4a3c4f
        mov dword ptr ss : [ebp], ebx
        mov byte ptr ds : [edx-0x58], bl
        jmp public_4a3c8c
        public_4a3c4f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3c67
        mov eax, 0x1F
        public_4a3c67 : nop
        mov ecx, eax
        mov ebx, ecx
        lea ebp, ds:[edx-0x58]
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+ebp], bl
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_4a3c8c : nop
        lea ecx, ds:[eax+0x24]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[edx-0x38]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        lea esi, ds:[eax+0x38]
        cmp esi, ebx
        mov dword ptr ds : [edx-0x2C], ecx
        jne public_4a3cb7
        mov dword ptr ds : [edx-0x28], ebx
        mov byte ptr ds : [edx-0x24], bl
        jmp public_4a3cf4
        public_4a3cb7 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3ccf
        mov eax, 0x1F
        public_4a3ccf : nop
        mov ecx, eax
        mov ebx, ecx
        lea ebp, ds:[edx-0x24]
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+ebp], bl
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx-0x28], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_4a3cf4 : nop
        lea esi, ds:[eax+0x5C]
        cmp esi, ebx
        jne public_4a3d02
        mov dword ptr ds : [edx-4], ebx
        mov byte ptr ds : [edx], bl
        jmp public_4a3d38
        public_4a3d02 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3d1a
        mov eax, 0x1F
        public_4a3d1a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [edx+eax], bl
        mov dword ptr ds : [edx-4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_4a3d38 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add ebp, 0x7C
        add edx, 0x7C
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        jne public_4a3c40
        pop edi
        pop esi
        pop ebx
        public_4a3d51 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4a3c20)
    }
}

#undef public_4a3c40
#undef public_4a3c4f
#undef public_4a3c67
#undef public_4a3c8c
#undef public_4a3cb7
#undef public_4a3ccf
#undef public_4a3cf4
#undef public_4a3d02
#undef public_4a3d1a
#undef public_4a3d38
#undef public_4a3d51
