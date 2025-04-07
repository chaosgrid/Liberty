#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);

#define public_6f6ecb6 _public_6f6ecb6
#define public_6f6ecc1 _public_6f6ecc1
#define public_6f6ecc8 _public_6f6ecc8
#define public_6f6ecfc _public_6f6ecfc

PROC_DECLARE(0x6f6eca0, internal_6f6eca0, public_6f6eca0);
extern "C" NAKED register_t __cdecl internal_6f6eca0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x24
        cmp eax, ecx
        push esi
        je public_6f6ecc1
        mov edx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edx]
        public_6f6ecb6 : nop
        cmp dword ptr ds : [eax+0xC], edx
        je public_6f6ecc8
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6ecb6
        public_6f6ecc1 : nop
        xor al, al
        pop esi
        add esp, 0x24
        ret 
        public_6f6ecc8 : nop
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        add eax, 0x10
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        mov esi, dword ptr ss : [esp+0x38]
        test esi, esi
        je public_6f6ecfc
        mov ecx, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_6fb3564]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        mov dword ptr ds : [esi], edx
        public_6f6ecfc : nop
        mov al, 1
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f6eca0)
    }
}

#undef public_6f6ecb6
#undef public_6f6ecc1
#undef public_6f6ecc8
#undef public_6f6ecfc
