#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af5d1 _public_5af5d1
#define public_5af5e6 _public_5af5e6
#define public_5af5ef _public_5af5ef
#define public_5af5f3 _public_5af5f3
#define public_5af608 _public_5af608
#define public_5af619 _public_5af619
#define public_5af630 _public_5af630

PROC_DECLARE(0x5af5c0, internal_5af5c0, public_5af5c0);
extern "C" NAKED register_t __cdecl internal_5af5c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5e6528
        je public_5af5f3
        public_5af5d1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5af5e6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_5af5ef
        public_5af5e6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5af5ef : nop
        test edi, edi
        jne public_5af5d1
        public_5af5f3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_5af619
        public_5af608 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_5af608
        public_5af619 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_5af630
        push esi
        call public_5b7e1d
        add esp, 4
        public_5af630 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5af5c0)
    }
}

#undef public_5af5d1
#undef public_5af5e6
#undef public_5af5ef
#undef public_5af5f3
#undef public_5af608
#undef public_5af619
#undef public_5af630
