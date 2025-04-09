#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4422b0);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4b62f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b96d9);

#define public_442300 _public_442300
#define public_44232f _public_44232f
#define public_442333 _public_442333
#define public_442338 _public_442338
#define public_442346 _public_442346
#define public_4423a5 _public_4423a5
#define public_44240c _public_44240c
#define public_442450 _public_442450
#define public_44247c _public_44247c
#define public_442499 _public_442499
#define public_4424b0 _public_4424b0
#define public_4424c8 _public_4424c8

PROC_DECLARE(0x4422b0, internal_4422b0, public_4422b0);
extern "C" NAKED register_t __cdecl internal_4422b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b96d9 @0x4422b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b96d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        xor bl, bl
        push edi
        mov byte ptr ss : [esp+0xE], bl
        mov byte ptr ss : [esp+0xF], bl
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6190]
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0
        je public_442346
        mov edi, dword ptr ds : [public_5c603c]
        lea ecx, ds:[ecx]
        public_442300 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_442338
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call edi
        add esp, 4
        test eax, eax
        je public_442338
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        sub eax, 0xB
        je public_442333
        dec eax
        je public_44232f
        sub eax, 8
        jne public_442338
        mov byte ptr ss : [esp+0xF], 1
        jmp public_442338
        public_44232f : nop
        mov bl, 1
        jmp public_442338
        public_442333 : nop
        mov byte ptr ss : [esp+0xE], 1
        public_442338 : nop
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x24]
        cmp esi, eax
        jne public_442300
        test bl, bl
        jne public_4423a5
        public_442346 : nop
        mov eax, dword ptr ds : [public_668818]
        push 0
        push eax
        call public_489e80
        push 0x41000000
        push 0x49D
        call public_4b62f0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call dword ptr ds : [public_5c618c]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_4423a5 : nop
        mov cl, byte ptr ss : [esp+0xE]
        test cl, cl
        jne public_44240c
        mov eax, dword ptr ds : [public_668814]
        push 0
        push eax
        call public_489e80
        push 0x41000000
        push 0x49E
        call public_4b62f0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call dword ptr ds : [public_5c618c]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_44240c : nop
        mov cl, byte ptr ss : [esp+0xF]
        test cl, cl
        jne public_442499
        mov eax, dword ptr ds : [public_668810]
        push 0
        push eax
        call public_489e80
        push 0x41000000
        push 0x49F
        call public_4b62f0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_44247c
        nop 
        public_442450 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6188]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_442450
        mov eax, dword ptr ss : [esp+0x24]
        public_44247c : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_442499 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov edi, eax
        je public_4424c8
        lea esp, ss:[esp]
        public_4424b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4424b0
        public_4424c8 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4422b0)
    }
}

#undef public_442300
#undef public_44232f
#undef public_442333
#undef public_442338
#undef public_442346
#undef public_4423a5
#undef public_44240c
#undef public_442450
#undef public_44247c
#undef public_442499
#undef public_4424b0
#undef public_4424c8
