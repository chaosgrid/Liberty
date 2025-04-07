#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f88240);
CLANG_FORWARD_PROC_SYMBOL(public_6f979b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98780);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ac80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb18d3);

#define public_6f9a74d _public_6f9a74d
#define public_6f9a753 _public_6f9a753
#define public_6f9a76b _public_6f9a76b
#define public_6f9a81a _public_6f9a81a
#define public_6f9a8b5 _public_6f9a8b5
#define public_6f9a92f _public_6f9a92f
#define public_6f9a937 _public_6f9a937
#define public_6f9a96f _public_6f9a96f
#define public_6f9a9bd _public_6f9a9bd
#define public_6f9a9c9 _public_6f9a9c9
#define public_6f9aa11 _public_6f9aa11
#define public_6f9aa8b _public_6f9aa8b
#define public_6f9aa93 _public_6f9aa93
#define public_6f9aad1 _public_6f9aad1
#define public_6f9ab10 _public_6f9ab10
#define public_6f9ab22 _public_6f9ab22
#define public_6f9ab32 _public_6f9ab32
#define public_6f9ab3e _public_6f9ab3e
#define public_6f9ab7d _public_6f9ab7d
#define public_6f9ab9a _public_6f9ab9a
#define public_6f9aba8 _public_6f9aba8
#define public_6f9abac _public_6f9abac

PROC_DECLARE(0x6f9a700, internal_6f9a700, public_6f9a700);
extern "C" NAKED register_t __cdecl internal_6f9a700()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb18d3 @0x6f9a702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb18d3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0x218
        mov dword ptr ss : [esp+0x14], edi
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x78], ebx
        je public_6f9a74d
        push 1
        mov ecx, eax
        call public_6f88240
        mov esi, eax
        mov dword ptr ss : [esp+0xC], esi
        jmp public_6f9a753
        public_6f9a74d : nop
        mov dword ptr ss : [esp+0xC], ebx
        mov esi, ebx
        public_6f9a753 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        je public_6f9a76b
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        call dword ptr ds : [eax]
        public_6f9a76b : nop
        push ebp
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x7C], 1
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [edx+4]
        mov ebp, dword ptr ss : [esp+0x84]
        lea eax, ds:[esi+0x144]
        push eax
        mov byte ptr ds : [esi+0xC4], 1
        push ebp
        mov ecx, edi
        mov byte ptr ds : [esi+0x54], 1
        call public_6f9ac80
        and al, 1
        lea ecx, ss:[ebp+0x20]
        mov byte ptr ss : [esp+0x84], al
        mov edx, ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x30], edx
        lea edi, ds:[esi+0x190]
        lea edx, ds:[edi+0x44]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        movzx eax, byte ptr ds : [ecx+0x14]
        movzx edx, byte ptr ds : [ecx+0x13]
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        movzx edx, byte ptr ds : [ecx+0x15]
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb605c]
        faddp 
        fld dword ptr ds : [public_6fb5810]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f9a81a
        fstp st(0)
        fld dword ptr ds : [public_6fb5810]
        public_6f9a81a : nop
        fld dword ptr ds : [public_6fbd180]
        mov al, byte ptr ds : [ecx+0x13]
        cmp al, bl
        fdiv st, st(1)
        fmul dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb605c]
        fstp dword ptr ss : [esp+0x1C]
        je public_6f9a8b5
        mov cl, byte ptr ds : [ecx+0x12]
        mov eax, dword ptr ds : [public_6fbcbc0]
        mov edx, dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x34], cl
        mov byte ptr ss : [esp+0x36], cl
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        mov dword ptr ss : [esp+0x40], eax
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov byte ptr ss : [esp+0x44], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x43], bl
        mov dword ptr ss : [esp+0x58], ebx
        call public_6f98780
        push ebx
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        push edi
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0xA8]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x84], cl
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f9a8b5 : nop
        cmp byte ptr ds : [ecx+0x17], bl
        je public_6f9a96f
        mov eax, dword ptr ds : [public_6fbcbc0]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, 1
        push ecx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], eax
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov byte ptr ss : [esp+0x44], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x50]
        add esp, 0xC
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x54]
        rep movsd
        jne public_6f9a937
        cmp dword ptr ss : [esp+0x40], ebx
        jne public_6f9a92f
        mov dword ptr ss : [esp+0x60], 1
        public_6f9a92f : nop
        mov dword ptr ss : [esp+0x64], 1
        public_6f9a937 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push 1
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        add eax, 0x190
        push eax
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x9C]
        mov esi, dword ptr ss : [esp+0x28]
        add esp, 0x18
        and cl, al
        mov byte ptr ss : [esp+0x84], cl
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f9a96f : nop
        cmp byte ptr ds : [ecx+0x14], bl
        mov edi, 1
        je public_6f9aa11
        mov al, byte ptr ds : [ecx+0x12]
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov byte ptr ss : [esp+0x34], al
        mov byte ptr ss : [esp+0x36], al
        cmp byte ptr ds : [ecx+0x13], bl
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x37], bl
        je public_6f9a9bd
        mov dword ptr ss : [esp+0x4C], 3
        mov dword ptr ss : [esp+0x50], edi
        jmp public_6f9a9c9
        public_6f9a9bd : nop
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], 8
        public_6f9a9c9 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6f98780
        push ebx
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea eax, ds:[esi+0x190]
        push eax
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0xA8]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x84], cl
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, 1
        public_6f9aa11 : nop
        cmp byte ptr ds : [ecx+0x18], bl
        je public_6f9aad1
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        mov byte ptr ss : [esp+0x44], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], 9
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x50]
        add esp, 0xC
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x54]
        rep movsd
        jne public_6f9aa93
        cmp dword ptr ss : [esp+0x40], ebx
        jne public_6f9aa8b
        mov dword ptr ss : [esp+0x60], 1
        public_6f9aa8b : nop
        mov dword ptr ss : [esp+0x64], 1
        public_6f9aa93 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push 1
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea eax, ds:[edx+0x190]
        push eax
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x9C]
        mov esi, dword ptr ss : [esp+0x28]
        add esp, 0x18
        and cl, al
        mov byte ptr ss : [esp+0x84], cl
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, 1
        public_6f9aad1 : nop
        cmp byte ptr ds : [ecx+0x15], bl
        je public_6f9ab7d
        mov eax, dword ptr ds : [public_6fbcbc0]
        mov dl, byte ptr ds : [ecx+0x12]
        mov dword ptr ss : [esp+0x3C], eax
        cmp byte ptr ds : [ecx+0x13], bl
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], dl
        mov byte ptr ss : [esp+0x37], bl
        jne public_6f9ab10
        cmp byte ptr ds : [ecx+0x14], bl
        je public_6f9ab32
        public_6f9ab10 : nop
        call dword ptr ds : [public_6fb3370]
        and eax, 0x80000001
        jns public_6f9ab22
        dec eax
        or eax, 0xFFFFFFFE
        inc eax
        public_6f9ab22 : nop
        je public_6f9ab32
        mov dword ptr ss : [esp+0x4C], 3
        mov dword ptr ss : [esp+0x50], edi
        jmp public_6f9ab3e
        public_6f9ab32 : nop
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], 0xF0
        public_6f9ab3e : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6f98780
        push ebx
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea eax, ds:[esi+0x190]
        push eax
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0xA8]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x84], cl
        public_6f9ab7d : nop
        mov edi, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        pop ebp
        je public_6f9aba8
        cmp eax, ebx
        je public_6f9ab9a
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi], ebx
        public_6f9ab9a : nop
        mov dword ptr ds : [edi], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        jmp public_6f9abac
        public_6f9aba8 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f9abac : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x70]
        mov al, byte ptr ss : [esp+0x80]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x6f9a700)
    }
}

#undef public_6f9a74d
#undef public_6f9a753
#undef public_6f9a76b
#undef public_6f9a81a
#undef public_6f9a8b5
#undef public_6f9a92f
#undef public_6f9a937
#undef public_6f9a96f
#undef public_6f9a9bd
#undef public_6f9a9c9
#undef public_6f9aa11
#undef public_6f9aa8b
#undef public_6f9aa93
#undef public_6f9aad1
#undef public_6f9ab10
#undef public_6f9ab22
#undef public_6f9ab32
#undef public_6f9ab3e
#undef public_6f9ab7d
#undef public_6f9ab9a
#undef public_6f9aba8
#undef public_6f9abac
