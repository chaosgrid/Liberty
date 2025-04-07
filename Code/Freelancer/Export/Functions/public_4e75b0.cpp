#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_4e75b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e79f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be9ba);

#define public_4e75ed _public_4e75ed
#define public_4e7654 _public_4e7654
#define public_4e775d _public_4e775d
#define public_4e7774 _public_4e7774
#define public_4e785b _public_4e785b
#define public_4e786b _public_4e786b

PROC_DECLARE(0x4e75b0, internal_4e75b0, public_4e75b0);
extern "C" NAKED register_t __cdecl internal_4e75b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5be9ba @0x4e75b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be9ba
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x254
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_4e75ed
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [esi+0x3B4], cx
        jmp public_4e786b
        public_4e75ed : nop
        mov ecx, dword ptr ds : [public_616844]
        mov eax, dword ptr ds : [public_616840]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x12]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call public_4e79f0
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        je public_4e785b
        mov ax, word ptr ss : [esp+0xE]
        mov word ptr ds : [esi+0x3B4], ax
        cmp dword ptr ss : [esp+0x10], 1
        jle public_4e7774
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xE4]
        push ecx
        push edi
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4e7654
        mov word ptr ss : [esp+0xE0], bx
        public_4e7654 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0xE0]
        push eax
        push ecx
        lea edx, ss:[esp+0x168]
/*FIXUP push offset public_5d8ec8 @0x4e7668*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8ec8
        push edx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x10
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x268], ebx
        call public_4144b0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x268], 1
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x5C], ebx
        call public_414280
        mov byte ptr ss : [esp+0x78], bl
        movzx eax, word ptr ds : [esi+0x3B4]
        lea ecx, ss:[esp+0x160]
        push ecx
        mov dword ptr ss : [esp+0x26C], 2
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c71c8]
        mov esi, eax
        add esp, 4
        lea edx, ds:[esi+1]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_4142a0
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        lea eax, ss:[esp+0x164]
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x24]
        push eax
        mov word ptr ds : [edx+esi*2], bx
        call public_4be370
        add esp, 0x10
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x268], 3
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x268], 5
        call public_4144f0
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x268], 4
        call public_445d70
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x268], 3
        call public_444e20
        mov eax, dword ptr ss : [esp+0x20]
        public_4e775d : nop
        cmp eax, ebx
        je public_4e786b
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        jmp public_4e786b
        public_4e7774 : nop
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x88], ebx
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x268], 6
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x270], 7
        mov dword ptr ss : [esp+0x88], ebx
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC8], ebx
        call public_413df0
        mov byte ptr ss : [esp+0xDC], bl
        movzx edx, word ptr ds : [esi+0x3B4]
        lea eax, ss:[esp+0x7C]
        push eax
        mov dword ptr ss : [esp+0x26C], 8
        mov dword ptr ss : [esp+0x80], edx
        mov dword ptr ss : [esp+0x84], edi
        call public_4be370
        add esp, 4
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x268], 9
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x268], 0xB
        call public_4144f0
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x268], 0xA
        call public_445d70
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x268], 9
        call public_444e20
        mov eax, dword ptr ss : [esp+0x84]
        jmp public_4e775d
        public_4e785b : nop
        mov edx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [edx]
        mov word ptr ds : [esi+0x3B4], ax
        public_4e786b : nop
        mov ecx, dword ptr ss : [esp+0x260]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x260
        ret 
        UNREACHABLE_TRAP(0x4e75b0)
    }
}

#undef public_4e75ed
#undef public_4e7654
#undef public_4e775d
#undef public_4e7774
#undef public_4e785b
#undef public_4e786b
