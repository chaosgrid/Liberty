#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100022c0);
CLANG_FORWARD_PROC_SYMBOL(public_10002ca0);
CLANG_FORWARD_PROC_SYMBOL(public_10007b60);

#define public_10002cdd _public_10002cdd
#define public_10002d0d _public_10002d0d

PROC_DECLARE(0x10002ca0, internal_10002ca0, public_10002ca0);
extern "C" NAKED register_t __cdecl internal_10002ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        push esi
        je public_10002d0d
        mov esi, dword ptr ds : [eax+0x1C]
        cmp esi, ecx
        je public_10002d0d
        cmp dword ptr ds : [eax+0x20], ecx
        je public_10002d0d
        cmp dword ptr ds : [eax+0x24], ecx
        je public_10002d0d
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x2C], 2
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        cmp dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x14], ecx
        jge public_10002cdd
        mov dword ptr ds : [esi+0x18], ecx
        public_10002cdd : nop
        mov edx, dword ptr ds : [esi+0x18]
        neg edx
        sbb edx, edx
        and edx, 0x47
        add edx, 0x2A
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [eax+0x30], 1
        push esi
        mov dword ptr ds : [esi+0x20], ecx
        call public_10007b60
        add esp, 4
        mov edx, esi
        call public_100022c0
        xor eax, eax
        pop esi
        ret 4
        public_10002d0d : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x10002ca0)
    }
}

#undef public_10002cdd
#undef public_10002d0d
