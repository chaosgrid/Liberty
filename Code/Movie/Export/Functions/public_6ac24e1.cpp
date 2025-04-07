#include "Movie-PCH.h"


#define public_6ac24f2 _public_6ac24f2
#define public_6ac250a _public_6ac250a
#define public_6ac251d _public_6ac251d
#define public_6ac2532 _public_6ac2532
#define public_6ac2544 _public_6ac2544

PROC_DECLARE(0x6ac24e1, internal_6ac24e1, public_6ac24e1);
extern "C" NAKED register_t __cdecl internal_6ac24e1()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jne public_6ac24f2
        mov eax, 0x80004003
        jmp public_6ac2544
        public_6ac24f2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_6ac250a
        mov ecx, dword ptr ds : [eax]
        push edi
        push dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [ecx+0x10]
        jmp public_6ac2544
        public_6ac250a : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, dword ptr ds : [public_6add1d0]
        jb public_6ac251d
        mov eax, 0x80070057
        jmp public_6ac2544
        public_6ac251d : nop
        push 0x64
        call dword ptr ds : [public_6ada1c4]
        test eax, eax
        mov dword ptr ds : [edi], eax
        jne public_6ac2532
        mov eax, 0x8007000E
        jmp public_6ac2544
        public_6ac2532 : nop
        imul esi, 0x78
        push 0x19
        add esi, offset public_6add1d8
        pop ecx
        mov edi, eax
        rep movsd
        xor eax, eax
        public_6ac2544 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac24e1)
    }
}

#undef public_6ac24f2
#undef public_6ac250a
#undef public_6ac251d
#undef public_6ac2532
#undef public_6ac2544
