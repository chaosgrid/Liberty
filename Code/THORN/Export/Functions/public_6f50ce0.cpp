#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f50d2f _public_6f50d2f

PROC_DECLARE(0x6f50ce0, internal_6f50ce0, public_6f50ce0);
extern "C" NAKED register_t __cdecl internal_6f50ce0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f4b090
        push 1
        mov ebx, eax
        call public_6f505e0
        mov edi, eax
        push edi
        call public_6f50550
        call public_6f57f16
        push 2
        mov ebp, eax
        call public_6f4b090
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_6f50d2f
        push esi
        call public_6f4b520
        add esp, 4
        test eax, eax
        jne public_6f50d2f
/*FIXUP push offset public_6f60968 @0x6f50d20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60968
        push 2
        call public_6f4f570
        add esp, 8
        public_6f50d2f : nop
        push 4
        call public_6f4c260
        push esi
        push ebp
        push 1
        push edi
        call public_6f50d50
        push ebx
        call public_6f4b900
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f50ce0)
    }
}

#undef public_6f50d2f
