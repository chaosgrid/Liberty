#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28520);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3daa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40610);
CLANG_FORWARD_PROC_SYMBOL(public_6d40680);
CLANG_FORWARD_PROC_SYMBOL(public_6d407e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d28570 _public_6d28570
#define public_6d28596 _public_6d28596
#define public_6d285c4 _public_6d285c4
#define public_6d285cc _public_6d285cc
#define public_6d285e9 _public_6d285e9
#define public_6d285fd _public_6d285fd
#define public_6d2861b _public_6d2861b
#define public_6d2863e _public_6d2863e
#define public_6d28646 _public_6d28646
#define public_6d28663 _public_6d28663
#define public_6d2867f _public_6d2867f
#define public_6d286a5 _public_6d286a5
#define public_6d286b0 _public_6d286b0
#define public_6d28703 _public_6d28703
#define public_6d28705 _public_6d28705
#define public_6d2877c _public_6d2877c
#define public_6d287c8 _public_6d287c8
#define public_6d287e6 _public_6d287e6
#define public_6d287f5 _public_6d287f5
#define public_6d28800 _public_6d28800
#define public_6d2880d _public_6d2880d
#define public_6d28810 _public_6d28810
#define public_6d28866 _public_6d28866

PROC_DECLARE(0x6d28520, internal_6d28520, public_6d28520);
extern "C" NAKED register_t __cdecl internal_6d28520()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [ebx+4]
        test al, al
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d286a5
        cmp word ptr ds : [ebx+0x28], 0
        jne public_6d2867f
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        jne public_6d2867f
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        jne public_6d2867f
        lea ecx, ds:[ebx+8]
        lea eax, ss:[ebp+8]
        sub ecx, eax
        mov edx, 8
        lea ebx, ds:[ebx]
        public_6d28570 : nop
        mov esi, dword ptr ds : [ecx+eax]
        mov edi, dword ptr ds : [eax]
        not esi
        or edi, esi
        mov dword ptr ds : [eax], edi
        add eax, 4
        dec edx
        jne public_6d28570
        mov ecx, dword ptr ds : [ebx+0x30]
        cmp ecx, dword ptr ds : [ebx+0x34]
        mov eax, 0xFF
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d2861b
        public_6d28596 : nop
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        cmp dx, 0x100
        je public_6d285fd
        inc eax
        dec edx
        mov word ptr ss : [esp+0x24], ax
        mov word ptr ss : [esp+0x26], dx
        mov eax, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d285c4
        xor edi, edi
        jmp public_6d285cc
        public_6d285c4 : nop
        mov edi, dword ptr ds : [esi+0xC]
        sub edi, eax
        sar edi, 2
        public_6d285cc : nop
        mov ecx, esi
        call public_6d31890
        cmp edi, eax
        jne public_6d285e9
        mov ecx, esi
        call public_6d31890
        add eax, 5
        push eax
        mov ecx, esi
        call public_6d3d9c0
        public_6d285e9 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, esi
        call public_6d3e8b0
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d285fd : nop
        mov edx, dword ptr ds : [ebx+0x34]
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        add ecx, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d28596
        cmp ax, 0xFFFF
        je public_6d28866
        public_6d2861b : nop
        inc eax
        mov word ptr ss : [esp+0x24], ax
        mov word ptr ss : [esp+0x26], 0xFFFF
        mov eax, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d2863e
        xor edi, edi
        jmp public_6d28646
        public_6d2863e : nop
        mov edi, dword ptr ds : [esi+0xC]
        sub edi, eax
        sar edi, 2
        public_6d28646 : nop
        mov ecx, esi
        call public_6d31890
        cmp edi, eax
        jne public_6d28663
        mov ecx, esi
        call public_6d31890
        add eax, 5
        push eax
        mov ecx, esi
        call public_6d3d9c0
        public_6d28663 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, esi
        call public_6d3e8b0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6d2867f : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        lea ecx, ss:[ebp+0x48]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call public_6d3daa0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6d286a5 : nop
        xor eax, eax
        lea ecx, ds:[ebx+8]
        lea ebx, ds:[ebx]
        public_6d286b0 : nop
        mov edx, dword ptr ds : [ecx]
        or dword ptr ss : [ebp+eax*4+8], edx
        inc eax
        add ecx, 4
        cmp eax, 8
        jl public_6d286b0
        mov eax, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edi, dword ptr ss : [ebp+0x34]
        mov ebx, eax
        sub ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x38]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ebx, 2
        sar ecx, 2
        cmp ecx, ebx
        jae public_6d2877c
        mov ecx, esi
        call public_6d31890
        cmp ebx, eax
        jae public_6d28703
        mov ecx, esi
        call public_6d31890
        mov ebp, eax
        jmp public_6d28705
        public_6d28703 : nop
        mov ebp, ebx
        public_6d28705 : nop
        mov ecx, esi
        call public_6d31890
        mov ecx, dword ptr ds : [esi]
        add eax, ebp
        shl eax, 2
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d1baa0
        mov edx, dword ptr ds : [esi+4]
        mov ebp, eax
        push ebp
        push edi
        push edx
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, esi
        call public_6d23e40
        mov edx, dword ptr ds : [esi+8]
        push eax
        push edx
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6d28880
        mov edx, dword ptr ss : [esp+0x18]
        add edx, ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6d31890
        add eax, ebx
        lea eax, ss:[ebp+eax*4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6d2880d
        public_6d2877c : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, ebx
        jae public_6d287c8
        shl ebx, 2
        lea edx, ds:[ebx+edi]
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        sub eax, edi
        sar eax, 2
        push ecx
        lea eax, ds:[edx+eax*4]
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x10]
        sub ecx, edi
        sar ecx, 2
        push edi
        lea edx, ds:[eax+ecx*4]
        push edx
        push eax
        jmp public_6d28800
        public_6d287c8 : nop
        test ebx, ebx
        jbe public_6d28810
        push eax
        push eax
        shl ebx, 2
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_6d287f5
        public_6d287e6 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d287e6
        public_6d287f5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push eax
        push ecx
        public_6d28800 : nop
        call public_6d407e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        add eax, ebx
        public_6d2880d : nop
        mov dword ptr ds : [esi+8], eax
        public_6d28810 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov dx, word ptr ds : [esi+0x28]
        or word ptr ss : [ebp+0x28], dx
        mov ebx, dword ptr ds : [esi+0x40]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x3C]
        lea edi, ss:[ebp+0x3C]
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6d40610
        mov ebx, dword ptr ds : [esi+0x4C]
        add esp, 0x10
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x48]
        lea edi, ss:[ebp+0x48]
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6d40680
        add esp, 0x10
        public_6d28866 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d28520)
    }
}

#undef public_6d28570
#undef public_6d28596
#undef public_6d285c4
#undef public_6d285cc
#undef public_6d285e9
#undef public_6d285fd
#undef public_6d2861b
#undef public_6d2863e
#undef public_6d28646
#undef public_6d28663
#undef public_6d2867f
#undef public_6d286a5
#undef public_6d286b0
#undef public_6d28703
#undef public_6d28705
#undef public_6d2877c
#undef public_6d287c8
#undef public_6d287e6
#undef public_6d287f5
#undef public_6d28800
#undef public_6d2880d
#undef public_6d28810
#undef public_6d28866
