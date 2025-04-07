#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f551f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55260);
CLANG_FORWARD_PROC_SYMBOL(public_6f55330);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f55296 _public_6f55296
#define public_6f552ac _public_6f552ac
#define public_6f552e3 _public_6f552e3
#define public_6f55322 _public_6f55322

PROC_DECLARE(0x6f55260, internal_6f55260, public_6f55260);
extern "C" NAKED register_t __cdecl internal_6f55260()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        call public_6f55330
        push esi
        call public_6f54f50
        mov edi, eax
        add esp, 8
        cmp edi, 0x32
        jle public_6f55296
        mov eax, dword ptr ds : [esi+0x10]
        push 0x32
        push edi
        push eax
/*FIXUP push offset public_6f61610 @0x6f55286*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61610
        call public_6f4f7a0
        add esp, 0x10
        cmp edi, 0x32
        public_6f55296 : nop
        jge public_6f552ac
        mov ecx, dword ptr ds : [esi+0x10]
        push 0x32
        push edi
        push ecx
/*FIXUP push offset public_6f615d8 @0x6f5529f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f615d8
        call public_6f4f7a0
        add esp, 0x10
        public_6f552ac : nop
        push esi
        call public_6f54f50
        xor edx, edx
        add esp, 4
        test eax, eax
        setne dl
        mov edi, edx
        test edi, edi
        je public_6f55322
        cmp eax, 8
        je public_6f552e3
        push 8
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
/*FIXUP push offset public_6f615a8 @0x6f552ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f615a8
        call public_6f4f7a0
        add esp, 0x10
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        public_6f552e3 : nop
        push edi
        push esi
        call public_6f551f0
        fst qword ptr ss : [esp+0x10]
        add esp, 8
        call public_6f57f16
        cmp eax, 0x12B9B0A1
        je public_6f55322
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        push 0x41B2B9B0
        push 0xA15BE612
        push ecx
        push edx
        push eax
/*FIXUP push offset public_6f61570 @0x6f55315*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61570
        call public_6f4f7a0
        add esp, 0x18
        public_6f55322 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f55260)
    }
}

#undef public_6f55296
#undef public_6f552ac
#undef public_6f552e3
#undef public_6f55322
