#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40b76c _public_40b76c
#define public_40b77a _public_40b77a
#define public_40b7a6 _public_40b7a6
#define public_40b7ab _public_40b7ab
#define public_40b7c0 _public_40b7c0
#define public_40b7d4 _public_40b7d4
#define public_40b7df _public_40b7df
#define public_40b7ea _public_40b7ea

PROC_DECLARE(0x40b740, internal_40b740, public_40b740);
extern "C" NAKED register_t __cdecl internal_40b740()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea edi, ds:[esi+4]
        push edi
        call public_402500
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40b76c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        public_40b76c : nop
        cmp dword ptr ds : [edi], 0
        jne public_40b77a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40b7d4
        public_40b77a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40b7d4
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40b7a6
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40b7ab
        public_40b7a6 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40b7ab : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_40b7c0
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40b7d4
        public_40b7c0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40b7d4 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        cmp eax, dword ptr ds : [esi+0x54]
        je public_40b7df
        mov dword ptr ds : [esi+0x54], eax
        public_40b7df : nop
        mov al, byte ptr ds : [ebx+0x58]
        cmp al, byte ptr ds : [esi+0x58]
        je public_40b7ea
        mov byte ptr ds : [esi+0x58], al
        public_40b7ea : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40b740)
    }
}

#undef public_40b76c
#undef public_40b77a
#undef public_40b7a6
#undef public_40b7ab
#undef public_40b7c0
#undef public_40b7d4
#undef public_40b7df
#undef public_40b7ea
