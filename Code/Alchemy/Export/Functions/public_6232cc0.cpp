#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208690);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_6232cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6233fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6233fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6234040);
CLANG_FORWARD_JUMP_SYMBOL(public_6249b90);

#define public_6232e3a _public_6232e3a
#define public_6232ea9 _public_6232ea9
#define public_6232eb0 _public_6232eb0
#define public_6232ebe _public_6232ebe
#define public_6232f52 _public_6232f52
#define public_6232fd1 _public_6232fd1
#define public_6232fd8 _public_6232fd8
#define public_6232fe6 _public_6232fe6
#define public_6233025 _public_6233025
#define public_6233028 _public_6233028

PROC_DECLARE(0x6232cc0, internal_6232cc0, public_6232cc0);
extern "C" NAKED register_t __cdecl internal_6232cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249b90 @0x6232cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249b90
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x68]
        push eax
        lea ebp, ds:[edi+0xD8]
        mov ecx, ebp
        call public_6233fe0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], esi
        lea ecx, ss:[esp+0x18]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x6C], eax
        call public_6233fc0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        cmp ebx, esi
        mov byte ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x18], 0
        je public_6233025
        mov edx, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [edx+0x5C]
        mov edx, dword ptr ds : [edi+0x90]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi+0xF0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[ebx+0xC]
        mov esi, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, ebp
        call public_6234040
        mov ebp, dword ptr ds : [eax]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6232fe6
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[ebp+0xC]
        push esi
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x3C]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x44], edx
        lea edx, ss:[esp+0x28]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x4C], eax
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call public_6206ad0
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_6232e3a
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6232eb0
        public_6232e3a : nop
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6232eb0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_6232ea9
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x20]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x2C]
        mov ecx, esi
        push eax
        call public_6206b80
        public_6232ea9 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+0xC], ecx
        public_6232eb0 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebx
        je public_6232fe6
        public_6232ebe : nop
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[ebx+0xC]
        push esi
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ss:[esp+0x4C]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x54], edx
        lea edx, ss:[esp+0x28]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x5C], eax
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call public_6206ad0
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x54]
        fnstsw ax
        test ah, 5
        jp public_6232f52
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6232fd8
        public_6232f52 : nop
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6232fd8
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_6232fd1
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x20]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi]
        add esp, 0xC
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_6232fd1 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+0xC], eax
        public_6232fd8 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6232ebe
        public_6232fe6 : nop
        lea ecx, ss:[esp+0x2C]
        push esi
        push ecx
        lea ecx, ds:[edi+0x4C]
        call public_6208690
        mov edx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x2C]
        push edx
        push eax
        lea ecx, ss:[esp+0x50]
        call public_6208a70
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        xor eax, eax
        jmp public_6233028
        public_6233025 : nop
        or eax, 0xFFFFFFFF
        public_6233028 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6232cc0)
    }
}

#undef public_6232e3a
#undef public_6232ea9
#undef public_6232eb0
#undef public_6232ebe
#undef public_6232f52
#undef public_6232fd1
#undef public_6232fd8
#undef public_6232fe6
#undef public_6233025
#undef public_6233028
