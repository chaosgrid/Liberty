#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634d26d _public_634d26d
#define public_634d277 _public_634d277
#define public_634d288 _public_634d288
#define public_634d290 _public_634d290
#define public_634d2a7 _public_634d2a7
#define public_634d2be _public_634d2be

PROC_DECLARE(0x634d260, internal_634d260, public_634d260);
extern "C" NAKED register_t __cdecl internal_634d260()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        xor ebx, ebx
        test eax, eax
        jbe public_634d290
        push esi
        public_634d26d : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax+ebx*4]
        test eax, eax
        je public_634d288
        public_634d277 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_634d277
        public_634d288 : nop
        mov eax, dword ptr ds : [edi]
        inc ebx
        cmp ebx, eax
        jb public_634d26d
        pop esi
        public_634d290 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_634d2a7
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [edi+0xC], 0
        public_634d2a7 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_634d2be
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        public_634d2be : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x634d260)
    }
}

#undef public_634d26d
#undef public_634d277
#undef public_634d288
#undef public_634d290
#undef public_634d2a7
#undef public_634d2be
