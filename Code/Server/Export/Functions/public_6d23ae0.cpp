#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23ae0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6291b);

#define public_6d23b1a _public_6d23b1a
#define public_6d23b41 _public_6d23b41
#define public_6d23b63 _public_6d23b63
#define public_6d23b85 _public_6d23b85

PROC_DECLARE(0x6d23ae0, internal_6d23ae0, public_6d23ae0);
extern "C" NAKED register_t __cdecl internal_6d23ae0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6291b @0x6d23ae2*/
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
        mov dword ptr ds : [esi], offset public_6d68d3c
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 1
        je public_6d23b1a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d23b1a : nop
        push edi
        lea edi, ds:[esi+0x18]
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6d68d00
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], 2
        je public_6d23b41
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d23b41 : nop
        mov dword ptr ds : [edi], offset public_6d68d28
        mov dword ptr ds : [esi], offset public_6d68edc
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], 3
        pop edi
        je public_6d23b63
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d23b63 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 4
        je public_6d23b85
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d23b85 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_6d68d28
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d23ae0)
    }
}

#undef public_6d23b1a
#undef public_6d23b41
#undef public_6d23b63
#undef public_6d23b85
