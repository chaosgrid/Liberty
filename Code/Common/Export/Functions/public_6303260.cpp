#include "Common-PCH.h"


#define public_6303280 _public_6303280
#define public_63032a5 _public_63032a5

PROC_DECLARE(0x6303260, internal_6303260, public_6303260);
extern "C" NAKED register_t __cdecl internal_6303260()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        test ax, ax
        je public_63032a5
        push ebx
        mov ebx, dword ptr ds : [public_639931c]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6303280 : nop
        movzx eax, ax
        push eax
/*FIXUP push offset public_63a2700 @0x6303284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2700
        push esi
        add edi, 2
        call ebx
        xor eax, eax
        mov ax, word ptr ds : [edi]
        add esp, 0xC
        add esi, 4
        test ax, ax
        jne public_6303280
        mov byte ptr ds : [esi], al
        pop esi
        pop ebx
        pop edi
        ret 
        public_63032a5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax], 0
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6303260)
    }
}

#undef public_6303280
#undef public_63032a5
