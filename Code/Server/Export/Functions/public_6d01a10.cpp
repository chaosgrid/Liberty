#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceb330);

#define public_6d01a30 _public_6d01a30
#define public_6d01a32 _public_6d01a32
#define public_6d01a4b _public_6d01a4b

PROC_DECLARE(0x6d01a10, internal_6d01a10, public_6d01a10);
extern "C" NAKED register_t __cdecl internal_6d01a10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi+0x10], 6
        mov esi, ecx
        jne public_6d01a4b
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6d01a30
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d01a32
        public_6d01a30 : nop
        xor eax, eax
        public_6d01a32 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6d01a4b
        mov edx, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+4]
        push 1
        push 0
        call dword ptr ds : [edx+0x50]
        public_6d01a4b : nop
        push edi
        mov ecx, esi
        call public_6ceb330
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d01a10)
    }
}

#undef public_6d01a30
#undef public_6d01a32
#undef public_6d01a4b
