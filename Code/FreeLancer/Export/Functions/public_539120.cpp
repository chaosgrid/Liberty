#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_539131 _public_539131
#define public_539146 _public_539146
#define public_53914f _public_53914f
#define public_539153 _public_539153
#define public_539168 _public_539168
#define public_539179 _public_539179
#define public_539190 _public_539190

PROC_DECLARE(0x539120, internal_539120, public_539120);
extern "C" NAKED register_t __cdecl internal_539120()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5de718
        je public_539153
        public_539131 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_539146
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_53914f
        public_539146 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_53914f : nop
        test edi, edi
        jne public_539131
        public_539153 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_539179
        public_539168 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_539168
        public_539179 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_539190
        push esi
        call public_5b7e1d
        add esp, 4
        public_539190 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x539120)
    }
}

#undef public_539131
#undef public_539146
#undef public_53914f
#undef public_539153
#undef public_539168
#undef public_539179
#undef public_539190
