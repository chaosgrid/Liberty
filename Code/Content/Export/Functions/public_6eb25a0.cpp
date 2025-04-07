#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb25a0);

#define public_6eb25d5 _public_6eb25d5
#define public_6eb25ef _public_6eb25ef
#define public_6eb2607 _public_6eb2607
#define public_6eb2630 _public_6eb2630
#define public_6eb2658 _public_6eb2658

PROC_DECLARE(0x6eb25a0, internal_6eb25a0, public_6eb25a0);
extern "C" NAKED register_t __cdecl internal_6eb25a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp ebp, ecx
        push edi
        mov edi, eax
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+8], edi
        je public_6eb2658
        push ebx
        mov ebx, ebp
        sub ebx, eax
        push esi
        lea edx, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x24], ebx
        public_6eb25d5 : nop
        mov esi, dword ptr ss : [ebp]
        mov dword ptr ds : [edi], esi
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx-8], esi
        lea esi, ds:[ebx+edx]
        test esi, esi
        jne public_6eb25ef
        mov dword ptr ds : [edx-4], esi
        mov byte ptr ds : [edx], 0
        jmp public_6eb2630
        public_6eb25ef : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x18
        jb public_6eb2607
        mov eax, 0x17
        public_6eb2607 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [edx-4], eax
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb2630 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [edx+0x18], esi
        add edi, 0x28
        add ebp, 0x28
        add edx, 0x28
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], edi
        jne public_6eb25d5
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], edi
        pop edi
        pop ebp
        add esp, 0xC
        ret 8
        public_6eb2658 : nop
        mov dword ptr ds : [edx+8], edi
        pop edi
        pop ebp
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6eb25a0)
    }
}

#undef public_6eb25d5
#undef public_6eb25ef
#undef public_6eb2607
#undef public_6eb2630
#undef public_6eb2658
