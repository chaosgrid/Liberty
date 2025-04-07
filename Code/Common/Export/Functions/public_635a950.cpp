#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63539d0);
CLANG_FORWARD_PROC_SYMBOL(public_635a900);
CLANG_FORWARD_PROC_SYMBOL(public_635a950);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63981ab);

#define public_635a991 _public_635a991
#define public_635a9b5 _public_635a9b5
#define public_635a9b7 _public_635a9b7

PROC_DECLARE(0x635a950, internal_635a950, public_635a950);
extern "C" NAKED register_t __cdecl internal_635a950()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63981ab @0x635a958*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63981ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        call public_635a900
        add esp, 4
        test eax, eax
        je public_635a991
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], 0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        public_635a991 : nop
        push 0x74
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_635a9b5
        push esi
        mov ecx, eax
        call public_63539d0
        jmp public_635a9b7
        public_635a9b5 : nop
        xor eax, eax
        public_635a9b7 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], 1
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x635a950)
    }
}

#undef public_635a991
#undef public_635a9b5
#undef public_635a9b7
