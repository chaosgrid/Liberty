#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4f1dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3820);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf0e9);

#define public_4f1e23 _public_4f1e23
#define public_4f1e34 _public_4f1e34
#define public_4f1e43 _public_4f1e43
#define public_4f1e73 _public_4f1e73
#define public_4f1e75 _public_4f1e75
#define public_4f1ed9 _public_4f1ed9
#define public_4f1ef2 _public_4f1ef2
#define public_4f1ef4 _public_4f1ef4
#define public_4f1f11 _public_4f1f11
#define public_4f1f2a _public_4f1f2a
#define public_4f1f2c _public_4f1f2c
#define public_4f1f5c _public_4f1f5c
#define public_4f1f5e _public_4f1f5e
#define public_4f1faf _public_4f1faf
#define public_4f2006 _public_4f2006
#define public_4f2058 _public_4f2058

PROC_DECLARE(0x4f1dd0, internal_4f1dd0, public_4f1dd0);
extern "C" NAKED register_t __cdecl internal_4f1dd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf0e9 @0x4f1dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf0e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        call public_54baf0
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_4f2058
        call public_40f130
        mov ecx, dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_610850]
        dec eax
        dec ecx
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        xor ebp, ebp
        public_4f1e23 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x14], 9
        je public_4f1e34
        mov ebp, dword ptr ss : [ebp+0x14]
        jmp public_4f1e43
        public_4f1e34 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_540fc0
        add esp, 4
        mov ebp, eax
        public_4f1e43 : nop
        cmp ebp, ebx
        je public_4f2058
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_4f1e23
        lea eax, ss:[ebp+0xC]
        cmp eax, ebx
        je public_4f1e73
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_4f1e73
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        je public_4f1e75
        public_4f1e73 : nop
        xor eax, eax
        public_4f1e75 : nop
        push eax
        call dword ptr ds : [public_5c65b8]
        add esp, 4
        test al, al
        je public_4f1e23
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        call dword ptr ds : [edi+0x44]
        test al, al
        je public_4f1e23
        fld dword ptr ss : [esp+0x20]
        xor cl, cl
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f1ed9
        mov dword ptr ss : [esp+0x20], 0
        mov cl, 1
        jmp public_4f1ef4
        public_4f1ed9 : nop
        fild dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_4f1ef2
        fstp dword ptr ss : [esp+0x20]
        mov cl, 1
        jmp public_4f1ef4
        public_4f1ef2 : nop
        fstp st(0)
        public_4f1ef4 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f1f11
        mov dword ptr ss : [esp+0x24], 0
        mov cl, 1
        jmp public_4f1f2c
        public_4f1f11 : nop
        fild dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_4f1f2a
        fstp dword ptr ss : [esp+0x24]
        mov cl, 1
        jmp public_4f1f2c
        public_4f1f2a : nop
        fstp st(0)
        public_4f1f2c : nop
        cmp cl, bl
        sete al
        cmp al, bl
        je public_4f1e23
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[ecx+0xC]
        cmp eax, ebx
        je public_4f1f5c
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_4f1f5c
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_4f1f5e
        public_4f1f5c : nop
        xor eax, eax
        public_4f1f5e : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebp
        mov ecx, eax
        call dword ptr ds : [public_5c65a8]
        test al, al
        je public_4f1e23
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x84], ebx
        call dword ptr ds : [public_5c645c]
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[ebp+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x80], 1
        je public_4f1faf
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62a8]
        public_4f1faf : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        call public_40f130
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx+0x914]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x84], 2
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_4f2006
        mov edi, eax
        public_4f2006 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x38]
        push ecx
        add eax, 8
        push eax
        call public_4f3820
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x918]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+0x918], ecx
        cmp dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        je public_4f1e23
        push ebx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62a8]
        jmp public_4f1e23
        public_4f2058 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x4f1dd0)
    }
}

#undef public_4f1e23
#undef public_4f1e34
#undef public_4f1e43
#undef public_4f1e73
#undef public_4f1e75
#undef public_4f1ed9
#undef public_4f1ef2
#undef public_4f1ef4
#undef public_4f1f11
#undef public_4f1f2a
#undef public_4f1f2c
#undef public_4f1f5c
#undef public_4f1f5e
#undef public_4f1faf
#undef public_4f2006
#undef public_4f2058
