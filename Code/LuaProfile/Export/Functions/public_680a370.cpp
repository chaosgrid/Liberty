#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_68020d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);
CLANG_FORWARD_PROC_SYMBOL(public_680a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_680a3bf _public_680a3bf

PROC_DECLARE(0x680a370, internal_680a370, public_680a370);
extern "C" NAKED register_t __cdecl internal_680a370()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6801cf0
        push 1
        mov ebx, eax
        call public_6809c70
        mov edi, eax
        push edi
        call public_6809be0
        call public_680bdaa
        push 2
        mov ebp, eax
        call public_6801cf0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_680a3bf
        push esi
        call public_68020d0
        add esp, 4
        test eax, eax
        jne public_680a3bf
/*FIXUP push offset public_680d8c8 @0x680a3b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8c8
        push 2
        call public_6805d80
        add esp, 8
        public_680a3bf : nop
        push 4
        call public_6802870
        push esi
        push ebp
        push 1
        push edi
        call public_680a3e0
        push ebx
        call public_6802420
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x680a370)
    }
}

#undef public_680a3bf
