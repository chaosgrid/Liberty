#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f804d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f81bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac846);

#define public_6efb932 _public_6efb932
#define public_6efb958 _public_6efb958
#define public_6efb95a _public_6efb95a
#define public_6efb95c _public_6efb95c

PROC_DECLARE(0x6efb8e0, internal_6efb8e0, public_6efb8e0);
extern "C" NAKED register_t __cdecl internal_6efb8e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac846 @0x6efb8e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac846
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, 2
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], 0
        je public_6efb932
        dec eax
        jne public_6efb95c
        push 0xBC
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_6efb958
        mov ecx, eax
        call public_6f81bb0
        jmp public_6efb95a
        public_6efb932 : nop
        push 0xC4
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 1
        je public_6efb958
        mov ecx, eax
        call public_6f804d0
        jmp public_6efb95a
        public_6efb958 : nop
        xor eax, eax
        public_6efb95a : nop
        mov dword ptr ds : [esi], eax
        public_6efb95c : nop
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        test ecx, ecx
        mov ecx, dword ptr ss : [esp+4]
        setne al
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6efb8e0)
    }
}

#undef public_6efb932
#undef public_6efb958
#undef public_6efb95a
#undef public_6efb95c
