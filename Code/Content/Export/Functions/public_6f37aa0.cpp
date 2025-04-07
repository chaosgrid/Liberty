#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38120);
CLANG_FORWARD_PROC_SYMBOL(public_6f38140);
CLANG_FORWARD_PROC_SYMBOL(public_6f38620);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f810);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f37ae2 _public_6f37ae2
#define public_6f37af6 _public_6f37af6
#define public_6f37b0b _public_6f37b0b
#define public_6f37b10 _public_6f37b10
#define public_6f37b30 _public_6f37b30
#define public_6f37b4d _public_6f37b4d
#define public_6f37b65 _public_6f37b65
#define public_6f37b80 _public_6f37b80
#define public_6f37b8b _public_6f37b8b
#define public_6f37b8d _public_6f37b8d
#define public_6f37bc9 _public_6f37bc9
#define public_6f37be8 _public_6f37be8
#define public_6f37beb _public_6f37beb
#define public_6f37bf7 _public_6f37bf7
#define public_6f37c0f _public_6f37c0f
#define public_6f37c20 _public_6f37c20
#define public_6f37c3d _public_6f37c3d
#define public_6f37c55 _public_6f37c55
#define public_6f37c68 _public_6f37c68
#define public_6f37c74 _public_6f37c74
#define public_6f37c7f _public_6f37c7f
#define public_6f37c81 _public_6f37c81
#define public_6f37ca0 _public_6f37ca0
#define public_6f37cab _public_6f37cab
#define public_6f37cad _public_6f37cad
#define public_6f37cb8 _public_6f37cb8
#define public_6f37cd0 _public_6f37cd0
#define public_6f37cd5 _public_6f37cd5
#define public_6f37ce1 _public_6f37ce1
#define public_6f37cef _public_6f37cef

PROC_DECLARE(0x6f37aa0, internal_6f37aa0, public_6f37aa0);
extern "C" NAKED register_t __cdecl internal_6f37aa0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, ecx
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push eax
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f6f810
        mov esi, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push esi
        mov ecx, edi
        call public_6f38140
        cmp dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ds : [edi+8], esi
        jne public_6f37ae2
        mov dword ptr ss : [esp+0x30], 0
        public_6f37ae2 : nop
        mov edx, dword ptr ss : [esp+0x34]
        cmp edx, 0xFFFFFFFF
        jne public_6f37b10
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        jne public_6f37af6
        xor edx, edx
        jmp public_6f37b0b
        public_6f37af6 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f37b0b : nop
        dec edx
        mov dword ptr ss : [esp+0x34], edx
        public_6f37b10 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [ebx+4]
        cmp eax, edx
        mov eax, dword ptr ds : [ebx+8]
        jg public_6f37c0f
        cmp esi, eax
        je public_6f37cef
        mov ebp, dword ptr ss : [esp+0x38]
        mov edi, edi
        public_6f37b30 : nop
        test ebp, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f37b4d
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        public_6f37b4d : nop
        test dword ptr ss : [esp+0x2C], ebp
        je public_6f37bf7
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        cmp eax, edx
        je public_6f37bf7
        public_6f37b65 : nop
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ss : [esp+0x30], ecx
        jg public_6f37be8
        cmp ecx, dword ptr ss : [esp+0x34]
        jg public_6f37be8
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f37b8b
        mov edx, dword ptr ds : [esi]
        nop 
        public_6f37b80 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f37b8d
        add eax, 0x14
        cmp eax, ecx
        jne public_6f37b80
        public_6f37b8b : nop
        mov eax, ecx
        public_6f37b8d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f37bc9
        push esi
        push ecx
        mov ecx, edi
        call public_6f38620
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x3C], 1
        call public_6f38120
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        call public_6fa6e80
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, edx
        jmp public_6f37beb
        public_6f37bc9 : nop
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x40], 0
        call public_6fa6e80
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, edx
        jmp public_6f37beb
        public_6f37be8 : nop
        add eax, 4
        public_6f37beb : nop
        cmp eax, edx
        jne public_6f37b65
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f37bf7 : nop
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x14
        cmp esi, eax
        jne public_6f37b30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x10
        public_6f37c0f : nop
        cmp esi, eax
        je public_6f37cef
        mov ebp, dword ptr ss : [esp+0x38]
        nop 
        lea esp, ss:[esp]
        public_6f37c20 : nop
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_6f37c3d
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        public_6f37c3d : nop
        test dword ptr ss : [esp+0x10], ebp
        je public_6f37ce1
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        cmp eax, edx
        je public_6f37ce1
        public_6f37c55 : nop
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ss : [esp+0x30], ecx
        jle public_6f37c68
        cmp ecx, dword ptr ss : [esp+0x34]
        jle public_6f37c68
        add eax, 4
        jmp public_6f37cd5
        public_6f37c68 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f37c7f
        mov edx, dword ptr ds : [esi]
        public_6f37c74 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f37c81
        add eax, 0x14
        cmp eax, ecx
        jne public_6f37c74
        public_6f37c7f : nop
        mov eax, ecx
        public_6f37c81 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f37cb8
        push esi
        push ecx
        mov ecx, edi
        call public_6f38620
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f37cab
        mov edx, dword ptr ds : [esi]
        mov edi, edi
        public_6f37ca0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f37cad
        add eax, 0x14
        cmp eax, ecx
        jne public_6f37ca0
        public_6f37cab : nop
        mov eax, ecx
        public_6f37cad : nop
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x18], 1
        jmp public_6f37cd0
        public_6f37cb8 : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x34], 0
        call public_6fa6e80
        public_6f37cd0 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, edx
        public_6f37cd5 : nop
        cmp eax, edx
        jne public_6f37c55
        mov ebp, dword ptr ss : [esp+0x38]
        public_6f37ce1 : nop
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x14
        cmp esi, eax
        jne public_6f37c20
        public_6f37cef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x6f37aa0)
    }
}

#undef public_6f37ae2
#undef public_6f37af6
#undef public_6f37b0b
#undef public_6f37b10
#undef public_6f37b30
#undef public_6f37b4d
#undef public_6f37b65
#undef public_6f37b80
#undef public_6f37b8b
#undef public_6f37b8d
#undef public_6f37bc9
#undef public_6f37be8
#undef public_6f37beb
#undef public_6f37bf7
#undef public_6f37c0f
#undef public_6f37c20
#undef public_6f37c3d
#undef public_6f37c55
#undef public_6f37c68
#undef public_6f37c74
#undef public_6f37c7f
#undef public_6f37c81
#undef public_6f37ca0
#undef public_6f37cab
#undef public_6f37cad
#undef public_6f37cb8
#undef public_6f37cd0
#undef public_6f37cd5
#undef public_6f37ce1
#undef public_6f37cef
