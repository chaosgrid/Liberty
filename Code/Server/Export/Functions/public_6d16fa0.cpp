#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16fb1 _public_6d16fb1
#define public_6d16fc6 _public_6d16fc6
#define public_6d16fcf _public_6d16fcf
#define public_6d16fd3 _public_6d16fd3
#define public_6d16fe8 _public_6d16fe8
#define public_6d16ff9 _public_6d16ff9
#define public_6d17010 _public_6d17010

PROC_DECLARE(0x6d16fa0, internal_6d16fa0, public_6d16fa0);
extern "C" NAKED register_t __cdecl internal_6d16fa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d683d0
        je public_6d16fd3
        public_6d16fb1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16fc6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16fcf
        public_6d16fc6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16fcf : nop
        test edi, edi
        jne public_6d16fb1
        public_6d16fd3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d16ff9
        public_6d16fe8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d16fe8
        public_6d16ff9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d17010
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d17010 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16fa0)
    }
}

#undef public_6d16fb1
#undef public_6d16fc6
#undef public_6d16fcf
#undef public_6d16fd3
#undef public_6d16fe8
#undef public_6d16ff9
#undef public_6d17010
