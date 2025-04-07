#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11190);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a0a);

#define public_6f111a1 _public_6f111a1
#define public_6f111bc _public_6f111bc
#define public_6f111c5 _public_6f111c5
#define public_6f111ce _public_6f111ce

PROC_DECLARE(0x6f11190, internal_6f11190, public_6f11190);
extern "C" NAKED register_t __cdecl internal_6f11190()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+8]
        xor ebp, ebp
        cmp eax, ebp
        je public_6f111ce
        push ebx
        push esi
        public_6f111a1 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [eax]
        mov esi, eax
        cmp esi, ebp
        je public_6f111c5
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6f111bc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], ebp
        public_6f111bc : nop
        push esi
        call public_6f11a0a
        add esp, 4
        public_6f111c5 : nop
        cmp ebx, ebp
        mov dword ptr ds : [edi+8], ebx
        jne public_6f111a1
        pop esi
        pop ebx
        public_6f111ce : nop
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+0x24], ebp
        pop edi
        xor eax, eax
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f11190)
    }
}

#undef public_6f111a1
#undef public_6f111bc
#undef public_6f111c5
#undef public_6f111ce
