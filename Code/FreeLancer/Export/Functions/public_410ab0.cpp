#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ab0);

#define public_410af2 _public_410af2
#define public_410af5 _public_410af5
#define public_410b10 _public_410b10
#define public_410b21 _public_410b21
#define public_410b27 _public_410b27
#define public_410b39 _public_410b39
#define public_410b3f _public_410b3f
#define public_410b54 _public_410b54
#define public_410b61 _public_410b61
#define public_410b87 _public_410b87
#define public_410b94 _public_410b94

PROC_DECLARE(0x410ab0, internal_410ab0, public_410ab0);
extern "C" NAKED register_t __cdecl internal_410ab0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xB4]
        test al, 4
        mov dword ptr ds : [esi], offset public_5c89d4
        je public_410b94
        test al, 0x10
        je public_410b61
        and al, 0xEF
        test al, 0x10
        mov byte ptr ds : [esi+0xB4], al
        je public_410b10
        mov eax, dword ptr ds : [public_6164e4]
        test eax, eax
        mov dword ptr ds : [public_6164e4], esi
        jne public_410af2
        mov dword ptr ds : [public_6164e0], esi
        jmp public_410af5
        public_410af2 : nop
        mov dword ptr ds : [eax+4], esi
        public_410af5 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], 0
        inc dword ptr ds : [public_6164e8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push 1
        jmp public_410b54
        public_410b10 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_410b21
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6164e0], eax
        jmp public_410b27
        public_410b21 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_410b27 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_410b39
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [public_6164e4], edx
        jmp public_410b3f
        public_410b39 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_410b3f : nop
        mov eax, dword ptr ds : [public_6164e8]
        mov edx, dword ptr ds : [public_5c6de0]
        dec eax
        mov dword ptr ds : [public_6164e8], eax
        mov eax, dword ptr ds : [edx]
        push 0
        public_410b54 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        public_410b61 : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        jne public_410b87
        call dword ptr ds : [ecx+0x128]
        and byte ptr ds : [esi+0xB4], 0xFB
        pop esi
        ret 
        public_410b87 : nop
        call dword ptr ds : [ecx+0x9C]
        and byte ptr ds : [esi+0xB4], 0xFB
        public_410b94 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x410ab0)
    }
}

#undef public_410af2
#undef public_410af5
#undef public_410b10
#undef public_410b21
#undef public_410b27
#undef public_410b39
#undef public_410b3f
#undef public_410b54
#undef public_410b61
#undef public_410b87
#undef public_410b94
