#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_418c9c);
CLANG_FORWARD_PROC_SYMBOL(public_418ca2);

#define public_40ae67 _public_40ae67

PROC_DECLARE(0x40ae40, internal_40ae40, public_40ae40);
extern "C" NAKED register_t __cdecl internal_40ae40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push eax
        mov ecx, esi
        call public_418ca2
        test eax, eax
        setne bl
        test bl, bl
        jne public_40ae67
/*FIXUP push offset public_42557c @0x40ae5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        mov ecx, esi
        call public_418c9c
        public_40ae67 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x40ae40)
    }
}

#undef public_40ae67
