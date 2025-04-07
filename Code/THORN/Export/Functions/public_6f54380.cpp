#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52770);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f531a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54380);
CLANG_FORWARD_PROC_SYMBOL(public_6f54440);
CLANG_FORWARD_PROC_SYMBOL(public_6f54930);

#define public_6f543b6 _public_6f543b6
#define public_6f543cb _public_6f543cb
#define public_6f543d6 _public_6f543d6
#define public_6f5440b _public_6f5440b

PROC_DECLARE(0x6f54380, internal_6f54380, public_6f54380);
extern "C" NAKED register_t __cdecl internal_6f54380()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x28
        mov ebp, dword ptr ds : [esi+8]
        mov ebx, 1
        je public_6f543d6
        cmp eax, 0x7B
        je public_6f543cb
        cmp eax, 0x11C
        je public_6f543b6
/*FIXUP push offset public_6f613c0 @0x6f543a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613c0
        push esi
        call public_6f511c0
        add esp, 8
        jmp public_6f5440b
        public_6f543b6 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        push esi
        call public_6f53ef0
        push esi
        call public_6f52920
        add esp, 0xC
        jmp public_6f5440b
        public_6f543cb : nop
        push esi
        call public_6f54930
        add esp, 4
        jmp public_6f5440b
        public_6f543d6 : nop
        push edi
        mov edi, dword ptr ds : [esi+0x1C]
        push esi
        call public_6f52920
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        call public_6f54440
        push edi
        push 0x28
        push 0x29
        push esi
        call public_6f531a0
        mov edx, dword ptr ss : [esp+0x30]
        push 1
        push edx
        push esi
        call public_6f52f20
        mov ebx, dword ptr ss : [esp+0x38]
        add esp, 0x28
        pop edi
        public_6f5440b : nop
        push 2
        push ebp
        call public_6f52770
        push 0
        push ebp
        call public_6f52770
        xor eax, eax
        mov al, byte ptr ss : [esp+0x2C]
        add al, bl
        push eax
        push ebp
        call public_6f52770
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x18
        pop esi
        pop ebp
        dec eax
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54380)
    }
}

#undef public_6f543b6
#undef public_6f543cb
#undef public_6f543d6
#undef public_6f5440b
