#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cde1 _public_43cde1
#define public_43cdf6 _public_43cdf6
#define public_43cdff _public_43cdff
#define public_43ce03 _public_43ce03
#define public_43ce18 _public_43ce18
#define public_43ce29 _public_43ce29
#define public_43ce40 _public_43ce40

PROC_DECLARE(0x43cdd0, internal_43cdd0, public_43cdd0);
extern "C" NAKED register_t __cdecl internal_43cdd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5cb044
        je public_43ce03
        public_43cde1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43cdf6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43cdff
        public_43cdf6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43cdff : nop
        test edi, edi
        jne public_43cde1
        public_43ce03 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_43ce29
        public_43ce18 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_43ce18
        public_43ce29 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_43ce40
        push esi
        call public_5b7e1d
        add esp, 4
        public_43ce40 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cdd0)
    }
}

#undef public_43cde1
#undef public_43cdf6
#undef public_43cdff
#undef public_43ce03
#undef public_43ce18
#undef public_43ce29
#undef public_43ce40
