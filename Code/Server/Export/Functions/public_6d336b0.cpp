#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d33711 _public_6d33711
#define public_6d33729 _public_6d33729
#define public_6d33738 _public_6d33738
#define public_6d33749 _public_6d33749
#define public_6d33753 _public_6d33753
#define public_6d3377f _public_6d3377f
#define public_6d33797 _public_6d33797
#define public_6d337a7 _public_6d337a7
#define public_6d337c3 _public_6d337c3
#define public_6d337dd _public_6d337dd
#define public_6d337e2 _public_6d337e2
#define public_6d33807 _public_6d33807
#define public_6d33812 _public_6d33812
#define public_6d33829 _public_6d33829
#define public_6d3386d _public_6d3386d
#define public_6d33883 _public_6d33883
#define public_6d33893 _public_6d33893
#define public_6d338cf _public_6d338cf
#define public_6d338e9 _public_6d338e9
#define public_6d338ee _public_6d338ee
#define public_6d338fe _public_6d338fe
#define public_6d33902 _public_6d33902
#define public_6d33912 _public_6d33912
#define public_6d3391e _public_6d3391e

PROC_DECLARE(0x6d336b0, internal_6d336b0, public_6d336b0);
extern "C" NAKED register_t __cdecl internal_6d336b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        test ax, ax
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6d33807
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call public_6d3e580
        test al, al
        je public_6d33807
        lea eax, ds:[edi+2]
        cmp eax, edi
        jne public_6d33738
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d33711
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d33711 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d33729
        cmp dword ptr ds : [eax+8], edi
        jne public_6d33729
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d33729 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d33738 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6d33749
        mov edi, eax
        mov dword ptr ss : [esp+0x10], 1
        public_6d33749 : nop
        cmp dword ptr ss : [esp+0x10], ecx
        jae public_6d33812
        public_6d33753 : nop
        mov bx, word ptr ds : [edi]
        test bx, bx
        je public_6d3391e
        cmp bx, 0xFF
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d337a7
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3377f
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3377f : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d337dd
        public_6d33797 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d337dd
        xor eax, eax
        jmp public_6d337e2
        public_6d337a7 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d337c3
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x14]
        jne public_6d337dd
        public_6d337c3 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d33797
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33797
        public_6d337dd : nop
        mov eax, 1
        public_6d337e2 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3391e
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        add edi, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d33753
        jmp public_6d33812
        public_6d33807 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_6d3391e
        public_6d33812 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d33883
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d33829 : nop
        jne public_6d33912
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6d3391e
        mov bx, word ptr ds : [edi]
        inc ecx
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3391e
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d33893
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3386d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3386d : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d338fe
        public_6d33883 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d33912
        cmp dword ptr ds : [eax+8], edi
        jmp public_6d33829
        public_6d33893 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d338cf
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d338cf
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d338a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x30], bx
        mov word ptr ss : [esp+0x32], bx
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test al, al
        jne public_6d338e9
        public_6d338cf : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d33902
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33902
        public_6d338e9 : nop
        mov eax, 1
        public_6d338ee : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3391e
        add edi, 2
        jmp public_6d33812
        public_6d338fe : nop
        test eax, eax
        jne public_6d338e9
        public_6d33902 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d338e9
        xor eax, eax
        jmp public_6d338ee
        public_6d33912 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3391e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d336b0)
    }
}

#undef public_6d33711
#undef public_6d33729
#undef public_6d33738
#undef public_6d33749
#undef public_6d33753
#undef public_6d3377f
#undef public_6d33797
#undef public_6d337a7
#undef public_6d337c3
#undef public_6d337dd
#undef public_6d337e2
#undef public_6d33807
#undef public_6d33812
#undef public_6d33829
#undef public_6d3386d
#undef public_6d33883
#undef public_6d33893
#undef public_6d338cf
#undef public_6d338e9
#undef public_6d338ee
#undef public_6d338fe
#undef public_6d33902
#undef public_6d33912
#undef public_6d3391e
