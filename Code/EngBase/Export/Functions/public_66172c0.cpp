#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66172c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66172cd _public_66172cd
#define public_66172dd _public_66172dd
#define public_66172e0 _public_66172e0
#define public_66172ef _public_66172ef
#define public_66172f5 _public_66172f5
#define public_661730f _public_661730f

PROC_DECLARE(0x66172c0, internal_66172c0, public_66172c0);
extern "C" NAKED register_t __cdecl internal_66172c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        test ecx, ecx
        je public_661730f
        push edi
        public_66172cd : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        test edx, edx
        mov edi, ecx
        jne public_66172dd
        mov dword ptr ds : [esi], ecx
        jmp public_66172e0
        public_66172dd : nop
        mov dword ptr ds : [edx+0xC], ecx
        public_66172e0 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_66172ef
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+4], ecx
        jmp public_66172f5
        public_66172ef : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        public_66172f5 : nop
        mov edx, dword ptr ds : [esi+8]
        push eax
        dec edx
        mov dword ptr ds : [esi+8], edx
        call public_66281d0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        test ecx, ecx
        mov eax, edi
        jne public_66172cd
        pop edi
        public_661730f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66172c0)
    }
}

#undef public_66172cd
#undef public_66172dd
#undef public_66172e0
#undef public_66172ef
#undef public_66172f5
#undef public_661730f
