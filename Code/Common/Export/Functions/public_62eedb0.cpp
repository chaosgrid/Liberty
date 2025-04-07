#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62eedc1 _public_62eedc1
#define public_62eedd6 _public_62eedd6
#define public_62eeddf _public_62eeddf
#define public_62eede3 _public_62eede3
#define public_62eedf8 _public_62eedf8
#define public_62eee09 _public_62eee09
#define public_62eee20 _public_62eee20

PROC_DECLARE(0x62eedb0, internal_62eedb0, public_62eedb0);
extern "C" NAKED register_t __cdecl internal_62eedb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_63a0894
        je public_62eede3
        public_62eedc1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_62eedd6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_62eeddf
        public_62eedd6 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62eeddf : nop
        test edi, edi
        jne public_62eedc1
        public_62eede3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_62eee09
        public_62eedf8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6391d5a
        add esp, 4
        test edi, edi
        jne public_62eedf8
        public_62eee09 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_62eee20
        push esi
        call public_6391d5a
        add esp, 4
        public_62eee20 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62eedb0)
    }
}

#undef public_62eedc1
#undef public_62eedd6
#undef public_62eeddf
#undef public_62eede3
#undef public_62eedf8
#undef public_62eee09
#undef public_62eee20
