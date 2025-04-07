#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a362);

#define public_6bd60ad _public_6bd60ad
#define public_6bd60f6 _public_6bd60f6
#define public_6bd60f8 _public_6bd60f8
#define public_6bd6143 _public_6bd6143
#define public_6bd6145 _public_6bd6145
#define public_6bd6154 _public_6bd6154
#define public_6bd616d _public_6bd616d
#define public_6bd61b6 _public_6bd61b6
#define public_6bd61b8 _public_6bd61b8
#define public_6bd6203 _public_6bd6203
#define public_6bd6205 _public_6bd6205
#define public_6bd6251 _public_6bd6251
#define public_6bd6253 _public_6bd6253
#define public_6bd629b _public_6bd629b
#define public_6bd629d _public_6bd629d
#define public_6bd62c2 _public_6bd62c2
#define public_6bd62ed _public_6bd62ed

PROC_DECLARE(0x6bd6070, internal_6bd6070, public_6bd6070);
extern "C" NAKED register_t __cdecl internal_6bd6070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a362 @0x6bd6072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a362
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x14]
        xor ebx, ebx
        cmp al, bl
        je public_6bd60ad
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6bd60ad : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, 1
        je public_6bd616d
        push 0x30
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6bd60f6
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd60f8
        public_6bd60f6 : nop
        xor esi, esi
        public_6bd60f8 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_6bd6143
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd6145
        public_6bd6143 : nop
        xor esi, esi
        public_6bd6145 : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+8], esi
        je public_6bd6154
        cmp esi, ebx
        jne public_6bd62c2
        public_6bd6154 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6bd616d : nop
        test al, 2
        je public_6bd62ed
        push 0x30
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6bd61b6
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd61b8
        public_6bd61b6 : nop
        xor esi, esi
        public_6bd61b8 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 3
        je public_6bd6203
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd6205
        public_6bd6203 : nop
        xor esi, esi
        public_6bd6205 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+8], esi
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 4
        je public_6bd6251
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd6253
        public_6bd6251 : nop
        xor esi, esi
        public_6bd6253 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+0xC], esi
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 5
        je public_6bd629b
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6bd6ea0
        lea ecx, ds:[esi+0x14]
        call public_6bd6ea0
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6bd629d
        public_6bd629b : nop
        xor esi, esi
        public_6bd629d : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], esi
        je public_6bd6154
        cmp dword ptr ds : [edi+8], ebx
        je public_6bd6154
        cmp esi, ebx
        je public_6bd6154
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6bd6154
        public_6bd62c2 : nop
        lea eax, ds:[edi+0x18]
        push eax
        call dword ptr ds : [public_6c0b13c]
        mov ecx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [edi+0x14], 1
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6bd62ed : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6bd6070)
    }
}

#undef public_6bd60ad
#undef public_6bd60f6
#undef public_6bd60f8
#undef public_6bd6143
#undef public_6bd6145
#undef public_6bd6154
#undef public_6bd616d
#undef public_6bd61b6
#undef public_6bd61b8
#undef public_6bd6203
#undef public_6bd6205
#undef public_6bd6251
#undef public_6bd6253
#undef public_6bd629b
#undef public_6bd629d
#undef public_6bd62c2
#undef public_6bd62ed
