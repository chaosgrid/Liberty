#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32200);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a4d2);

#define public_6b3140d _public_6b3140d
#define public_6b31456 _public_6b31456
#define public_6b31458 _public_6b31458
#define public_6b314a3 _public_6b314a3
#define public_6b314a5 _public_6b314a5
#define public_6b314b4 _public_6b314b4
#define public_6b314cd _public_6b314cd
#define public_6b31516 _public_6b31516
#define public_6b31518 _public_6b31518
#define public_6b31563 _public_6b31563
#define public_6b31565 _public_6b31565
#define public_6b315b1 _public_6b315b1
#define public_6b315b3 _public_6b315b3
#define public_6b315fb _public_6b315fb
#define public_6b315fd _public_6b315fd
#define public_6b31622 _public_6b31622
#define public_6b3164d _public_6b3164d

PROC_DECLARE(0x6b313d0, internal_6b313d0, public_6b313d0);
extern "C" NAKED register_t __cdecl internal_6b313d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a4d2 @0x6b313d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a4d2
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
        je public_6b3140d
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6b3140d : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, 1
        je public_6b314cd
        push 0x30
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6b31456
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6b32200
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b31458
        public_6b31456 : nop
        xor esi, esi
        public_6b31458 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_6b314a3
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6b32200
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b314a5
        public_6b314a3 : nop
        xor esi, esi
        public_6b314a5 : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+8], esi
        je public_6b314b4
        cmp esi, ebx
        jne public_6b31622
        public_6b314b4 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6b314cd : nop
        test al, 2
        je public_6b3164d
        push 0x30
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6b31516
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6b32200
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b31518
        public_6b31516 : nop
        xor esi, esi
        public_6b31518 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 3
        je public_6b31563
        mov al, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], al
        call public_6b32200
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b31565
        public_6b31563 : nop
        xor esi, esi
        public_6b31565 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+8], esi
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 4
        je public_6b315b1
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi], cl
        lea ecx, ds:[esi+4]
        call public_6b32200
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b315b3
        public_6b315b1 : nop
        xor esi, esi
        public_6b315b3 : nop
        push 0x30
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [edi+0xC], esi
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 5
        je public_6b315fb
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov byte ptr ds : [esi], dl
        call public_6b32200
        lea ecx, ds:[esi+0x14]
        call public_6b32200
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        jmp public_6b315fd
        public_6b315fb : nop
        xor esi, esi
        public_6b315fd : nop
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], esi
        je public_6b314b4
        cmp dword ptr ds : [edi+8], ebx
        je public_6b314b4
        cmp esi, ebx
        je public_6b314b4
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6b314b4
        public_6b31622 : nop
        lea eax, ds:[edi+0x18]
        push eax
        call dword ptr ds : [public_6b6b118]
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
        public_6b3164d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6b313d0)
    }
}

#undef public_6b3140d
#undef public_6b31456
#undef public_6b31458
#undef public_6b314a3
#undef public_6b314a5
#undef public_6b314b4
#undef public_6b314cd
#undef public_6b31516
#undef public_6b31518
#undef public_6b31563
#undef public_6b31565
#undef public_6b315b1
#undef public_6b315b3
#undef public_6b315fb
#undef public_6b315fd
#undef public_6b31622
#undef public_6b3164d
