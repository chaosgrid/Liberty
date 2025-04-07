#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6809050);
CLANG_FORWARD_PROC_SYMBOL(public_68092f0);
CLANG_FORWARD_PROC_SYMBOL(public_6809360);
CLANG_FORWARD_PROC_SYMBOL(public_6809430);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_6809396 _public_6809396
#define public_68093ac _public_68093ac
#define public_68093e3 _public_68093e3
#define public_6809422 _public_6809422

PROC_DECLARE(0x6809360, internal_6809360, public_6809360);
extern "C" NAKED register_t __cdecl internal_6809360()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        call public_6809430
        push esi
        call public_6809050
        mov edi, eax
        add esp, 8
        cmp edi, 0x32
        jle public_6809396
        mov eax, dword ptr ds : [esi+0x10]
        push 0x32
        push edi
        push eax
/*FIXUP push offset public_680df40 @0x6809386*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680df40
        call public_6805fb0
        add esp, 0x10
        cmp edi, 0x32
        public_6809396 : nop
        jge public_68093ac
        mov ecx, dword ptr ds : [esi+0x10]
        push 0x32
        push edi
        push ecx
/*FIXUP push offset public_680df08 @0x680939f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680df08
        call public_6805fb0
        add esp, 0x10
        public_68093ac : nop
        push esi
        call public_6809050
        xor edx, edx
        add esp, 4
        test eax, eax
        setne dl
        mov edi, edx
        test edi, edi
        je public_6809422
        cmp eax, 8
        je public_68093e3
        push 8
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
/*FIXUP push offset public_680ded8 @0x68093ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680ded8
        call public_6805fb0
        add esp, 0x10
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        public_68093e3 : nop
        push edi
        push esi
        call public_68092f0
        fst qword ptr ss : [esp+0x10]
        add esp, 8
        call public_680bdaa
        cmp eax, 0x12B9B0A1
        je public_6809422
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        push 0x41B2B9B0
        push 0xA15BE612
        push ecx
        push edx
        push eax
/*FIXUP push offset public_680dea0 @0x6809415*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dea0
        call public_6805fb0
        add esp, 0x18
        public_6809422 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6809360)
    }
}

#undef public_6809396
#undef public_68093ac
#undef public_68093e3
#undef public_6809422
