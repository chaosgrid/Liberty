#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402500);
CLANG_FORWARD_PROC_SYMBOL(public_406cd0);

#define public_40a60d _public_40a60d
#define public_40a61f _public_40a61f
#define public_40a64a _public_40a64a
#define public_40a64f _public_40a64f
#define public_40a663 _public_40a663
#define public_40a676 _public_40a676
#define public_40a682 _public_40a682
#define public_40a685 _public_40a685
#define public_40a6a5 _public_40a6a5
#define public_40a6a9 _public_40a6a9
#define public_40a6ae _public_40a6ae
#define public_40a6c6 _public_40a6c6
#define public_40a6e1 _public_40a6e1
#define public_40a6fe _public_40a6fe
#define public_40a70a _public_40a70a

PROC_DECLARE(0x40a5e0, internal_40a5e0, public_40a5e0);
extern "C" NAKED register_t __cdecl internal_40a5e0()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+4]
        mov ebp, ecx
        push eax
        lea esi, ss:[ebp+4]
        push esi
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ss : [ebp+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40a60d
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        public_40a60d : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_40a61f
        mov dword ptr ss : [ebp+0xC], 0xBF800000
        jmp public_40a663
        public_40a61f : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40a663
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40a64a
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], bl
        jne public_40a64f
        public_40a64a : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40a64f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx+0x40]
        push ecx
        push ebx
        push eax
        mov ecx, ebp
        call public_406cd0
        public_40a663 : nop
        fld dword ptr ds : [edi+0x58]
        fcomp dword ptr ss : [ebp+0x58]
        fnstsw ax
        test ah, 0x44
        jnp public_40a676
        mov ecx, dword ptr ds : [edi+0x58]
        mov dword ptr ss : [ebp+0x58], ecx
        public_40a676 : nop
        lea esi, ss:[ebp+0x60]
        cmp esi, ebx
        jne public_40a682
        mov eax, dword ptr ds : [edi+0x5C]
        jmp public_40a6ae
        public_40a682 : nop
        lea eax, ds:[edi+0x60]
        public_40a685 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_40a6a9
        cmp cl, bl
        je public_40a6a5
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_40a6a9
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_40a685
        public_40a6a5 : nop
        xor eax, eax
        jmp public_40a6ae
        public_40a6a9 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_40a6ae : nop
        cmp eax, ebx
        sete al
        cmp al, bl
        jne public_40a6fe
        lea esi, ds:[edi+0x60]
        cmp esi, ebx
        jne public_40a6c6
        mov dword ptr ss : [ebp+0x5C], ebx
        mov byte ptr ss : [ebp+0x60], bl
        jmp public_40a6fe
        public_40a6c6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x60]
        jb public_40a6e1
        mov eax, 0x1F
        public_40a6e1 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x5C], eax
        public_40a6fe : nop
        mov eax, dword ptr ds : [edi+0x54]
        cmp eax, dword ptr ss : [ebp+0x54]
        pop ebx
        je public_40a70a
        mov dword ptr ss : [ebp+0x54], eax
        public_40a70a : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40a5e0)
    }
}

#undef public_40a60d
#undef public_40a61f
#undef public_40a64a
#undef public_40a64f
#undef public_40a663
#undef public_40a676
#undef public_40a682
#undef public_40a685
#undef public_40a6a5
#undef public_40a6a9
#undef public_40a6ae
#undef public_40a6c6
#undef public_40a6e1
#undef public_40a6fe
#undef public_40a70a
