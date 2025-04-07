#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16f11 _public_6d16f11
#define public_6d16f26 _public_6d16f26
#define public_6d16f2f _public_6d16f2f
#define public_6d16f33 _public_6d16f33
#define public_6d16f48 _public_6d16f48
#define public_6d16f59 _public_6d16f59
#define public_6d16f70 _public_6d16f70

PROC_DECLARE(0x6d16f00, internal_6d16f00, public_6d16f00);
extern "C" NAKED register_t __cdecl internal_6d16f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d683d8
        je public_6d16f33
        public_6d16f11 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16f26
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16f2f
        public_6d16f26 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16f2f : nop
        test edi, edi
        jne public_6d16f11
        public_6d16f33 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d16f59
        public_6d16f48 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d16f48
        public_6d16f59 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d16f70
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16f70 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16f00)
    }
}

#undef public_6d16f11
#undef public_6d16f26
#undef public_6d16f2f
#undef public_6d16f33
#undef public_6d16f48
#undef public_6d16f59
#undef public_6d16f70
