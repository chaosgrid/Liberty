#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d2a08e _public_6d2a08e
#define public_6d2a0aa _public_6d2a0aa
#define public_6d2a0f0 _public_6d2a0f0
#define public_6d2a10b _public_6d2a10b
#define public_6d2a157 _public_6d2a157
#define public_6d2a15e _public_6d2a15e
#define public_6d2a1b6 _public_6d2a1b6
#define public_6d2a1f9 _public_6d2a1f9
#define public_6d2a21b _public_6d2a21b
#define public_6d2a220 _public_6d2a220
#define public_6d2a23b _public_6d2a23b

PROC_DECLARE(0x6d2a050, internal_6d2a050, public_6d2a050);
extern "C" NAKED register_t __cdecl internal_6d2a050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x2C
        push esi
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d2a23b
        mov esi, dword ptr ds : [ecx+0xC]
        push ebx
        mov bx, word ptr ds : [eax]
        cmp bx, 0xFF
        push ebp
        push edi
        ja public_6d2a15e
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2a08e
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2a08e : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2a21b
        public_6d2a0aa : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6d2a157
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x38], eax
        je public_6d2a10b
        lea ebx, ds:[ebx]
        public_6d2a0f0 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2a10b
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2a0f0
        public_6d2a10b : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2a21b
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x24], offset _public_6d3e6f0
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2a21b
        public_6d2a157 : nop
        xor eax, eax
        jmp public_6d2a220
        public_6d2a15e : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2a1f9
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2a1f9
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ebp, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2a185*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        mov word ptr ss : [esp+0x58], di
        mov word ptr ss : [esp+0x5A], di
        call public_6d430d0
        add esp, 0x18
        cmp eax, ebp
        je public_6d2a1b6
        mov dx, word ptr ss : [esp+0x42]
        cmp dx, word ptr ds : [eax]
        jae public_6d2a21b
        public_6d2a1b6 : nop
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        je public_6d2a1f9
        mov edi, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2a1ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov word ptr ss : [esp+0x1C], ax
        mov word ptr ss : [esp+0x1E], ax
        mov eax, dword ptr ds : [esi+0x30]
        push edi
        push eax
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2a1f9
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ds : [eax]
        jae public_6d2a21b
        public_6d2a1f9 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2a0aa
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2a0aa
        public_6d2a21b : nop
        mov eax, 1
        public_6d2a220 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop edi
        pop ebp
        pop ebx
        je public_6d2a23b
        mov eax, dword ptr ss : [esp+0x38]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop esi
        add esp, 0x2C
        ret 8
        public_6d2a23b : nop
        xor al, al
        pop esi
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6d2a050)
    }
}

#undef public_6d2a08e
#undef public_6d2a0aa
#undef public_6d2a0f0
#undef public_6d2a10b
#undef public_6d2a157
#undef public_6d2a15e
#undef public_6d2a1b6
#undef public_6d2a1f9
#undef public_6d2a21b
#undef public_6d2a220
#undef public_6d2a23b
