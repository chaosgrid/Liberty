#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d45de1 _public_6d45de1
#define public_6d45df6 _public_6d45df6
#define public_6d45dff _public_6d45dff
#define public_6d45e03 _public_6d45e03
#define public_6d45e18 _public_6d45e18
#define public_6d45e29 _public_6d45e29
#define public_6d45e40 _public_6d45e40

PROC_DECLARE(0x6d45dd0, internal_6d45dd0, public_6d45dd0);
extern "C" NAKED register_t __cdecl internal_6d45dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d6ada0
        je public_6d45e03
        public_6d45de1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d45df6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d45dff
        public_6d45df6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d45dff : nop
        test edi, edi
        jne public_6d45de1
        public_6d45e03 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d45e29
        public_6d45e18 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d45e18
        public_6d45e29 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d45e40
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d45e40 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d45dd0)
    }
}

#undef public_6d45de1
#undef public_6d45df6
#undef public_6d45dff
#undef public_6d45e03
#undef public_6d45e18
#undef public_6d45e29
#undef public_6d45e40
