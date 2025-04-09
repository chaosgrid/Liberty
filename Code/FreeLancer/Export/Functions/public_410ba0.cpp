#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_410be2 _public_410be2
#define public_410be5 _public_410be5
#define public_410c00 _public_410c00
#define public_410c11 _public_410c11
#define public_410c17 _public_410c17
#define public_410c29 _public_410c29
#define public_410c2f _public_410c2f
#define public_410c44 _public_410c44
#define public_410c51 _public_410c51
#define public_410c70 _public_410c70
#define public_410c76 _public_410c76
#define public_410c7d _public_410c7d
#define public_410c8d _public_410c8d

PROC_DECLARE(0x410ba0, internal_410ba0, public_410ba0);
extern "C" NAKED register_t __cdecl internal_410ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xB4]
        test al, 4
        mov dword ptr ds : [esi], offset public_5c89d4
        je public_410c7d
        test al, 0x10
        je public_410c51
        and al, 0xEF
        test al, 0x10
        mov byte ptr ds : [esi+0xB4], al
        je public_410c00
        mov eax, dword ptr ds : [public_6164e4]
        test eax, eax
        mov dword ptr ds : [public_6164e4], esi
        jne public_410be2
        mov dword ptr ds : [public_6164e0], esi
        jmp public_410be5
        public_410be2 : nop
        mov dword ptr ds : [eax+4], esi
        public_410be5 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], 0
        inc dword ptr ds : [public_6164e8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push 1
        jmp public_410c44
        public_410c00 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_410c11
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6164e0], eax
        jmp public_410c17
        public_410c11 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_410c17 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_410c29
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [public_6164e4], edx
        jmp public_410c2f
        public_410c29 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_410c2f : nop
        mov eax, dword ptr ds : [public_6164e8]
        mov edx, dword ptr ds : [public_5c6de0]
        dec eax
        mov dword ptr ds : [public_6164e8], eax
        mov eax, dword ptr ds : [edx]
        push 0
        public_410c44 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        public_410c51 : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        jne public_410c70
        call dword ptr ds : [ecx+0x128]
        jmp public_410c76
        public_410c70 : nop
        call dword ptr ds : [ecx+0x9C]
        public_410c76 : nop
        and byte ptr ds : [esi+0xB4], 0xFB
        public_410c7d : nop
        test byte ptr ss : [esp+8], 1
        je public_410c8d
        push esi
        call public_5b7e1d
        add esp, 4
        public_410c8d : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x410ba0)
    }
}

#undef public_410be2
#undef public_410be5
#undef public_410c00
#undef public_410c11
#undef public_410c17
#undef public_410c29
#undef public_410c2f
#undef public_410c44
#undef public_410c51
#undef public_410c70
#undef public_410c76
#undef public_410c7d
#undef public_410c8d
