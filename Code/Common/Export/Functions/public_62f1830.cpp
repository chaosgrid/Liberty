#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6272a00);
CLANG_FORWARD_PROC_SYMBOL(public_6282160);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f0660);
CLANG_FORWARD_PROC_SYMBOL(public_62f1830);
CLANG_FORWARD_PROC_SYMBOL(public_62fbb90);
CLANG_FORWARD_PROC_SYMBOL(public_62fc3c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc710);
CLANG_FORWARD_PROC_SYMBOL(public_62fd000);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6334560);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395628);

#define public_62f1886 _public_62f1886
#define public_62f1924 _public_62f1924
#define public_62f1944 _public_62f1944
#define public_62f19af _public_62f19af
#define public_62f1a90 _public_62f1a90
#define public_62f1ad9 _public_62f1ad9
#define public_62f1ade _public_62f1ade
#define public_62f1aef _public_62f1aef
#define public_62f1b71 _public_62f1b71
#define public_62f1bb0 _public_62f1bb0
#define public_62f1bbf _public_62f1bbf
#define public_62f1bd4 _public_62f1bd4
#define public_62f1be3 _public_62f1be3
#define public_62f1bf0 _public_62f1bf0
#define public_62f1bfd _public_62f1bfd
#define public_62f1c03 _public_62f1c03
#define public_62f1c1f _public_62f1c1f
#define public_62f1c3e _public_62f1c3e
#define public_62f1c42 _public_62f1c42
#define public_62f1c44 _public_62f1c44

PROC_DECLARE(0x62f1830, internal_62f1830, public_62f1830);
extern "C" NAKED register_t __cdecl internal_62f1830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395628 @0x62f1838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395628
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        push esi
        push edi
        push ebp
        mov edi, ecx
        call public_62f0660
        test al, al
        jne public_62f1c3e
/*FIXUP push offset public_63a1590 @0x62f1860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1590
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f1886
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x81], al
        mov al, 1
        jmp public_62f1c44
/*FIXUP public_62f1886 : nop
        push offset public_63a1580 @0x62f1886*/
  FIXUP public_62f1886 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1580
        call public_6310410
        test al, al
        je public_62f1944
        lea ecx, ss:[esp+0x20]
        call public_6333e30
        lea ecx, ss:[esp+0x24]
        call public_6333e30
        push 0
        mov ecx, ebp
        call public_6310a30
        push 8
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        mov ecx, offset public_63eca00
        call public_62fbb90
        mov ecx, dword ptr ss : [esp+0x10]
        neg al
        push 1
        sbb eax, eax
        and eax, ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], eax
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        push eax
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_639934c]
        add esp, 0xC
        push 2
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ss : [esp+0x1C]
        push 3
        mov ecx, ebp
        call public_6310560
        test al, al
        jne public_62f1924
        push 3
        mov ecx, ebp
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ss : [esp+0x24], eax
        public_62f1924 : nop
        mov eax, dword ptr ds : [edi+0x8C]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[edi+0x84]
        push 1
        push eax
        call public_62fc710
        mov al, 1
        jmp public_62f1c44
/*FIXUP public_62f1944 : nop
        push offset public_63a1578 @0x62f1944*/
  FIXUP public_62f1944 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1578
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62f19af
        lea ecx, ss:[esp+0x1C]
        call public_6333e40
        mov eax, dword ptr ds : [edi+0x78]
        lea ecx, ds:[edi+0x74]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6282160
        mov ecx, dword ptr ds : [edi+0x78]
        mov esi, dword ptr ds : [ecx+4]
        push 0
        mov ecx, ebp
        add esi, 8
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        mov ecx, ebp
        mov dword ptr ds : [esi], eax
        call public_63108f0
        fstp dword ptr ds : [esi+4]
        push 2
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ds : [esi+8]
        mov al, 1
        jmp public_62f1c44
/*FIXUP public_62f19af : nop
        push offset public_63a156c @0x62f19af*/
  FIXUP public_62f19af : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a156c
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62f1c1f
        lea ecx, ss:[esp+0x1C]
        call public_6333e40
        mov dx, word ptr ds : [public_63a4aa4]
        lea ecx, ss:[esp+0x24]
        mov word ptr ss : [esp+0x20], dx
        call public_6333e30
        mov al, byte ptr ss : [esp+0x48]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov eax, dword ptr ds : [edi+0x6C]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[edi+0x64]
        push 1
        push eax
        mov dword ptr ss : [esp+0x4C], ebx
        call public_62fc3c0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_628f050
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6391d5a
        mov esi, dword ptr ds : [edi+0x6C]
        add esp, 4
        push ebx
        mov ecx, ebp
        sub esi, 0x1C
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        lea ecx, ds:[edi+0x60]
        mov dword ptr ds : [esi], eax
        call public_6334560
        push 1
        mov ecx, ebp
        mov word ptr ds : [esi+4], ax
        call public_6310a30
        push ebx
        push eax
        call public_6333ca0
        add esp, 8
        mov ebx, 2
        push ebx
        mov ecx, ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x14], ebx
        call public_6310560
        test al, al
        jne public_62f1c3e
        add esi, 0xC
        lea ecx, ds:[ecx]
        public_62f1a90 : nop
        push ebx
        mov ecx, ebp
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 8
        cmp ecx, 1
        mov edi, eax
        jae public_62f1b71
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62f1ad9
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_62f1ad9
        mov ecx, esi
        call public_626a600
        mov ebx, eax
        jmp public_62f1ade
        public_62f1ad9 : nop
        mov ebx, 1
        public_62f1ade : nop
        mov ecx, esi
        call public_626a600
        add eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        jns public_62f1aef
        xor eax, eax
        public_62f1aef : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6272a00
        lea ecx, ss:[esp+0x48]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_62fd000
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6272a00
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ebx+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_62f1c03
        public_62f1b71 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62f1bbf
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6272a00
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x48]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_62fd000
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_62f1bfd
        public_62f1bb0 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_62f1bb0
        jmp public_62f1bfd
        public_62f1bbf : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6272a00
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62f1be3
        public_62f1bd4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62f1bd4
        public_62f1be3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_62f1bfd
        lea ebx, ds:[ebx]
        public_62f1bf0 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_62f1bf0
        public_62f1bfd : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_62f1c03 : nop
        inc ebx
        push ebx
        mov ecx, ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x14], ebx
        call public_6310560
        test al, al
        je public_62f1a90
        mov al, 1
        jmp public_62f1c44
/*FIXUP public_62f1c1f : nop
        push offset public_63a1564 @0x62f1c1f*/
  FIXUP public_62f1c1f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1564
        mov ecx, ebp
        call public_6310410
        test al, al
        je public_62f1c42
        push 0
        mov ecx, ebp
        call public_63105b0
        mov byte ptr ds : [edi+0x80], al
        public_62f1c3e : nop
        mov al, 1
        jmp public_62f1c44
        public_62f1c42 : nop
        xor al, al
        public_62f1c44 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x62f1830)
    }
}

#undef public_62f1886
#undef public_62f1924
#undef public_62f1944
#undef public_62f19af
#undef public_62f1a90
#undef public_62f1ad9
#undef public_62f1ade
#undef public_62f1aef
#undef public_62f1b71
#undef public_62f1bb0
#undef public_62f1bbf
#undef public_62f1bd4
#undef public_62f1be3
#undef public_62f1bf0
#undef public_62f1bfd
#undef public_62f1c03
#undef public_62f1c1f
#undef public_62f1c3e
#undef public_62f1c42
#undef public_62f1c44
