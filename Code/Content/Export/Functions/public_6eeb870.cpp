#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeb870);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabd88);

#define public_6eeb8c8 _public_6eeb8c8
#define public_6eeb8d1 _public_6eeb8d1

PROC_DECLARE(0x6eeb870, internal_6eeb870, public_6eeb870);
extern "C" NAKED register_t __cdecl internal_6eeb870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabd88 @0x6eeb872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabd88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push esi
        xor esi, esi
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx+0x154]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x28], esi
        call public_6f66220
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        cmp ecx, esi
        jne public_6eeb8c8
        xor eax, eax
        jmp public_6eeb8d1
        public_6eeb8c8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, ecx
        sar eax, 2
        public_6eeb8d1 : nop
        cmp eax, 1
        push ecx
        seta bl
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eeb870)
    }
}

#undef public_6eeb8c8
#undef public_6eeb8d1
