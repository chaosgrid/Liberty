#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f56cfa _public_6f56cfa
#define public_6f56d33 _public_6f56d33
#define public_6f56d48 _public_6f56d48

PROC_DECLARE(0x6f56ce0, internal_6f56ce0, public_6f56ce0);
extern "C" NAKED register_t __cdecl internal_6f56ce0()
{
    __asm
    {
        push ecx
        push esi
        call public_6f55490
        mov esi, 1
        push esi
        call public_6f4b090
        add esp, 4
        test eax, eax
        je public_6f56d48
        push edi
        public_6f56cfa : nop
        push esi
        call public_6f4f660
        fld st(0)
        add esp, 4
        call public_6f57f16
        mov edi, eax
        and edi, 0xFF
        mov dword ptr ss : [esp+8], edi
        fild dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x40
        jne public_6f56d33
/*FIXUP push offset public_6f61c60 @0x6f56d25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61c60
        push esi
        call public_6f4f570
        add esp, 8
        public_6f56d33 : nop
        push edi
        call public_6f55450
        inc esi
        push esi
        call public_6f4b090
        add esp, 8
        test eax, eax
        jne public_6f56cfa
        pop edi
        public_6f56d48 : nop
        call public_6f56b70
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f56ce0)
    }
}

#undef public_6f56cfa
#undef public_6f56d33
#undef public_6f56d48
