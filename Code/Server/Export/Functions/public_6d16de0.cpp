#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16df1 _public_6d16df1
#define public_6d16e06 _public_6d16e06
#define public_6d16e0f _public_6d16e0f
#define public_6d16e13 _public_6d16e13
#define public_6d16e28 _public_6d16e28
#define public_6d16e39 _public_6d16e39
#define public_6d16e50 _public_6d16e50

PROC_DECLARE(0x6d16de0, internal_6d16de0, public_6d16de0);
extern "C" NAKED register_t __cdecl internal_6d16de0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d68340
        je public_6d16e13
        public_6d16df1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16e06
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16e0f
        public_6d16e06 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16e0f : nop
        test edi, edi
        jne public_6d16df1
        public_6d16e13 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d16e39
        public_6d16e28 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d16e28
        public_6d16e39 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d16e50
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16e50 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16de0)
    }
}

#undef public_6d16df1
#undef public_6d16e06
#undef public_6d16e0f
#undef public_6d16e13
#undef public_6d16e28
#undef public_6d16e39
#undef public_6d16e50
