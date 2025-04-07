#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_452f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_452f40 _public_452f40

PROC_DECLARE(0x452f30, internal_452f30, public_452f30);
extern "C" NAKED register_t __cdecl internal_452f30()
{
    __asm
    {
        xor edx, edx
        mov ecx, offset public_66d230
        xor eax, eax
        lea esp, ss:[esp]
        public_452f40 : nop
        mov dword ptr ds : [eax+public_66d130], edx
        add eax, 4
        mov byte ptr ds : [ecx], dl
        inc ecx
        cmp eax, 0x100
        jl public_452f40
/*FIXUP push offset _public_452f60 @0x452f53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_452f60
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x452f30)
    }
}

#undef public_452f40
