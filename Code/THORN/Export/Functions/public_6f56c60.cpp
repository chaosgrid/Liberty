#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f56ca6 _public_6f56ca6
#define public_6f56cb5 _public_6f56cb5

PROC_DECLARE(0x6f56c60, internal_6f56c60, public_6f56c60);
extern "C" NAKED register_t __cdecl internal_6f56c60()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        push 1
        call public_6f4f5e0
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        push ecx
        push 0x3FF00000
        push 0
        push 2
        mov edi, eax
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        push eax
        call public_6f56b00
        mov esi, eax
        add esp, 8
        test esi, esi
        jle public_6f56ca6
        cmp esi, dword ptr ss : [esp+8]
        jle public_6f56cb5
/*FIXUP public_6f56ca6 : nop
        push offset public_6f61c50 @0x6f56ca6*/
  FIXUP public_6f56ca6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61c50
        push 2
        call public_6f4f570
        add esp, 8
        public_6f56cb5 : nop
        xor edx, edx
        mov dl, byte ptr ds : [esi+edi-1]
        sub esp, 8
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56c60)
    }
}

#undef public_6f56ca6
#undef public_6f56cb5
