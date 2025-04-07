#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);

#define public_6356a7e _public_6356a7e
#define public_6356a88 _public_6356a88
#define public_6356a97 _public_6356a97
#define public_6356a9d _public_6356a9d
#define public_6356aa6 _public_6356aa6
#define public_6356abd _public_6356abd

PROC_DECLARE(0x6356a70, internal_6356a70, public_6356a70);
extern "C" NAKED register_t __cdecl internal_6356a70()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        xor ebx, ebx
        test eax, eax
        jle public_6356aa6
        push esi
        public_6356a7e : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax+ebx*4]
        test eax, eax
        je public_6356a9d
        public_6356a88 : nop
        test eax, eax
        mov esi, dword ptr ds : [eax]
        je public_6356a97
        push eax
        call public_6343fb0
        add esp, 4
        public_6356a97 : nop
        test esi, esi
        mov eax, esi
        jne public_6356a88
        public_6356a9d : nop
        mov eax, dword ptr ds : [edi+4]
        inc ebx
        cmp ebx, eax
        jl public_6356a7e
        pop esi
        public_6356aa6 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6356abd
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [edi+0xC], 0
        public_6356abd : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6356a70)
    }
}

#undef public_6356a7e
#undef public_6356a88
#undef public_6356a97
#undef public_6356a9d
#undef public_6356aa6
#undef public_6356abd
