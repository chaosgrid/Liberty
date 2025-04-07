#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be12a0);
CLANG_FORWARD_PROC_SYMBOL(public_6be17d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09b10);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a869);

#define public_6bec344 _public_6bec344
#define public_6bec370 _public_6bec370
#define public_6bec379 _public_6bec379

PROC_DECLARE(0x6bec2d0, internal_6bec2d0, public_6bec2d0);
extern "C" NAKED register_t __cdecl internal_6bec2d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a869 @0x6bec2d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a869
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_6be12a0
        cmp eax, ebx
        je public_6bec344
        mov edx, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov ecx, eax
        call public_6be17d0
        test eax, eax
        jne public_6bec344
        mov ecx, dword ptr ss : [esp+0x28]
/*FIXUP push offset public_6c0bbf4 @0x6bec327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call public_6c09b10
        add esp, 8
        push eax
        call dword ptr ds : [public_6c0b154]
        add esp, 8
        public_6bec344 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6bec379
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6bec370
        cmp cl, 0xFF
        je public_6bec370
        dec cl
        pop esi
        mov byte ptr ds : [eax], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_6bec370 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bec379 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6bec2d0)
    }
}

#undef public_6bec344
#undef public_6bec370
#undef public_6bec379
