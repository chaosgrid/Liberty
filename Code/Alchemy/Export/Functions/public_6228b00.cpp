#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6228b00);
CLANG_FORWARD_PROC_SYMBOL(public_6229dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6229de0);
CLANG_FORWARD_JUMP_SYMBOL(public_62491a8);

#define public_6228b3b _public_6228b3b
#define public_6228b79 _public_6228b79

PROC_DECLARE(0x6228b00, internal_6228b00, public_6228b00);
extern "C" NAKED register_t __cdecl internal_6228b00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62491a8 @0x6228b08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62491a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push ebp
        push esi
        lea ecx, ss:[esp+0x18]
        push edi
        lea esi, ds:[eax+0x1C]
        push ecx
        mov ecx, esi
        call public_6229dc0
        mov edi, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], 0
        public_6228b3b : nop
        lea edx, ss:[esp+0x24]
        mov ecx, esi
        push edx
        call public_6229de0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, edx
        setne al
        test al, al
        je public_6228b79
        push edi
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6228b79
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6228b3b
        public_6228b79 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6228b00)
    }
}

#undef public_6228b3b
#undef public_6228b79
