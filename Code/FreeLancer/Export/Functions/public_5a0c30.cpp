#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_5a0c40 _public_5a0c40
#define public_5a0c5e _public_5a0c5e
#define public_5a0c65 _public_5a0c65
#define public_5a0c77 _public_5a0c77

PROC_DECLARE(0x5a0c30, internal_5a0c30, public_5a0c30);
extern "C" NAKED register_t __cdecl internal_5a0c30()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_5a0c65
        public_5a0c40 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_5a0c5e
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        mov cl, bl
        push 0
        push ecx
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_5a0c5e : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a0c40
        public_5a0c65 : nop
        test bl, bl
        mov al, byte ptr ds : [edi+0x6C]
        je public_5a0c77
        and al, 0xFC
        mov byte ptr ds : [edi+0x6C], al
        pop edi
        pop esi
        pop ebx
        ret 4
        public_5a0c77 : nop
        or al, 3
        mov byte ptr ds : [edi+0x6C], al
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a0c30)
    }
}

#undef public_5a0c40
#undef public_5a0c5e
#undef public_5a0c65
#undef public_5a0c77
