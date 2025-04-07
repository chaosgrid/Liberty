#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f577d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c00);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad3d8);

#define public_6f06a39 _public_6f06a39

PROC_DECLARE(0x6f069c0, internal_6f069c0, public_6f069c0);
extern "C" NAKED register_t __cdecl internal_6f069c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad3d8 @0x6f069c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad3d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], 0
        lea eax, ss:[esp+4]
        push eax
        push 0x15
        mov dword ptr ss : [esp+0x18], 0
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x114], 1
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        call public_6f57740
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        call public_6f577d0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57c00
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_6f06a39
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f06a39 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f069c0)
    }
}

#undef public_6f06a39
