#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d2af21 _public_6d2af21
#define public_6d2af3d _public_6d2af3d
#define public_6d2af80 _public_6d2af80
#define public_6d2af9b _public_6d2af9b
#define public_6d2afe7 _public_6d2afe7
#define public_6d2afee _public_6d2afee
#define public_6d2b046 _public_6d2b046
#define public_6d2b089 _public_6d2b089
#define public_6d2b0ab _public_6d2b0ab
#define public_6d2b0b0 _public_6d2b0b0
#define public_6d2b0cc _public_6d2b0cc

PROC_DECLARE(0x6d2aee0, internal_6d2aee0, public_6d2aee0);
extern "C" NAKED register_t __cdecl internal_6d2aee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        sub esp, 0x30
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ds : [eax+0x10]
        push ebx
        mov bx, word ptr ds : [eax]
        test bx, bx
        je public_6d2b0cc
        cmp bx, 0xFF
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        ja public_6d2afee
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2af21
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2af21 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2b0ab
        public_6d2af3d : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6d2afe7
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x24], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x3C], eax
        je public_6d2af9b
        lea ecx, ds:[ecx]
        public_6d2af80 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2af9b
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2af80
        public_6d2af9b : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2b0ab
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e6f0
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2b0ab
        public_6d2afe7 : nop
        xor eax, eax
        jmp public_6d2b0b0
        public_6d2afee : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2b089
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2b089
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ebp, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2b015*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        mov word ptr ss : [esp+0x28], di
        mov word ptr ss : [esp+0x2A], di
        call public_6d430d0
        add esp, 0x18
        cmp eax, ebp
        je public_6d2b046
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ds : [eax]
        jae public_6d2b0ab
        public_6d2b046 : nop
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        je public_6d2b089
        mov edi, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2b05a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov word ptr ss : [esp+0x20], ax
        mov word ptr ss : [esp+0x22], ax
        mov eax, dword ptr ds : [esi+0x30]
        push edi
        push eax
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2b089
        mov dx, word ptr ss : [esp+0x16]
        cmp dx, word ptr ds : [eax]
        jae public_6d2b0ab
        public_6d2b089 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2af3d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2af3d
        public_6d2b0ab : nop
        mov eax, 1
        public_6d2b0b0 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2b0cc
        mov eax, dword ptr ss : [esp+0x38]
        add dword ptr ds : [eax+0x10], 2
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 4
        public_6d2b0cc : nop
        xor al, al
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6d2aee0)
    }
}

#undef public_6d2af21
#undef public_6d2af3d
#undef public_6d2af80
#undef public_6d2af9b
#undef public_6d2afe7
#undef public_6d2afee
#undef public_6d2b046
#undef public_6d2b089
#undef public_6d2b0ab
#undef public_6d2b0b0
#undef public_6d2b0cc
