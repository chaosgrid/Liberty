#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63442c0);
CLANG_FORWARD_PROC_SYMBOL(public_6344710);
CLANG_FORWARD_PROC_SYMBOL(public_6345f10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b4b);

#define public_6345f41 _public_6345f41
#define public_6345f71 _public_6345f71
#define public_6345f73 _public_6345f73

PROC_DECLARE(0x6345f10, internal_6345f10, public_6345f10);
extern "C" NAKED register_t __cdecl internal_6345f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397b4b @0x6345f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x1C]
        test edi, edi
        je public_6345f41
        mov ecx, edi
        call public_63442c0
        push edi
        call public_6391d5a
        add esp, 4
        public_6345f41 : nop
        push 0x44
        mov dword ptr ds : [esi+0x1C], 0
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_6345f71
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        mov ecx, eax
        call public_6344710
        jmp public_6345f73
        public_6345f71 : nop
        xor eax, eax
        public_6345f73 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6345f10)
    }
}

#undef public_6345f41
#undef public_6345f71
#undef public_6345f73
