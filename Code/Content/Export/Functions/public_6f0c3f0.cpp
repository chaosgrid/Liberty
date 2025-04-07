#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0c3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

#define public_6f0c406 _public_6f0c406
#define public_6f0c4a3 _public_6f0c4a3
#define public_6f0c4a9 _public_6f0c4a9
#define public_6f0c4bf _public_6f0c4bf
#define public_6f0c4cd _public_6f0c4cd
#define public_6f0c4dc _public_6f0c4dc
#define public_6f0c4e8 _public_6f0c4e8
#define public_6f0c4eb _public_6f0c4eb

PROC_DECLARE(0x6f0c3f0, internal_6f0c3f0, public_6f0c3f0);
extern "C" NAKED register_t __cdecl internal_6f0c3f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        cmp edi, ebp
        mov esi, ecx
        jne public_6f0c406
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x20]
        public_6f0c406 : nop
        cmp edi, ebp
        mov dword ptr ds : [esi+4], edi
        je public_6f0c4e8
        mov ecx, dword ptr ds : [edi+8]
        call public_6eb6bb0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f50650
        mov ebx, eax
        mov ecx, dword ptr ds : [ebx+0x60]
        add esp, 4
        cmp ecx, ebp
        je public_6f0c4dc
        mov eax, dword ptr ds : [ebx+0x64]
        sub eax, ecx
        sar eax, 3
        cmp eax, ebp
        je public_6f0c4dc
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        lea ebp, ds:[esi+0x18]
        push ebp
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6fb34bc]
        add esp, 0xC
        test eax, eax
        jne public_6f0c4bf
        cmp dword ptr ss : [ebp], 0x1F4
        jle public_6f0c4bf
        mov dword ptr ss : [ebp], 0x1F4
        mov dl, byte ptr ds : [ebx+0x70]
        mov byte ptr ds : [esi+0x61], dl
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [public_6fb3160]
        mov ecx, eax
        fld dword ptr ds : [ecx+0x3D0]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x44
        jnp public_6f0c4a3
        mov eax, dword ptr ds : [ecx+0x3D0]
        mov dword ptr ds : [esi+0x58], eax
        jmp public_6f0c4a9
        public_6f0c4a3 : nop
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ds : [esi+0x58], ecx
        public_6f0c4a9 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6f0c4eb
        pop edi
        mov dword ptr ds : [esi+0x14], 1
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f0c4bf : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6f0c4cd
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        public_6f0c4cd : nop
        pop edi
        mov dword ptr ds : [esi+0x14], 0
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f0c4dc : nop
        cmp dword ptr ds : [esi+0x14], ebp
        je public_6f0c4e8
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        public_6f0c4e8 : nop
        mov dword ptr ds : [esi+0x14], ebp
        public_6f0c4eb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f0c3f0)
    }
}

#undef public_6f0c406
#undef public_6f0c4a3
#undef public_6f0c4a9
#undef public_6f0c4bf
#undef public_6f0c4cd
#undef public_6f0c4dc
#undef public_6f0c4e8
#undef public_6f0c4eb
