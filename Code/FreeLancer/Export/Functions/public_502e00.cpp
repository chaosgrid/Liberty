#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_502e15 _public_502e15
#define public_502e25 _public_502e25
#define public_502e34 _public_502e34

PROC_DECLARE(0x502e00, internal_502e00, public_502e00);
extern "C" NAKED register_t __cdecl internal_502e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_502e15
        call public_4f7a90
        mov dword ptr ds : [esi+0x1C], edi
        public_502e15 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_502e25
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x18], edi
        public_502e25 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, edi
        je public_502e34
        call public_537ad0
        mov dword ptr ds : [esi+0x20], edi
        public_502e34 : nop
        mov dword ptr ds : [esi+0x14], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x502e00)
    }
}

#undef public_502e15
#undef public_502e25
#undef public_502e34
