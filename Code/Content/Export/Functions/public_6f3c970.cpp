#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c970);

#define public_6f3c990 _public_6f3c990

PROC_DECLARE(0x6f3c970, internal_6f3c970, public_6f3c970);
extern "C" NAKED register_t __cdecl internal_6f3c970()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [public_6fb3294]
/*FIXUP push offset public_6fb9848 @0x6f3c97c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3c990
        pop edi
        mov al, 1
        pop esi
        ret 
/*FIXUP public_6f3c990 : nop
        push offset public_6fb9840 @0x6f3c990*/
  FIXUP public_6f3c990 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push esi
        call edi
        add esp, 8
        test eax, eax
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3c970)
    }
}

#undef public_6f3c990
