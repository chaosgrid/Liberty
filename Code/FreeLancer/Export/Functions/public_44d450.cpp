#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_44d450);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9cb8);

#define public_44d4a1 _public_44d4a1
#define public_44d4b4 _public_44d4b4
#define public_44d4c3 _public_44d4c3

PROC_DECLARE(0x44d450, internal_44d450, public_44d450);
extern "C" NAKED register_t __cdecl internal_44d450()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9cb8 @0x44d452*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9cb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ds : [ebx], offset public_5cc094
/*FIXUP push offset public_5cb6b4 @0x44d474*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        mov dword ptr ss : [esp+0x18], 0
        call public_59da10
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_44d4c3
        push 0
        call public_4424f0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        test eax, eax
        je public_44d4b4
        push esi
        public_44d4a1 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_44d4a1
        pop esi
        public_44d4b4 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_44d4c3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx], offset public_5cc084
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x44d450)
    }
}

#undef public_44d4a1
#undef public_44d4b4
#undef public_44d4c3
