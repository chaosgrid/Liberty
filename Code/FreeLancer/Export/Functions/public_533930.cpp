#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533930);
CLANG_FORWARD_JUMP_SYMBOL(public_5c08f8);

#define public_5339a0 _public_5339a0
#define public_5339b2 _public_5339b2
#define public_5339c4 _public_5339c4

PROC_DECLARE(0x533930, internal_533930, public_533930);
extern "C" NAKED register_t __cdecl internal_533930()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c08f8 @0x533932*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c08f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
/*FIXUP push offset public_5cad80 @0x53395c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp]
        jl public_5339b2
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        mov eax, dword ptr ss : [esp+4]
        setge bl
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_5339a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_5339a0 : nop
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_5339b2 : nop
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_5339c4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_5339c4 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor al, al
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x533930)
    }
}

#undef public_5339a0
#undef public_5339b2
#undef public_5339c4
