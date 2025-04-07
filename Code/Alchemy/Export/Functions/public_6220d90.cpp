#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220d90);
CLANG_FORWARD_PROC_SYMBOL(public_6220e20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248c1b);

#define public_6220dcc _public_6220dcc
#define public_6220dde _public_6220dde
#define public_6220dec _public_6220dec

PROC_DECLARE(0x6220d90, internal_6220d90, public_6220d90);
extern "C" NAKED register_t __cdecl internal_6220d90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248c1b @0x6220d92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248c1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_624d7e8
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6220dcc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x1C], ebp
        public_6220dcc : nop
        mov ebx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [edi+0xC]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6220dec
        public_6220dde : nop
        mov ecx, esi
        call public_6220e20
        add esi, 0x10
        cmp esi, ebx
        jne public_6220dde
        public_6220dec : nop
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi+0x14], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6220d90)
    }
}

#undef public_6220dcc
#undef public_6220dde
#undef public_6220dec
