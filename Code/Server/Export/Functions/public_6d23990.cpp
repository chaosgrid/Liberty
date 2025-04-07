#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23990);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6291b);

#define public_6d239ca _public_6d239ca
#define public_6d239f1 _public_6d239f1
#define public_6d23a13 _public_6d23a13
#define public_6d23a35 _public_6d23a35

PROC_DECLARE(0x6d23990, internal_6d23990, public_6d23990);
extern "C" NAKED register_t __cdecl internal_6d23990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6291b @0x6d23992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6291b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6d68d8c
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 1
        je public_6d239ca
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d239ca : nop
        push edi
        lea edi, ds:[esi+0x18]
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6d68d00
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], 2
        je public_6d239f1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d239f1 : nop
        mov dword ptr ds : [edi], offset public_6d68d28
        mov dword ptr ds : [esi], offset public_6d68edc
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], 3
        pop edi
        je public_6d23a13
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d23a13 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 4
        je public_6d23a35
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d23a35 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_6d68d28
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d23990)
    }
}

#undef public_6d239ca
#undef public_6d239f1
#undef public_6d23a13
#undef public_6d23a35
