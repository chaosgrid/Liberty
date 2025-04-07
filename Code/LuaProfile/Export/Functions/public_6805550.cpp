#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805550);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);

#define public_680557d _public_680557d

PROC_DECLARE(0x6805550, internal_6805550, public_6805550);
extern "C" NAKED register_t __cdecl internal_6805550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push edi
        call public_68051d0
        mov esi, eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 8
        cmp eax, 0xFFFFFFFA
        jne public_680557d
/*FIXUP push offset public_680d7fc @0x680556e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d7fc
        push 2
        call public_6805d80
        add esp, 8
        public_680557d : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, esi
        sub eax, edx
        pop edi
        sar eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805550)
    }
}

#undef public_680557d
