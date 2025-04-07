#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17120);

#define public_6d17130 _public_6d17130
#define public_6d1713b _public_6d1713b
#define public_6d1713d _public_6d1713d
#define public_6d17155 _public_6d17155
#define public_6d1715e _public_6d1715e

PROC_DECLARE(0x6d17120, internal_6d17120, public_6d17120);
extern "C" NAKED register_t __cdecl internal_6d17120()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_6d17130 : nop
        test esi, esi
        jne public_6d1713b
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [eax+4]
        jmp public_6d1713d
        public_6d1713b : nop
        mov esi, dword ptr ds : [esi]
        public_6d1713d : nop
        test esi, esi
        je public_6d1715e
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [edi+4]
        je public_6d17155
        test ecx, ecx
        je public_6d17155
        cmp ecx, eax
        jne public_6d17130
        public_6d17155 : nop
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        jmp public_6d17130
        public_6d1715e : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d17120)
    }
}

#undef public_6d17130
#undef public_6d1713b
#undef public_6d1713d
#undef public_6d17155
#undef public_6d1715e
