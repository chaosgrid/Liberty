#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6379ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6379ffe _public_6379ffe
#define public_637a00d _public_637a00d
#define public_637a013 _public_637a013
#define public_637a020 _public_637a020
#define public_637a034 _public_637a034
#define public_637a03b _public_637a03b
#define public_637a042 _public_637a042
#define public_637a054 _public_637a054

PROC_DECLARE(0x6379ff0, internal_6379ff0, public_6379ff0);
extern "C" NAKED register_t __cdecl internal_6379ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        push edi
        je public_637a03b
        or edi, 0xFFFFFFFF
        public_6379ffe : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_637a00d
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        jmp public_637a013
        public_637a00d : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x30], eax
        public_637a013 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_637a020
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        public_637a020 : nop
        mov dword ptr ds : [ecx+4], edi
        mov edx, dword ptr ds : [esi+0x34]
        dec edx
        test ecx, ecx
        mov dword ptr ds : [esi+0x34], edx
        je public_637a034
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_637a034 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        jne public_6379ffe
        public_637a03b : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_637a054
        public_637a042 : nop
        mov edi, dword ptr ds : [eax+0x18]
        push eax
        call public_6391d5a
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_637a042
        public_637a054 : nop
        pop edi
        mov dword ptr ds : [esi+0x48], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6379ff0)
    }
}

#undef public_6379ffe
#undef public_637a00d
#undef public_637a013
#undef public_637a020
#undef public_637a034
#undef public_637a03b
#undef public_637a042
#undef public_637a054
