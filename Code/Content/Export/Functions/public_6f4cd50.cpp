#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf149);

#define public_6f4cd8b _public_6f4cd8b
#define public_6f4ce5e _public_6f4ce5e
#define public_6f4ce6a _public_6f4ce6a
#define public_6f4ceac _public_6f4ceac
#define public_6f4ceb8 _public_6f4ceb8
#define public_6f4cef0 _public_6f4cef0
#define public_6f4cefc _public_6f4cefc

PROC_DECLARE(0x6f4cd50, internal_6f4cd50, public_6f4cd50);
extern "C" NAKED register_t __cdecl internal_6f4cd50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf149 @0x6f4cd58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf149
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        test al, al
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, ecx
        jne public_6f4cd8b
        mov eax, dword ptr ss : [esp+0x58]
        push edi
        push eax
        call public_6f4d090
        test al, al
        jne public_6f4cefc
        public_6f4cd8b : nop
        mov cl, byte ptr ss : [esp+0x64]
        push ebp
        mov byte ptr ss : [esp+0x14], cl
        xor ebp, ebp
        push ebp
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb32c8]
        mov eax, dword ptr ss : [esp+0x5C]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x5C], ebp
        call dword ptr ds : [public_6fb3528]
        mov cl, byte ptr ss : [esp+0x70]
        add esp, 8
        mov byte ptr ss : [esp+0x24], cl
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb32c8]
        mov dword ptr ss : [esp+0x34], ebp
        mov edx, dword ptr ds : [public_6fb32cc]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x60], 1
        call dword ptr ds : [public_6fb32d0]
        mov dl, byte ptr ss : [esp+0x24]
        push ebp
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], edi
        mov byte ptr ss : [esp+0x3C], dl
        call dword ptr ds : [public_6fb32c8]
        mov eax, dword ptr ds : [public_6fb32cc]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6fb32d0]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x48], eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[esi+0x1E4]
        mov byte ptr ss : [esp+0x5C], 2
        call public_6f4d7c0
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x54], 1
        je public_6f4ce6a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4ce5e
        cmp cl, 0xFF
        je public_6f4ce5e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4ce6a
        public_6f4ce5e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4ce6a : nop
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        call dword ptr ds : [public_6fb3618]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        push edi
        push eax
        push ecx
        call public_6f50c50
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0x18
        cmp ecx, ebp
        je public_6f4ceb8
        mov al, byte ptr ds : [ecx-1]
        test al, al
        je public_6f4ceac
        cmp al, 0xFF
        je public_6f4ceac
        dec al
        mov byte ptr ds : [ecx-1], al
        jmp public_6f4ceb8
        public_6f4ceac : nop
        add ecx, 0xFFFFFFFE
        push ecx
        call public_6fa8fe0
        add esp, 4
        public_6f4ceb8 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        cmp ecx, ebp
        pop ebp
        je public_6f4cefc
        mov al, byte ptr ds : [ecx-1]
        test al, al
        je public_6f4cef0
        cmp al, 0xFF
        je public_6f4cef0
        dec al
        pop edi
        mov byte ptr ds : [ecx-1], al
        pop esi
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 0x14
        public_6f4cef0 : nop
        add ecx, 0xFFFFFFFE
        push ecx
        call public_6fa8fe0
        add esp, 4
        public_6f4cefc : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 0x14
        UNREACHABLE_TRAP(0x6f4cd50)
    }
}

#undef public_6f4cd8b
#undef public_6f4ce5e
#undef public_6f4ce6a
#undef public_6f4ceac
#undef public_6f4ceb8
#undef public_6f4cef0
#undef public_6f4cefc
