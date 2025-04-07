#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40810);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d2c377 _public_6d2c377
#define public_6d2c38f _public_6d2c38f
#define public_6d2c39f _public_6d2c39f
#define public_6d2c3ea _public_6d2c3ea
#define public_6d2c404 _public_6d2c404
#define public_6d2c409 _public_6d2c409
#define public_6d2c416 _public_6d2c416
#define public_6d2c41b _public_6d2c41b
#define public_6d2c44d _public_6d2c44d
#define public_6d2c469 _public_6d2c469
#define public_6d2c508 _public_6d2c508
#define public_6d2c50c _public_6d2c50c
#define public_6d2c552 _public_6d2c552
#define public_6d2c574 _public_6d2c574
#define public_6d2c579 _public_6d2c579
#define public_6d2c585 _public_6d2c585
#define public_6d2c587 _public_6d2c587

PROC_DECLARE(0x6d2c330, internal_6d2c330, public_6d2c330);
extern "C" NAKED register_t __cdecl internal_6d2c330()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov bx, word ptr ds : [edi]
        test bx, bx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], edi
        je public_6d2c416
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2c39f
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2c377
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2c377 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c404
        public_6d2c38f : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2c404
        xor eax, eax
        jmp public_6d2c409
        public_6d2c39f : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2c3ea
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2c3ea
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2c3b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        jne public_6d2c404
        public_6d2c3ea : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2c38f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c38f
        public_6d2c404 : nop
        mov eax, 1
        public_6d2c409 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x13], 1
        jne public_6d2c41b
        public_6d2c416 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6d2c41b : nop
        mov edx, dword ptr ss : [esp+0x48]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2c585
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2c50c
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2c44d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2c44d : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c574
        public_6d2c469 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6d2c508
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_6d40810
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2c574
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push edi
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2c574
        public_6d2c508 : nop
        xor eax, eax
        jmp public_6d2c579
        public_6d2c50c : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2c552
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2c552
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2c526*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x50]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x5C], bx
        mov word ptr ss : [esp+0x5E], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2c552
        mov dx, word ptr ss : [esp+0x4A]
        cmp dx, word ptr ds : [eax]
        jae public_6d2c574
        public_6d2c552 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2c469
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c469
        public_6d2c574 : nop
        mov eax, 1
        public_6d2c579 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d2c585
        mov al, 1
        jmp public_6d2c587
        public_6d2c585 : nop
        xor al, al
        public_6d2c587 : nop
        mov bl, byte ptr ss : [esp+0x13]
        xor ecx, ecx
        cmp al, bl
        movzx eax, byte ptr ss : [ebp+0x10]
        setne cl
        pop edi
        pop esi
        pop ebp
        pop ebx
        sub eax, ecx
        neg eax
        sbb eax, eax
        inc eax
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6d2c330)
    }
}

#undef public_6d2c377
#undef public_6d2c38f
#undef public_6d2c39f
#undef public_6d2c3ea
#undef public_6d2c404
#undef public_6d2c409
#undef public_6d2c416
#undef public_6d2c41b
#undef public_6d2c44d
#undef public_6d2c469
#undef public_6d2c508
#undef public_6d2c50c
#undef public_6d2c552
#undef public_6d2c574
#undef public_6d2c579
#undef public_6d2c585
#undef public_6d2c587
