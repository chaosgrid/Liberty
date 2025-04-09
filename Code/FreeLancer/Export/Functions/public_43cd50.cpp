#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cd61 _public_43cd61
#define public_43cd76 _public_43cd76
#define public_43cd7f _public_43cd7f
#define public_43cd83 _public_43cd83
#define public_43cd98 _public_43cd98
#define public_43cda9 _public_43cda9
#define public_43cdc0 _public_43cdc0

PROC_DECLARE(0x43cd50, internal_43cd50, public_43cd50);
extern "C" NAKED register_t __cdecl internal_43cd50()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5cb03c
        je public_43cd83
        public_43cd61 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43cd76
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43cd7f
        public_43cd76 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43cd7f : nop
        test edi, edi
        jne public_43cd61
        public_43cd83 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_43cda9
        public_43cd98 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_43cd98
        public_43cda9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_43cdc0
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cdc0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cd50)
    }
}

#undef public_43cd61
#undef public_43cd76
#undef public_43cd7f
#undef public_43cd83
#undef public_43cd98
#undef public_43cda9
#undef public_43cdc0
