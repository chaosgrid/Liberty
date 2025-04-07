#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f93640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6facf78);

#define public_6f07541 _public_6f07541
#define public_6f07632 _public_6f07632
#define public_6f07646 _public_6f07646
#define public_6f07656 _public_6f07656
#define public_6f0765f _public_6f0765f
#define public_6f07674 _public_6f07674
#define public_6f0768b _public_6f0768b

PROC_DECLARE(0x6f07470, internal_6f07470, public_6f07470);
extern "C" NAKED register_t __cdecl internal_6f07470()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facf78 @0x6f07472*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facf78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        mov al, byte ptr ss : [esp+0x13]
        push ebx
        push esi
        push edi
        xor edi, edi
        push edi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call public_6f93640
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x9C], edi
        call public_6eb70f0
        mov ecx, dword ptr ds : [esi+0x18]
        mov ebx, dword ptr ds : [public_6fb3664]
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        call ebx
        add esp, 0xC
        push 1
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x24], 0x44BB8000
        call public_6eea860
        push eax
        call public_6f5ea40
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0x1C
        cmp eax, edi
        je public_6f07646
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+8], 1
        jne public_6f07541
        mov ecx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0xA8]
        mov dword ptr ds : [ecx], 2
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], edx
        jmp public_6f0765f
        public_6f07541 : nop
        mov eax, dword ptr ds : [edi+0x24]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call ebx
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x44]
        add esp, 0xC
        fld st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ds : [public_6fd0648]
        fnstsw ax
        test ah, 0x41
        jne public_6f07632
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6fb8100]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fb8100]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb8100]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0xA0]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0xAC]
        mov dword ptr ds : [eax], 3
        mov dword ptr ds : [ecx], 0x43FA0000
        jmp public_6f0765f
        public_6f07632 : nop
        mov edx, dword ptr ss : [esp+0xA0]
        fstp st(0)
        mov dword ptr ds : [edx], 2
        mov eax, dword ptr ds : [edi+0x24]
        jmp public_6f07656
        public_6f07646 : nop
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [edx], 2
        mov eax, dword ptr ds : [esi+0x18]
        public_6f07656 : nop
        mov ecx, dword ptr ss : [esp+0xA8]
        mov dword ptr ds : [ecx], eax
        public_6f0765f : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        je public_6f0768b
        public_6f07674 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f07674
        public_6f0768b : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x94]
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 0x10
        UNREACHABLE_TRAP(0x6f07470)
    }
}

#undef public_6f07541
#undef public_6f07632
#undef public_6f07646
#undef public_6f07656
#undef public_6f0765f
#undef public_6f07674
#undef public_6f0768b
