#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d36779 _public_6d36779
#define public_6d36789 _public_6d36789
#define public_6d367a5 _public_6d367a5
#define public_6d367c1 _public_6d367c1
#define public_6d367c5 _public_6d367c5
#define public_6d367ca _public_6d367ca
#define public_6d367fc _public_6d367fc
#define public_6d36814 _public_6d36814
#define public_6d36823 _public_6d36823
#define public_6d3683c _public_6d3683c
#define public_6d36846 _public_6d36846
#define public_6d36877 _public_6d36877
#define public_6d3688f _public_6d3688f
#define public_6d3689f _public_6d3689f
#define public_6d368b7 _public_6d368b7
#define public_6d368d1 _public_6d368d1
#define public_6d368d6 _public_6d368d6
#define public_6d368fd _public_6d368fd
#define public_6d36901 _public_6d36901
#define public_6d36918 _public_6d36918
#define public_6d3691c _public_6d3691c
#define public_6d36928 _public_6d36928
#define public_6d3693f _public_6d3693f
#define public_6d3694f _public_6d3694f
#define public_6d36951 _public_6d36951
#define public_6d36998 _public_6d36998
#define public_6d369b4 _public_6d369b4
#define public_6d369cb _public_6d369cb
#define public_6d36a53 _public_6d36a53
#define public_6d36a57 _public_6d36a57
#define public_6d36a7b _public_6d36a7b
#define public_6d36a7f _public_6d36a7f
#define public_6d36a84 _public_6d36a84
#define public_6d36a9c _public_6d36a9c

PROC_DECLARE(0x6d36730, internal_6d36730, public_6d36730);
extern "C" NAKED register_t __cdecl internal_6d36730()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        cmp eax, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], 0
        je public_6d36928
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax+8]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        ja public_6d36789
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d367c1
        public_6d36779 : nop
        push esi
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d367c5
        xor eax, eax
        jmp public_6d367ca
        public_6d36789 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d367a5
        push esi
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        jne public_6d367c1
        mov ebx, dword ptr ss : [esp+0x28]
        public_6d367a5 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d36779
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d36779
        jmp public_6d367c5
        public_6d367c1 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        public_6d367c5 : nop
        mov eax, 1
        public_6d367ca : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d36928
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d36823
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d367fc
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6d367fc : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d36814
        cmp dword ptr ds : [ebx+8], ebp
        jne public_6d36814
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 8
        public_6d36814 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6d36823 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_6d3683c
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x14], 1
        public_6d3683c : nop
        cmp dword ptr ss : [esp+0x14], ecx
        jae public_6d36901
        public_6d36846 : nop
        cmp dword ptr ds : [ebx+0xC], ebp
        je public_6d36918
        mov edx, dword ptr ss : [esp+0x10]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax+8]
        ja public_6d3689f
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36877
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36877 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d368d1
        public_6d3688f : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d368d1
        xor eax, eax
        jmp public_6d368d6
        public_6d3689f : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d368b7
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        jne public_6d368d1
        public_6d368b7 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d3688f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3688f
        public_6d368d1 : nop
        mov eax, 1
        public_6d368d6 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d36918
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0xC]
        mov ebx, dword ptr ss : [esp+0x28]
        add ebp, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6d36846
        public_6d368fd : nop
        mov dword ptr ss : [esp+0x2C], ebp
        public_6d36901 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d3693f
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d3694f
        public_6d36918 : nop
        mov dword ptr ss : [esp+0x2C], ebp
        public_6d3691c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6d36928 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6d36901
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6d3693f : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d36a9c
        cmp dword ptr ds : [ebx+8], ebp
        jmp public_6d36951
        public_6d3694f : nop
        test al, al
        public_6d36951 : nop
        jne public_6d36a9c
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_6d3691c
        mov eax, dword ptr ds : [ebx+0xC]
        inc ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d3691c
        mov edx, dword ptr ss : [esp+0x10]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax+8]
        ja public_6d369cb
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36998
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36998 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d36a7f
        public_6d369b4 : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d36a7f
        xor eax, eax
        jmp public_6d36a84
        public_6d369cb : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d36a57
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d36a57
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ecx, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d369ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        push ecx
        mov word ptr ss : [esp+0x2C], di
        mov word ptr ss : [esp+0x2E], di
        call public_6d40890
        add esp, 0x14
        test al, al
        jne public_6d36a7b
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d36a53
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d36a2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d36a7b
        public_6d36a53 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6d36a57 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d369b4
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d369b4
        jmp public_6d36a7f
        public_6d36a7b : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6d36a7f : nop
        mov eax, 1
        public_6d36a84 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d3691c
        mov ebx, dword ptr ss : [esp+0x28]
        add ebp, 2
        jmp public_6d368fd
        public_6d36a9c : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d36730)
    }
}

#undef public_6d36779
#undef public_6d36789
#undef public_6d367a5
#undef public_6d367c1
#undef public_6d367c5
#undef public_6d367ca
#undef public_6d367fc
#undef public_6d36814
#undef public_6d36823
#undef public_6d3683c
#undef public_6d36846
#undef public_6d36877
#undef public_6d3688f
#undef public_6d3689f
#undef public_6d368b7
#undef public_6d368d1
#undef public_6d368d6
#undef public_6d368fd
#undef public_6d36901
#undef public_6d36918
#undef public_6d3691c
#undef public_6d36928
#undef public_6d3693f
#undef public_6d3694f
#undef public_6d36951
#undef public_6d36998
#undef public_6d369b4
#undef public_6d369cb
#undef public_6d36a53
#undef public_6d36a57
#undef public_6d36a7b
#undef public_6d36a7f
#undef public_6d36a84
#undef public_6d36a9c
