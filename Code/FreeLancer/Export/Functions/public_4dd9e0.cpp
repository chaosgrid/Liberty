#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd730);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9e0);
CLANG_FORWARD_PROC_SYMBOL(public_4de8b0);
CLANG_FORWARD_PROC_SYMBOL(public_4dea90);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_4ded10);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be615);

#define public_4ddab3 _public_4ddab3
#define public_4ddab7 _public_4ddab7
#define public_4ddadc _public_4ddadc
#define public_4ddbca _public_4ddbca
#define public_4ddbf4 _public_4ddbf4
#define public_4ddc0d _public_4ddc0d
#define public_4ddc15 _public_4ddc15
#define public_4ddc3d _public_4ddc3d
#define public_4ddc42 _public_4ddc42
#define public_4ddc56 _public_4ddc56
#define public_4ddc84 _public_4ddc84
#define public_4ddc8d _public_4ddc8d
#define public_4ddca4 _public_4ddca4
#define public_4ddcc4 _public_4ddcc4
#define public_4ddcdd _public_4ddcdd
#define public_4ddcef _public_4ddcef
#define public_4ddcf3 _public_4ddcf3
#define public_4ddd0a _public_4ddd0a
#define public_4ddd91 _public_4ddd91
#define public_4dddda _public_4dddda
#define public_4ddde3 _public_4ddde3
#define public_4dde02 _public_4dde02
#define public_4dde30 _public_4dde30
#define public_4dde46 _public_4dde46

PROC_DECLARE(0x4dd9e0, internal_4dd9e0, public_4dd9e0);
extern "C" NAKED register_t __cdecl internal_4dd9e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be615 @0x4dd9e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be615
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x594]
        mov edx, dword ptr ds : [edi+0x590]
        lea ecx, ds:[edi+0x58C]
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x70], ecx
        call public_4dea90
        mov al, byte ptr ss : [esp+0x10]
        xor ebp, ebp
        mov byte ptr ss : [esp+0x30], al
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0xAC], ebp
        call public_54baf0
        cmp eax, ebp
        je public_4ddbca
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        mov esi, eax
        cmp esi, ebp
        je public_4ddbca
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4ddbca
        push 0xE0
        lea ecx, ss:[esp+0x98]
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x94]
        lea ecx, ds:[esi+0xE4]
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c64f0]
        push eax
        call dword ptr ds : [public_5c6538]
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        je public_4ddbca
        jmp public_4ddab7
        public_4ddab3 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_4ddab7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x64], eax
        call dword ptr ds : [public_5c6364]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_4ddadc
        mov ebp, dword ptr ss : [esp+0x48]
        public_4ddadc : nop
        push ebp
        mov ecx, edi
        call public_4dd730
        mov cx, word ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        mov word ptr ss : [esp+0x6C], cx
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x10], al
        mov eax, dword ptr ss : [esp+0x64]
        mov edi, dword ptr ds : [eax+0x14]
        mov ecx, esi
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x10]
        push 0
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x84], al
        call dword ptr ds : [public_5c7084]
        mov cx, word ptr ss : [esp+0x6C]
        mov dl, byte ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x70], cx
        mov dword ptr ss : [esp+0x78], edi
        xor eax, eax
        mov edi, ebp
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0xB4], 1
        mov dword ptr ss : [esp+0x7C], esi
        mov byte ptr ss : [esp+0x84], dl
        call dword ptr ds : [public_5c7088]
        mov dword ptr ss : [esp+0x90], ebx
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x70]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0xB4], 2
        call public_4de8b0
        push 1
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0xB0], 0
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x94]
        push edx
        call dword ptr ds : [public_5c64f0]
        push eax
        call dword ptr ds : [public_5c6538]
        mov esi, eax
        add esp, 4
        xor ebp, ebp
        test esi, esi
        jne public_4ddab3
        public_4ddbca : nop
        mov al, byte ptr ss : [esp+0x10]
        xor ecx, ecx
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov edi, dword ptr ss : [esp+0x34]
        cmp edi, ebp
        mov byte ptr ss : [esp+0xAC], 3
        jne public_4ddbf4
        xor esi, esi
        jmp public_4ddc0d
        public_4ddbf4 : nop
        mov edx, dword ptr ss : [esp+0x38]
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        public_4ddc0d : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], ebp
        jle public_4ddc3d
        public_4ddc15 : nop
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_4deb70
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jl public_4ddc15
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x34]
        public_4ddc3d : nop
        dec esi
        mov dword ptr ss : [esp+0x18], esi
        public_4ddc42 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        test edx, edx
        mov bl, 1
        mov dword ptr ss : [esp+0x14], eax
        jle public_4ddcdd
        public_4ddc56 : nop
        mov edx, dword ptr ds : [ecx+eax*4]
        lea edx, ds:[edx+edx*8]
        mov esi, dword ptr ds : [edi+edx*4+0x20]
        lea ebp, ds:[edi+edx*4]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[edi+edx*4]
        mov edi, dword ptr ds : [edx+0x20]
        cmp esi, edi
        jl public_4ddca4
        jne public_4ddcc4
        mov edx, dword ptr ds : [edx+0x14]
        test edx, edx
        mov eax, dword ptr ds : [public_5c7078]
        jne public_4ddc84
        mov edx, eax
        public_4ddc84 : nop
        mov ebp, dword ptr ss : [ebp+0x14]
        test ebp, ebp
        jne public_4ddc8d
        mov ebp, eax
        public_4ddc8d : nop
        push edx
        push ebp
        call dword ptr ds : [public_5c6d24]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        test eax, eax
        mov eax, dword ptr ss : [esp+0x14]
        jge public_4ddcc4
        public_4ddca4 : nop
        mov esi, dword ptr ds : [ecx+eax*4+4]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov dword ptr ds : [ecx+eax*4], esi
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+ecx*4+4], edx
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        xor bl, bl
        public_4ddcc4 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x34]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jl public_4ddc56
        test bl, bl
        je public_4ddc42
        public_4ddcdd : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jl public_4dde02
        jmp public_4ddcf3
        public_4ddcef : nop
        mov edi, dword ptr ss : [esp+0x34]
        public_4ddcf3 : nop
        mov ecx, dword ptr ds : [ecx+eax*4]
        lea edx, ds:[ecx+ecx*8]
        mov ecx, dword ptr ds : [edi+edx*4+0x14]
        test ecx, ecx
        lea eax, ds:[edi+edx*4]
        jne public_4ddd0a
        mov ecx, dword ptr ds : [public_5c7078]
        public_4ddd0a : nop
        mov edx, dword ptr ds : [eax+0x20]
        mov bl, byte ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [eax+8]
        mov ebp, dword ptr ds : [eax+4]
        mov si, word ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x54], al
        call dword ptr ds : [public_5c7084]
        mov word ptr ss : [esp+0x40], si
        mov esi, dword ptr ss : [esp+0x18]
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x48], edi
        xor eax, eax
        mov dword ptr ss : [esp+0x44], ebp
        mov byte ptr ss : [esp+0x4C], bl
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0xB4], 4
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ddd91
        mov edi, dword ptr ss : [esp+0x54]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x58], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_4ddd91 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x40]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0xB8], 5
        call public_4ded10
        mov eax, dword ptr ss : [esp+0x54]
        xor esi, esi
        cmp eax, esi
        mov byte ptr ss : [esp+0xAC], 3
        je public_4ddde3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4dddda
        cmp cl, 0xFF
        je public_4dddda
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4ddde3
        public_4dddda : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4ddde3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        dec eax
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x14], eax
        jns public_4ddcef
        public_4dde02 : nop
        push ecx
        call public_5b7e1d
        mov edi, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x38]
        xor eax, eax
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0xAC], 0xFFFFFFFF
        je public_4dde46
        public_4dde30 : nop
        push 1
        lea ecx, ds:[esi+0x10]
        call dword ptr ds : [public_5c7084]
        add esi, 0x24
        cmp esi, edi
        jne public_4dde30
        mov esi, dword ptr ss : [esp+0x34]
        public_4dde46 : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xA8]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 
        UNREACHABLE_TRAP(0x4dd9e0)
    }
}

#undef public_4ddab3
#undef public_4ddab7
#undef public_4ddadc
#undef public_4ddbca
#undef public_4ddbf4
#undef public_4ddc0d
#undef public_4ddc15
#undef public_4ddc3d
#undef public_4ddc42
#undef public_4ddc56
#undef public_4ddc84
#undef public_4ddc8d
#undef public_4ddca4
#undef public_4ddcc4
#undef public_4ddcdd
#undef public_4ddcef
#undef public_4ddcf3
#undef public_4ddd0a
#undef public_4ddd91
#undef public_4dddda
#undef public_4ddde3
#undef public_4dde02
#undef public_4dde30
#undef public_4dde46
