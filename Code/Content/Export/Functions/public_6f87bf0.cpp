#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f87bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f87c05 _public_6f87c05
#define public_6f87c1a _public_6f87c1a

PROC_DECLARE(0x6f87bf0, internal_6f87bf0, public_6f87bf0);
extern "C" NAKED register_t __cdecl internal_6f87bf0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6fbc7c8
        mov ebx, dword ptr ds : [edi+0x58]
        mov esi, dword ptr ds : [edi+0x54]
        cmp esi, ebx
        je public_6f87c1a
        public_6f87c05 : nop
        lea ecx, ds:[esi+0xEC]
        call public_6f15350
        add esi, 0x108
        cmp esi, ebx
        jne public_6f87c05
        public_6f87c1a : nop
        mov eax, dword ptr ds : [edi+0x54]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+0x54], eax
        mov dword ptr ds : [edi+0x58], eax
        mov dword ptr ds : [edi+0x5C], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f87bf0)
    }
}

#undef public_6f87c05
#undef public_6f87c1a
