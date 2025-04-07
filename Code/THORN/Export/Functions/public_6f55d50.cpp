#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55560);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f55da7 _public_6f55da7
#define public_6f55dcd _public_6f55dcd

PROC_DECLARE(0x6f55d50, internal_6f55d50, public_6f55d50);
extern "C" NAKED register_t __cdecl internal_6f55d50()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        push 2
        call public_6f55560
        add esp, 4
/*FIXUP push offset public_6f616b4 @0x6f55d5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f616b4
        push 0
/*FIXUP push offset public_6f6186c @0x6f55d65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6186c
        push 3
        mov edi, eax
        call public_6f4f630
        add esp, 0xC
        push eax
        call public_6f4f510
        push 0
        push 0
        push 4
        mov esi, eax
        call public_6f4f6a0
        add esp, 0x14
        call public_6f57f16
        cmp esi, 0xFFFFFFFF
        mov ebx, eax
        jne public_6f55da7
/*FIXUP push offset public_6f61934 @0x6f55d98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61934
        push 3
        call public_6f4f570
        add esp, 8
        public_6f55da7 : nop
        mov eax, dword ptr ds : [esi*4+public_6f616a8]
        push eax
        push ebx
        push edi
        call dword ptr ds : [public_6f5a104]
        add esp, 0xC
        test eax, eax
        je public_6f55dcd
        push 0
        call public_6f556c0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_6f55dcd : nop
        push edi
        call dword ptr ds : [public_6f5a100]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f55d50)
    }
}

#undef public_6f55da7
#undef public_6f55dcd
