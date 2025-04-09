#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_41d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_41dae0);
CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_41f150);
CLANG_FORWARD_PROC_SYMBOL(public_41f720);
CLANG_FORWARD_PROC_SYMBOL(public_41f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_41f850);
CLANG_FORWARD_PROC_SYMBOL(public_41f8a0);
CLANG_FORWARD_PROC_SYMBOL(public_41f970);
CLANG_FORWARD_PROC_SYMBOL(public_41fa10);
CLANG_FORWARD_PROC_SYMBOL(public_41fd90);
CLANG_FORWARD_PROC_SYMBOL(public_420060);
CLANG_FORWARD_PROC_SYMBOL(public_4201a0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4223d0);
CLANG_FORWARD_PROC_SYMBOL(public_422410);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8b00);

#define public_41f1a4 _public_41f1a4
#define public_41f1c6 _public_41f1c6
#define public_41f218 _public_41f218
#define public_41f248 _public_41f248
#define public_41f267 _public_41f267
#define public_41f26c _public_41f26c
#define public_41f2a8 _public_41f2a8
#define public_41f2cb _public_41f2cb
#define public_41f2d5 _public_41f2d5
#define public_41f2e3 _public_41f2e3
#define public_41f2e5 _public_41f2e5
#define public_41f30a _public_41f30a
#define public_41f33e _public_41f33e
#define public_41f495 _public_41f495
#define public_41f49e _public_41f49e
#define public_41f4a5 _public_41f4a5
#define public_41f4b1 _public_41f4b1
#define public_41f4bd _public_41f4bd
#define public_41f4c2 _public_41f4c2
#define public_41f4c7 _public_41f4c7
#define public_41f657 _public_41f657
#define public_41f6e9 _public_41f6e9

PROC_DECLARE(0x41f150, internal_41f150, public_41f150);
extern "C" NAKED register_t __cdecl internal_41f150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8b00 @0x41f158*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8b00
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ds : [public_616855]
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        je public_41f6e9
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_41f1a4
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41f197*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41f1a4 : nop
        mov al, byte ptr ds : [public_616854]
        test al, al
        jne public_41f1c6
        mov eax, dword ptr ds : [public_67eca0]
        push 1
        push eax
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_616854], 1
        call public_420060
        public_41f1c6 : nop
        mov eax, dword ptr ds : [public_6167c8]
        test eax, eax
        je public_41f30a
        test byte ptr ds : [public_6167cc], 1
        je public_41f30a
        mov ecx, offset public_6167b8
        call public_41f720
        test al, al
        je public_41f30a
        mov ecx, offset public_6167b8
        call public_41f7b0
        test al, al
        je public_41f30a
        test byte ptr ds : [public_6167cc], 0x20
        je public_41f218
        mov eax, dword ptr ds : [public_6167c8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x64]
        public_41f218 : nop
        test byte ptr ds : [public_6167cc], 0x40
        mov esi, dword ptr ds : [public_616840]
        mov edi, dword ptr ds : [public_616844]
        mov ebx, dword ptr ds : [public_616848]
        mov ecx, offset public_6167b8
        jne public_41f248
        mov eax, dword ptr ds : [public_6167dc]
        test eax, eax
        je public_41f267
        call public_41fa10
        jmp public_41f26c
        public_41f248 : nop
        call public_41fa10
        mov cl, byte ptr ds : [public_6167cc]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        mov byte ptr ds : [public_6167cc], cl
        mov ecx, offset public_6167b8
        public_41f267 : nop
        call public_41fd90
        public_41f26c : nop
        mov cl, byte ptr ds : [public_6167cc]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        mov eax, dword ptr ds : [public_616840]
        sub eax, esi
        mov esi, dword ptr ds : [public_616848]
        mov byte ptr ds : [public_6167cc], cl
        mov ecx, dword ptr ds : [public_616844]
        sub ecx, edi
        sub esi, ebx
        test eax, eax
        jne public_41f2a8
        test ecx, ecx
        jne public_41f2a8
        mov byte ptr ds : [public_616828], cl
        jmp public_41f2d5
        public_41f2a8 : nop
        push ecx
        push eax
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_616828], 1
        call public_41f970
        test al, al
        je public_41f2cb
        push 0
        mov ecx, offset public_6167b8
        call public_4201a0
        public_41f2cb : nop
        mov ecx, offset public_6167b8
        call public_41f850
        public_41f2d5 : nop
        test esi, esi
        mov dword ptr ds : [public_61684c], esi
        jge public_41f2e3
        neg esi
        test esi, esi
        public_41f2e3 : nop
        jle public_41f30a
        public_41f2e5 : nop
        mov ebx, dword ptr ds : [public_61684c]
        test ebx, ebx
        setl dl
        mov byte ptr ss : [esp+0x14], dl
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        push 8
        mov ecx, offset public_6167b8
        call public_41f8a0
        dec esi
        jne public_41f2e5
        public_41f30a : nop
        mov al, byte ptr ds : [public_6107dc]
        test al, al
        je public_41f6e9
        mov eax, dword ptr ds : [public_616858]
        test eax, eax
        je public_41f33e
        call public_42d660
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_616858]
/*FIXUP push offset public_616728 @0x41f334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616728
        call public_41dae0
        public_41f33e : nop
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_41f6e9
        push 0xE
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_41f6e9
        mov eax, dword ptr ds : [public_616858]
        test eax, eax
        je public_41f6e9
        mov ebp, dword ptr ds : [eax+0x24]
        test ebp, ebp
        je public_41f6e9
        call public_4225e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x5C]
        push edx
        push 7
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], 7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x94], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push 0xF
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], 0xF
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x94], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        mov ecx, ebp
        mov byte ptr ss : [esp+0x8C], 2
        call public_425640
        push eax
        call public_4220a0
        add esp, 4
        lea ecx, ss:[esp+0x13]
        call public_4223d0
        lea ecx, ss:[esp+0x13]
        call public_422410
        mov eax, dword ptr ds : [public_616858]
        add eax, 0x4C
        push eax
        mov esi, 2
        mov edi, 1
        call public_421ba0
        mov ecx, dword ptr ds : [public_616858]
        mov eax, dword ptr ds : [ecx+0x50]
        add esp, 4
        dec eax
        cmp eax, 4
        ja public_41f4c7
/*FIXUP jmp dword ptr ds : [eax*4+public_41f700] @0x41f48e*/
  JMPTB cmp eax, 0
  JMPTB je public_41f495
  JMPTB cmp eax, 1
  JMPTB je public_41f49e
  JMPTB cmp eax, 2
  JMPTB je public_41f4a5
  JMPTB cmp eax, 3
  JMPTB je public_41f4b1
  JMPTB cmp eax, 4
  JMPTB je public_41f4bd
  JMPTB int 3
        public_41f495 : nop
        mov esi, 2
        mov edi, esi
        jmp public_41f4c7
        public_41f49e : nop
        mov esi, 2
        jmp public_41f4c2
        public_41f4a5 : nop
        mov esi, 5
        mov edi, 2
        jmp public_41f4c7
        public_41f4b1 : nop
        mov esi, 5
        mov edi, 6
        jmp public_41f4c7
        public_41f4bd : nop
        mov esi, 5
        public_41f4c2 : nop
        mov edi, 4
        public_41f4c7 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x38]
        push edx
        push 0x13
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0x13
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push 0x14
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 0x14
        mov ecx, dword ptr ds : [eax]
        mov bl, 3
        push eax
        mov byte ptr ss : [esp+0x94], bl
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [public_616858]
        mov edx, dword ptr ds : [ecx+0x50]
        xor eax, eax
        test edx, edx
        mov edx, dword ptr ds : [public_5c6de0]
        setne al
        mov byte ptr ss : [esp+0x88], 4
        mov esi, eax
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x20]
        push edx
        push 0x1B
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0x1B
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_616844]
        mov ecx, dword ptr ds : [public_616840]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_616858]
        lea edx, ss:[esp+0x68]
        push edx
        mov byte ptr ss : [esp+0x94], 5
        call public_41d9c0
        test al, al
        je public_41f657
        push 8
        call public_421670
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x6C]
        push 0
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        push ecx
        push edx
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x88]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        push edx
        push eax
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ss : [esp+0xA4]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x40
        push eax
        push ecx
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x80]
        push 0
        push edx
        push eax
        call public_421cc0
        add esp, 0x14
        call public_421690
        public_41f657 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 4
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], bl
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        mov byte ptr ss : [esp+0x94], 2
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x88], 1
        call public_405840
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x88], 0
        call public_405840
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_405840
        public_41f6e9 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x41f150)
        ASM_EXPORT_ENTRY_SINGLE(0x41f4bd, public_41f4bd)
    }
}

#undef public_41f1a4
#undef public_41f1c6
#undef public_41f218
#undef public_41f248
#undef public_41f267
#undef public_41f26c
#undef public_41f2a8
#undef public_41f2cb
#undef public_41f2d5
#undef public_41f2e3
#undef public_41f2e5
#undef public_41f30a
#undef public_41f33e
#undef public_41f495
#undef public_41f49e
#undef public_41f4a5
#undef public_41f4b1
#undef public_41f4bd
#undef public_41f4c2
#undef public_41f4c7
#undef public_41f657
#undef public_41f6e9

#pragma init_seg(compiler)
extern "C" void const* const public_41f4bd = __AsmFindLabelExport(&internal_41f150, 0x41f4bd);
