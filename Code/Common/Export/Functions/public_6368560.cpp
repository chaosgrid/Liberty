#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6366180);
CLANG_FORWARD_PROC_SYMBOL(public_63661a0);
CLANG_FORWARD_PROC_SYMBOL(public_6366400);
CLANG_FORWARD_PROC_SYMBOL(public_6366420);
CLANG_FORWARD_PROC_SYMBOL(public_63669b0);
CLANG_FORWARD_PROC_SYMBOL(public_6368300);
CLANG_FORWARD_PROC_SYMBOL(public_63683f0);
CLANG_FORWARD_PROC_SYMBOL(public_6368410);
CLANG_FORWARD_PROC_SYMBOL(public_6368540);
CLANG_FORWARD_PROC_SYMBOL(public_6368560);
CLANG_FORWARD_PROC_SYMBOL(public_63687b0);
CLANG_FORWARD_PROC_SYMBOL(public_63690b0);
CLANG_FORWARD_PROC_SYMBOL(public_6369170);
CLANG_FORWARD_PROC_SYMBOL(public_6369190);
CLANG_FORWARD_PROC_SYMBOL(public_63691b0);

#define public_63685c2 _public_63685c2
#define public_63685c7 _public_63685c7
#define public_63685f1 _public_63685f1
#define public_63685f6 _public_63685f6
#define public_6368621 _public_6368621
#define public_6368626 _public_6368626
#define public_6368698 _public_6368698
#define public_63686b9 _public_63686b9
#define public_63686e9 _public_63686e9
#define public_6368710 _public_6368710
#define public_636875f _public_636875f
#define public_6368764 _public_6368764

PROC_DECLARE(0x6368560, internal_6368560, public_6368560);
extern "C" NAKED register_t __cdecl internal_6368560()
{
    __asm
    {
        sub esp, 0x118
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea ecx, ss:[esp+0x10]
        call public_6366400
        mov ebp, dword ptr ss : [esp+0x134]
        lea eax, ss:[ebp+3]
        and eax, 0xFFFFFFFC
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6368410
        mov esi, dword ptr ss : [esp+0x138]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[ecx*4]
        mov edi, eax
        lea eax, ds:[eax+edx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_63685c2
        push edx
        mov ecx, esi
        call public_63440d0
        mov ecx, dword ptr ss : [esp+0x18]
        jmp public_63685c7
        public_63685c2 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edi
        public_63685c7 : nop
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[ecx*4]
        mov edi, eax
        lea eax, ds:[eax+edx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_63685f1
        push edx
        mov ecx, esi
        call public_63440d0
        mov ecx, dword ptr ss : [esp+0x18]
        jmp public_63685f6
        public_63685f1 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edi
        public_63685f6 : nop
        mov edi, dword ptr ds : [esi+0xC]
        imul ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[ecx*4+0xC]
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, edi
        jb public_6368621
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_6368626
        public_6368621 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_6368626 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        call public_63661a0
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+0x14]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [esp+0x130]
        push ebp
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6366420
        lea ecx, ss:[esp+0xC8]
        call public_6366400
        lea ecx, ss:[esp+0xE0]
        call public_6366400
        lea ecx, ss:[esp+0xF8]
        call public_6366400
        lea ecx, ss:[esp+0x110]
        call public_6366400
        mov ecx, dword ptr ds : [ebx+4]
        xor eax, eax
        test ecx, ecx
        jle public_63686b9
        public_6368698 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        inc ecx
        imul ecx, eax
        fld dword ptr ds : [edx+ecx*4]
        fadd dword ptr ds : [public_63a5608]
        fstp dword ptr ds : [edx+ecx*4]
        lea ecx, ds:[edx+ecx*4]
        mov ecx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, ecx
        jl public_6368698
        public_63686b9 : nop
        lea ecx, ss:[esp+0x10]
        call public_6366180
        cmp eax, 1
        mov edi, dword ptr ss : [esp+0x12C]
        jne public_63686e9
        mov eax, dword ptr ss : [esp+0x130]
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        push ebp
        push eax
        push ecx
        mov ecx, ebx
        call public_6368300
        cmp eax, 1
        je public_6368710
        public_63686e9 : nop
        mov ecx, edi
        call public_6368540
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0x10]
        push esi
        push eax
        mov eax, dword ptr ds : [ebx+0x14]
        push edx
        mov edx, dword ptr ds : [ebx+0xC]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call public_63669b0
        cmp eax, 1
        jne public_6368764
        public_6368710 : nop
        mov ecx, ebx
        call public_63683f0
        mov ecx, edi
        call public_63690b0
        fstp dword ptr ss : [esp+0x2C]
        push edi
        mov ecx, ebx
        call public_63687b0
        mov ecx, edi
        call public_63690b0
        fstp dword ptr ss : [esp+0x28]
        mov ecx, edi
        call public_63691b0
        fadd dword ptr ss : [esp+0x2C]
        mov ecx, edi
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        jne public_636875f
        call public_6369170
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x118
        ret 0x10
        public_636875f : nop
        call public_6369190
        public_6368764 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x118
        ret 0x10
        UNREACHABLE_TRAP(0x6368560)
    }
}

#undef public_63685c2
#undef public_63685c7
#undef public_63685f1
#undef public_63685f6
#undef public_6368621
#undef public_6368626
#undef public_6368698
#undef public_63686b9
#undef public_63686e9
#undef public_6368710
#undef public_636875f
#undef public_6368764
