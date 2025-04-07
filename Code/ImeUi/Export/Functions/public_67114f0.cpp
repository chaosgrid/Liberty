#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67114f0);

#define public_6711505 _public_6711505
#define public_6711511 _public_6711511
#define public_671151f _public_671151f

PROC_DECLARE(0x67114f0, internal_67114f0, public_67114f0);
extern "C" NAKED register_t __cdecl internal_67114f0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test al, al
        mov esi, ecx
        jne public_6711505
        cmp dword ptr ds : [esi+0x10], edi
        je public_671151f
        public_6711505 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6711511
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_6711511 : nop
        test edi, edi
        mov dword ptr ds : [esi+0x10], edi
        je public_671151f
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        public_671151f : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x67114f0)
    }
}

#undef public_6711505
#undef public_6711511
#undef public_671151f
