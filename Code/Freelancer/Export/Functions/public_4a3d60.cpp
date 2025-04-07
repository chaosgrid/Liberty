#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3d60);

#define public_4a3d80 _public_4a3d80
#define public_4a3da5 _public_4a3da5
#define public_4a3dbd _public_4a3dbd
#define public_4a3dde _public_4a3dde
#define public_4a3e09 _public_4a3e09
#define public_4a3e21 _public_4a3e21
#define public_4a3e3d _public_4a3e3d
#define public_4a3e4b _public_4a3e4b
#define public_4a3e63 _public_4a3e63
#define public_4a3e7d _public_4a3e7d
#define public_4a3e8f _public_4a3e8f

PROC_DECLARE(0x4a3d60, internal_4a3d60, public_4a3d60);
extern "C" NAKED register_t __cdecl internal_4a3d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_4a3e8f
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        lea edx, ds:[ecx+0x5C]
        push edi
        lea ebp, ds:[eax+4]
        xor ecx, ecx
        mov edi, edi
        public_4a3d80 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        sub eax, 0x7C
        sub ebp, 0x7C
        sub edi, 0x7C
        sub edx, 0x7C
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edi
        jne public_4a3da5
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edx-0x58], cl
        jmp public_4a3dde
        public_4a3da5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3dbd
        mov eax, 0x1F
        public_4a3dbd : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x58]
        mov esi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0x58], cl
        mov dword ptr ds : [esi], eax
        public_4a3dde : nop
        lea eax, ss:[ebp+0x20]
        mov edi, dword ptr ds : [eax]
        lea esi, ds:[edx-0x38]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp+0x2C]
        lea esi, ss:[ebp+0x34]
        cmp esi, ecx
        mov dword ptr ds : [edx-0x2C], eax
        jne public_4a3e09
        mov dword ptr ds : [edx-0x28], ecx
        mov byte ptr ds : [edx-0x24], cl
        jmp public_4a3e3d
        public_4a3e09 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3e21
        mov eax, 0x1F
        public_4a3e21 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x24]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0x24], cl
        mov dword ptr ds : [edx-0x28], eax
        public_4a3e3d : nop
        lea esi, ss:[ebp+0x58]
        cmp esi, ecx
        jne public_4a3e4b
        mov dword ptr ds : [edx-4], ecx
        mov byte ptr ds : [edx], cl
        jmp public_4a3e7d
        public_4a3e4b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3e63
        mov eax, 0x1F
        public_4a3e63 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax], cl
        mov dword ptr ds : [edx-4], eax
        public_4a3e7d : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x14]
        jne public_4a3d80
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4a3e8f : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x4a3d60)
    }
}

#undef public_4a3d80
#undef public_4a3da5
#undef public_4a3dbd
#undef public_4a3dde
#undef public_4a3e09
#undef public_4a3e21
#undef public_4a3e3d
#undef public_4a3e4b
#undef public_4a3e63
#undef public_4a3e7d
#undef public_4a3e8f
