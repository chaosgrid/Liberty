#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3ab0);

#define public_4a3ad3 _public_4a3ad3
#define public_4a3ade _public_4a3ade
#define public_4a3af6 _public_4a3af6
#define public_4a3b1b _public_4a3b1b
#define public_4a3b47 _public_4a3b47
#define public_4a3b5f _public_4a3b5f
#define public_4a3b7a _public_4a3b7a
#define public_4a3b89 _public_4a3b89
#define public_4a3ba1 _public_4a3ba1
#define public_4a3bba _public_4a3bba
#define public_4a3be9 _public_4a3be9

PROC_DECLARE(0x4a3ab0, internal_4a3ab0, public_4a3ab0);
extern "C" NAKED register_t __cdecl internal_4a3ab0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        je public_4a3be9
        push ebp
        push esi
        add ebx, 4
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        lea edx, ds:[eax+0x5C]
        public_4a3ad3 : nop
        test ebx, ebx
        jne public_4a3ade
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [edx-0x58], bl
        jmp public_4a3b1b
        public_4a3ade : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3af6
        mov eax, 0x1F
        public_4a3af6 : nop
        mov esi, ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea ebp, ds:[edx-0x58]
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ss : [esp+0x10]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [ecx], eax
        public_4a3b1b : nop
        lea eax, ds:[ebx+0x20]
        mov esi, dword ptr ds : [eax]
        lea ecx, ds:[edx-0x38]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0x2C]
        lea esi, ds:[ebx+0x34]
        test esi, esi
        mov dword ptr ds : [edx-0x2C], ecx
        jne public_4a3b47
        mov dword ptr ds : [edx-0x28], esi
        mov byte ptr ds : [edx-0x24], 0
        jmp public_4a3b7a
        public_4a3b47 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3b5f
        mov eax, 0x1F
        public_4a3b5f : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x24]
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax-0x24], 0
        mov dword ptr ds : [edx-0x28], eax
        public_4a3b7a : nop
        lea esi, ds:[ebx+0x58]
        test esi, esi
        jne public_4a3b89
        mov dword ptr ds : [edx-4], esi
        mov byte ptr ds : [edx], 0
        jmp public_4a3bba
        public_4a3b89 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4a3ba1
        mov eax, 0x1F
        public_4a3ba1 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [edx-4], eax
        public_4a3bba : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        add ecx, 0x7C
        add eax, 0x7C
        add ebx, 0x7C
        add edx, 0x7C
        cmp ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_4a3ad3
        pop edi
        pop esi
        pop ebp
        public_4a3be9 : nop
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a3ab0)
    }
}

#undef public_4a3ad3
#undef public_4a3ade
#undef public_4a3af6
#undef public_4a3b1b
#undef public_4a3b47
#undef public_4a3b5f
#undef public_4a3b7a
#undef public_4a3b89
#undef public_4a3ba1
#undef public_4a3bba
#undef public_4a3be9
