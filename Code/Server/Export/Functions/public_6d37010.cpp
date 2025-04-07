#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d37073 _public_6d37073
#define public_6d37077 _public_6d37077
#define public_6d370b5 _public_6d370b5
#define public_6d370f5 _public_6d370f5
#define public_6d37105 _public_6d37105
#define public_6d37121 _public_6d37121
#define public_6d3713b _public_6d3713b
#define public_6d37140 _public_6d37140
#define public_6d3715e _public_6d3715e
#define public_6d37160 _public_6d37160
#define public_6d3716d _public_6d3716d
#define public_6d3717f _public_6d3717f

PROC_DECLARE(0x6d37010, internal_6d37010, public_6d37010);
extern "C" NAKED register_t __cdecl internal_6d37010()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x10]
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d37077
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        movzx edx, word ptr ds : [edx]
        test dx, dx
        je public_6d37077
        mov eax, dword ptr ds : [eax+8]
        push edx
        mov ecx, eax
        call public_6d3e580
        test al, al
        je public_6d37077
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [ebx+0x10], esi
        jne public_6d370b5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d37073 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d37077 : nop
        cmp edi, dword ptr ss : [ebp+0xC]
        jb public_6d3717f
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3715e
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d37160
        public_6d370b5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], edi
        jae public_6d37077
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d37077
        cmp si, 0xFF
        mov edi, dword ptr ds : [eax+8]
        ja public_6d37105
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        mov ebp, dword ptr ss : [esp+0x10]
        movzx eax, al
        test eax, eax
        jne public_6d3713b
        public_6d370f5 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d3713b
        xor eax, eax
        jmp public_6d37140
        public_6d37105 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d37121
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d3713b
        public_6d37121 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d370f5
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d370f5
        public_6d3713b : nop
        mov eax, 1
        public_6d37140 : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        je public_6d37073
        mov eax, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        add eax, 2
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_6d370b5
        public_6d3715e : nop
        mov eax, edx
        public_6d37160 : nop
        test eax, eax
        je public_6d3716d
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edi
        public_6d3716d : nop
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3717f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x10], eax
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d37010)
    }
}

#undef public_6d37073
#undef public_6d37077
#undef public_6d370b5
#undef public_6d370f5
#undef public_6d37105
#undef public_6d37121
#undef public_6d3713b
#undef public_6d37140
#undef public_6d3715e
#undef public_6d37160
#undef public_6d3716d
#undef public_6d3717f
