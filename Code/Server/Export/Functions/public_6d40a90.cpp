#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40af0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d40b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d40aad _public_6d40aad
#define public_6d40ad4 _public_6d40ad4

PROC_DECLARE(0x6d40a90, internal_6d40a90, public_6d40a90);
extern "C" NAKED register_t __cdecl internal_6d40a90()
{
    __asm
    {
        mov al, byte ptr ds : [public_6d904ac]
        push ebx
        mov bl, 1
        test bl, al
        jne public_6d40aad
        or al, bl
        mov ecx, offset public_6d904e0
        mov byte ptr ds : [public_6d904ac], al
        call public_6d40b30
/*FIXUP public_6d40aad : nop
        push offset _public_6d40b10 @0x6d40aad*/
  FIXUP public_6d40aad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d40b10
        call public_6d6013e
        mov al, byte ptr ds : [public_6d904ad]
        add esp, 4
        test bl, al
        jne public_6d40ad4
        or al, bl
        mov ecx, offset public_6d904c0
        mov byte ptr ds : [public_6d904ad], al
        call public_6d40b30
/*FIXUP public_6d40ad4 : nop
        push offset _public_6d40af0 @0x6d40ad4*/
  FIXUP public_6d40ad4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d40af0
        call public_6d6013e
        add esp, 4
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d40a90)
    }
}

#undef public_6d40aad
#undef public_6d40ad4
