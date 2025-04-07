#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c50);
CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60878);

#define public_6cf142d _public_6cf142d
#define public_6cf143a _public_6cf143a
#define public_6cf1493 _public_6cf1493
#define public_6cf14b0 _public_6cf14b0
#define public_6cf14b2 _public_6cf14b2
#define public_6cf14c3 _public_6cf14c3
#define public_6cf14de _public_6cf14de
#define public_6cf14ec _public_6cf14ec
#define public_6cf152c _public_6cf152c

PROC_DECLARE(0x6cf1380, internal_6cf1380, public_6cf1380);
extern "C" NAKED register_t __cdecl internal_6cf1380()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+0x10]
        push 0xFFFFFFFF
/*FIXUP push public_6d60878 @0x6cf138c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60878
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        test ecx, ecx
        push ebx
        push esi
        jbe public_6cf152c
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6cf152c
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6cf152c
        imul ecx, 0x418
        mov eax, dword ptr ds : [edx+ecx-0x34]
        add edx, ecx
        cmp eax, dword ptr ss : [esp+0x30]
        jne public_6cf152c
        mov al, byte ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        xor bl, bl
        test al, al
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ss : [esp+0x19], al
        mov byte ptr ss : [esp+0x18], al
        je public_6cf142d
        mov eax, ecx
        sub eax, 2
        mov dword ptr ss : [esp+0x1C], 0
        je public_6cf143a
        sub eax, 3
        je public_6cf14ec
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x10
        public_6cf142d : nop
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        jmp public_6cf14ec
        public_6cf143a : nop
        mov ecx, dword ptr ds : [edx-0x38]
        push ecx
        call public_6d00280
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf152c
        mov dl, byte ptr ss : [esp+0x34]
        push 0xC
        mov byte ptr ss : [esp+0xC], dl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0
        call public_6d0cd60
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6cf14b2
        public_6cf1493 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6ce7c50
        test al, al
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6cf14b0
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6cf1493
        jmp public_6cf14b2
        public_6cf14b0 : nop
        mov bl, 1
        public_6cf14b2 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov edi, eax
        je public_6cf14de
        public_6cf14c3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6d0f620
        cmp esi, edi
        jne public_6cf14c3
        mov eax, dword ptr ss : [esp+0x10]
        public_6cf14de : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        test bl, bl
        pop edi
        je public_6cf152c
        public_6cf14ec : nop
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf152c
        mov esi, dword ptr ss : [esp+0x34]
        test esi, esi
        je public_6cf152c
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6cf152c
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x194]
        public_6cf152c : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x6cf1380)
    }
}

#undef public_6cf142d
#undef public_6cf143a
#undef public_6cf1493
#undef public_6cf14b0
#undef public_6cf14b2
#undef public_6cf14c3
#undef public_6cf14de
#undef public_6cf14ec
#undef public_6cf152c
