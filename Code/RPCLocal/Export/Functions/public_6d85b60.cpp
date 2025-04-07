#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d86950);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db24a2);

#define public_6d85b9d _public_6d85b9d
#define public_6d85be6 _public_6d85be6
#define public_6d85be8 _public_6d85be8
#define public_6d85c33 _public_6d85c33
#define public_6d85c35 _public_6d85c35
#define public_6d85c44 _public_6d85c44
#define public_6d85c5d _public_6d85c5d
#define public_6d85ca6 _public_6d85ca6
#define public_6d85ca8 _public_6d85ca8
#define public_6d85cf3 _public_6d85cf3
#define public_6d85cf5 _public_6d85cf5
#define public_6d85d41 _public_6d85d41
#define public_6d85d43 _public_6d85d43
#define public_6d85d8b _public_6d85d8b
#define public_6d85d8d _public_6d85d8d
#define public_6d85db2 _public_6d85db2
#define public_6d85ddd _public_6d85ddd

PROC_DECLARE(0x6d85b60, internal_6d85b60, public_6d85b60);
extern "C" NAKED register_t __cdecl internal_6d85b60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db24a2 @0x6d85b62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db24a2
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
        je public_6d85b9d
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6d85b9d : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, 1
        je public_6d85c5d
        push 0x30
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d85be6
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6d86950
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85be8
        public_6d85be6 : nop
        xor esi, esi
        public_6d85be8 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_6d85c33
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6d86950
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85c35
        public_6d85c33 : nop
        xor esi, esi
        public_6d85c35 : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+8], esi
        je public_6d85c44
        cmp esi, ebx
        jne public_6d85db2
        public_6d85c44 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6d85c5d : nop
        test al, 2
        je public_6d85ddd
        push 0x30
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6d85ca6
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6d86950
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85ca8
        public_6d85ca6 : nop
        xor esi, esi
        public_6d85ca8 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 3
        je public_6d85cf3
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6d86950
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85cf5
        public_6d85cf3 : nop
        xor esi, esi
        public_6d85cf5 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+8], esi
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 4
        je public_6d85d41
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6d86950
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85d43
        public_6d85d41 : nop
        xor esi, esi
        public_6d85d43 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+0xC], esi
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 5
        je public_6d85d8b
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6d86950
        lea ecx, ds:[esi+0x14]
        call public_6d86950
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6d85d8d
        public_6d85d8b : nop
        xor esi, esi
        public_6d85d8d : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], esi
        je public_6d85c44
        cmp dword ptr ds : [edi+8], ebx
        je public_6d85c44
        cmp esi, ebx
        je public_6d85c44
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6d85c44
        public_6d85db2 : nop
        lea eax, ds:[edi+0x18]
        push eax
        call dword ptr ds : [public_6db3128]
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
        public_6d85ddd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d85b60)
    }
}

#undef public_6d85b9d
#undef public_6d85be6
#undef public_6d85be8
#undef public_6d85c33
#undef public_6d85c35
#undef public_6d85c44
#undef public_6d85c5d
#undef public_6d85ca6
#undef public_6d85ca8
#undef public_6d85cf3
#undef public_6d85cf5
#undef public_6d85d41
#undef public_6d85d43
#undef public_6d85d8b
#undef public_6d85d8d
#undef public_6d85db2
#undef public_6d85ddd
