#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82320);
CLANG_FORWARD_PROC_SYMBOL(public_6f82940);

#define public_6f82350 _public_6f82350
#define public_6f82352 _public_6f82352

PROC_DECLARE(0x6f82320, internal_6f82320, public_6f82320);
extern "C" NAKED register_t __cdecl internal_6f82320()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_6f83000]
        push 0xC
        mov edi, eax
        call public_6f82940
        add esp, 4
        test eax, eax
        je public_6f82350
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_6f840f0
        mov dword ptr ds : [eax], offset public_6f83070
        mov esi, eax
        jmp public_6f82352
        public_6f82350 : nop
        xor esi, esi
        public_6f82352 : nop
        mov eax, dword ptr ds : [edi]
        push 0x40000000
/*FIXUP push offset public_6f840f0 @0x6f82359*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840f0
        push esi
        push edi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f82320)
    }
}

#undef public_6f82350
#undef public_6f82352
