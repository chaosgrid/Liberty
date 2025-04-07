#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c30);
CLANG_FORWARD_PROC_SYMBOL(public_6802360);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68032f0);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e40);

#define public_6809a46 _public_6809a46
#define public_6809a77 _public_6809a77

PROC_DECLARE(0x6809a20, internal_6809a20, public_6809a20);
extern "C" NAKED register_t __cdecl internal_6809a20()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        push 1
        call public_6805df0
        mov esi, eax
        mov al, byte ptr ds : [esi]
        add esp, 8
        cmp al, 0x1B
        jne public_6809a46
/*FIXUP push offset public_680e2b0 @0x6809a39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2b0
        call public_6802e00
        add esp, 4
        public_6809a46 : nop
        push 0
        push esi
        push 2
        call public_6805e40
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push esi
        call public_68032f0
        add esp, 0x18
        test eax, eax
        pop esi
        jne public_6809a77
        call public_6801c30
        test eax, eax
        jne public_6809a77
        push eax
        push eax
        call public_6802360
        add esp, 8
        public_6809a77 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6809a20)
    }
}

#undef public_6809a46
#undef public_6809a77
