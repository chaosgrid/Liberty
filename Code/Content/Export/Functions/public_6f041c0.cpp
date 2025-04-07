#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f041c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ad60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d220);

#define public_6f041de _public_6f041de
#define public_6f041f9 _public_6f041f9
#define public_6f04219 _public_6f04219
#define public_6f04250 _public_6f04250
#define public_6f0429a _public_6f0429a
#define public_6f042af _public_6f042af
#define public_6f042b9 _public_6f042b9

PROC_DECLARE(0x6f041c0, internal_6f041c0, public_6f041c0);
extern "C" NAKED register_t __cdecl internal_6f041c0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea edx, ds:[edi+0xC]
        test edx, edx
        jne public_6f041de
        mov dword ptr ss : [ebp+8], edx
        mov byte ptr ss : [ebp+0xC], dl
        jmp public_6f04219
        public_6f041de : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x18
        lea ebx, ss:[ebp+0xC]
        jb public_6f041f9
        mov eax, 0x17
        public_6f041f9 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x24]
        mov byte ptr ds : [eax+ebp+0xC], 0
        mov dword ptr ss : [ebp+8], eax
        public_6f04219 : nop
        push ebp
        push edx
        call public_6f4d220
        mov ebx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [esp+0x34]
        mov byte ptr ss : [esp+0x2C], al
        mov eax, dword ptr ds : [public_6fb8030]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 8
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6f04250 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push edx
        push ebx
        call public_6f4ad60
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_6fb8030]
        add esp, 0xC
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x44
        jnp public_6f042af
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+4]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6f0429a
        cmp eax, 1
        je public_6f0429a
        cmp eax, 3
        je public_6f0429a
        inc esi
        cmp esi, 5
        jl public_6f04250
        public_6f0429a : nop
        mov cl, byte ptr ss : [esp+0x24]
        test cl, cl
        je public_6f042b9
        pop edi
        pop esi
        test eax, eax
        pop ebp
        sete al
        pop ebx
        add esp, 0x10
        ret 
        public_6f042af : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 
        public_6f042b9 : nop
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f041c0)
    }
}

#undef public_6f041de
#undef public_6f041f9
#undef public_6f04219
#undef public_6f04250
#undef public_6f0429a
#undef public_6f042af
#undef public_6f042b9
