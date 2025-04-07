#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);

#define public_1000201e _public_1000201e
#define public_10002030 _public_10002030
#define public_10002045 _public_10002045
#define public_1000205a _public_1000205a
#define public_1000206f _public_1000206f
#define public_10002095 _public_10002095

PROC_DECLARE(0x10001ff0, internal_10001ff0, public_10001ff0);
extern "C" NAKED register_t __cdecl internal_10001ff0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        je public_10002095
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_10002095
        mov edi, dword ptr ds : [eax+4]
        cmp edi, 0x2A
        je public_1000201e
        cmp edi, 0x71
        je public_1000201e
        cmp edi, 0x29A
        jne public_10002095
        public_1000201e : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_10002030
        push eax
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call dword ptr ds : [esi+0x24]
        add esp, 8
        public_10002030 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        je public_10002045
        mov edx, dword ptr ds : [esi+0x28]
        push eax
        push edx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        public_10002045 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0x38]
        test eax, eax
        je public_1000205a
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push ecx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        public_1000205a : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edx+0x30]
        test eax, eax
        je public_1000206f
        push eax
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call dword ptr ds : [esi+0x24]
        add esp, 8
        public_1000206f : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x28]
        push ecx
        push edx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        xor eax, eax
        cmp edi, 0x71
        setne al
        pop edi
        mov dword ptr ds : [esi+0x1C], 0
        pop esi
        dec eax
        and eax, 0xFFFFFFFD
        ret 4
        public_10002095 : nop
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x10001ff0)
    }
}

#undef public_1000201e
#undef public_10002030
#undef public_10002045
#undef public_1000205a
#undef public_1000206f
#undef public_10002095
