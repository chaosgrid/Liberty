#include "Freelancer-PCH.h"


#define public_42b8bc _public_42b8bc
#define public_42b8e4 _public_42b8e4
#define public_42b8ea _public_42b8ea
#define public_42b8f7 _public_42b8f7
#define public_42b907 _public_42b907

PROC_DECLARE(0x42b8a0, internal_42b8a0, public_42b8a0);
extern "C" NAKED register_t __cdecl internal_42b8a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        cmp eax, esi
        jne public_42b8ea
        xor eax, eax
        mov ax, word ptr ds : [esi+0x2A]
        test ax, ax
        je public_42b8bc
        dec eax
        mov word ptr ds : [esi+0x2A], ax
        public_42b8bc : nop
        cmp word ptr ds : [esi+0x2A], 0
        jg public_42b8e4
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0xFFFFFFFF
        je public_42b8e4
        mov edx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        public_42b8e4 : nop
        movsx eax, word ptr ds : [esi+0x2A]
        pop esi
        ret 
        public_42b8ea : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_42b8f7
        mov eax, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [eax+0x10]
        public_42b8f7 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_42b907
        dec eax
        mov word ptr ds : [esi+0x28], ax
        public_42b907 : nop
        movsx eax, word ptr ds : [esi+0x28]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42b8a0)
    }
}

#undef public_42b8bc
#undef public_42b8e4
#undef public_42b8ea
#undef public_42b8f7
#undef public_42b907
