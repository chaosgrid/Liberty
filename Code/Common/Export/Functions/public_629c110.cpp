#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_629c120 _public_629c120
#define public_629c133 _public_629c133
#define public_629c140 _public_629c140
#define public_629c14e _public_629c14e
#define public_629c172 _public_629c172
#define public_629c17b _public_629c17b

PROC_DECLARE(0x629c110, internal_629c110, public_629c110);
extern "C" NAKED register_t __cdecl internal_629c110()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x64]
        cmp eax, dword ptr ds : [esi+0x68]
        push edi
        je public_629c133
        lea esp, ss:[esp]
        public_629c120 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [esi+0x68]
        add eax, 4
        cmp eax, ecx
        jne public_629c120
        public_629c133 : nop
        mov edx, dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [esi+0x64]
        mov eax, edx
        cmp eax, edx
        je public_629c14e
        nop 
        public_629c140 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_629c140
        public_629c14e : nop
        mov dword ptr ds : [esi+0x68], ecx
        mov edi, dword ptr ds : [esi+0x80]
        test edi, edi
        je public_629c17b
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [edi], offset public_639d6a8
        jne public_629c172
        push 0
        call public_628b440
        add esp, 4
        public_629c172 : nop
        push edi
        call public_6391d5a
        add esp, 4
        public_629c17b : nop
        pop edi
        mov ecx, esi
        pop esi
        jmp public_629edf0
        UNREACHABLE_TRAP(0x629c110)
    }
}

#undef public_629c120
#undef public_629c133
#undef public_629c140
#undef public_629c14e
#undef public_629c172
#undef public_629c17b
