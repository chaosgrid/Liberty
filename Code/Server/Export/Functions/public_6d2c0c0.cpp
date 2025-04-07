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

#define public_6d2c100 _public_6d2c100
#define public_6d2c118 _public_6d2c118
#define public_6d2c128 _public_6d2c128
#define public_6d2c173 _public_6d2c173
#define public_6d2c18d _public_6d2c18d
#define public_6d2c192 _public_6d2c192
#define public_6d2c19f _public_6d2c19f
#define public_6d2c1a4 _public_6d2c1a4
#define public_6d2c1d6 _public_6d2c1d6
#define public_6d2c1f2 _public_6d2c1f2
#define public_6d2c291 _public_6d2c291
#define public_6d2c295 _public_6d2c295
#define public_6d2c2db _public_6d2c2db
#define public_6d2c2fd _public_6d2c2fd
#define public_6d2c302 _public_6d2c302
#define public_6d2c30e _public_6d2c30e
#define public_6d2c310 _public_6d2c310

PROC_DECLARE(0x6d2c0c0, internal_6d2c0c0, public_6d2c0c0);
extern "C" NAKED register_t __cdecl internal_6d2c0c0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        mov bx, word ptr ds : [edi]
        test bx, bx
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x48], edi
        je public_6d2c19f
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2c128
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2c100
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2c100 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c18d
        public_6d2c118 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2c18d
        xor eax, eax
        jmp public_6d2c192
        public_6d2c128 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2c173
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2c173
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2c140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov edi, dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test al, al
        jne public_6d2c18d
        public_6d2c173 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2c118
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c118
        public_6d2c18d : nop
        mov eax, 1
        public_6d2c192 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x48], 1
        jne public_6d2c1a4
        public_6d2c19f : nop
        mov byte ptr ss : [esp+0x48], 0
        public_6d2c1a4 : nop
        mov edx, dword ptr ss : [esp+0x44]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2c30e
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2c295
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2c1d6
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2c1d6 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c2fd
        public_6d2c1f2 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6d2c291
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call public_6d40810
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2c2fd
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x24], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push edi
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2c2fd
        public_6d2c291 : nop
        xor eax, eax
        jmp public_6d2c302
        public_6d2c295 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2c2db
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2c2db
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2c2af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x58], bx
        mov word ptr ss : [esp+0x5A], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2c2db
        mov dx, word ptr ss : [esp+0x46]
        cmp dx, word ptr ds : [eax]
        jae public_6d2c2fd
        public_6d2c2db : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2c1f2
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c1f2
        public_6d2c2fd : nop
        mov eax, 1
        public_6d2c302 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d2c30e
        mov al, 1
        jmp public_6d2c310
        public_6d2c30e : nop
        xor al, al
        public_6d2c310 : nop
        mov bl, byte ptr ss : [esp+0x48]
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
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d2c0c0)
    }
}

#undef public_6d2c100
#undef public_6d2c118
#undef public_6d2c128
#undef public_6d2c173
#undef public_6d2c18d
#undef public_6d2c192
#undef public_6d2c19f
#undef public_6d2c1a4
#undef public_6d2c1d6
#undef public_6d2c1f2
#undef public_6d2c291
#undef public_6d2c295
#undef public_6d2c2db
#undef public_6d2c2fd
#undef public_6d2c302
#undef public_6d2c30e
#undef public_6d2c310
