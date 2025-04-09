#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4cee01 _public_4cee01
#define public_4cee16 _public_4cee16
#define public_4cee1f _public_4cee1f
#define public_4cee23 _public_4cee23
#define public_4cee38 _public_4cee38
#define public_4cee49 _public_4cee49
#define public_4cee60 _public_4cee60

PROC_DECLARE(0x4cedf0, internal_4cedf0, public_4cedf0);
extern "C" NAKED register_t __cdecl internal_4cedf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5d7704
        je public_4cee23
        public_4cee01 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_4cee16
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_4cee1f
        public_4cee16 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4cee1f : nop
        test edi, edi
        jne public_4cee01
        public_4cee23 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_4cee49
        public_4cee38 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_4cee38
        public_4cee49 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_4cee60
        push esi
        call public_5b7e1d
        add esp, 4
        public_4cee60 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4cedf0)
    }
}

#undef public_4cee01
#undef public_4cee16
#undef public_4cee1f
#undef public_4cee23
#undef public_4cee38
#undef public_4cee49
#undef public_4cee60
