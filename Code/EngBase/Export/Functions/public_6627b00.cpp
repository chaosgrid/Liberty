#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627b00);

#define public_6627b14 _public_6627b14
#define public_6627b1f _public_6627b1f
#define public_6627b22 _public_6627b22
#define public_6627b27 _public_6627b27

PROC_DECLARE(0x6627b00, internal_6627b00, public_6627b00);
extern "C" NAKED register_t __cdecl internal_6627b00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_6627b27
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6627b14 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_6627b1f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6627b22
        public_6627b1f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6627b22 : nop
        cmp edx, ecx
        jne public_6627b14
        pop esi
        public_6627b27 : nop
        ret 4
        UNREACHABLE_TRAP(0x6627b00)
    }
}

#undef public_6627b14
#undef public_6627b1f
#undef public_6627b22
#undef public_6627b27
