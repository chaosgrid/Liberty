#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ea7b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f2c90);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_4f37c0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bee61);

#define public_4ea842 _public_4ea842
#define public_4ea861 _public_4ea861
#define public_4ea975 _public_4ea975
#define public_4ea99d _public_4ea99d
#define public_4eaa3e _public_4eaa3e
#define public_4ead04 _public_4ead04

PROC_DECLARE(0x4ea7b0, internal_4ea7b0, public_4ea7b0);
extern "C" NAKED register_t __cdecl internal_4ea7b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bee61 @0x4ea7b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bee61
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [esi], offset public_5d950c
        mov dword ptr ds : [esi+0x38], offset public_5d9454
        mov dword ptr ds : [esi+0xB4], offset public_5d9448
        mov dword ptr ds : [esi+0x364], offset public_5d9440
        lea ecx, ds:[esi+0x7DC]
        mov dword ptr ss : [esp+0x38], 0x1D
        call public_4144f0
        lea ecx, ds:[esi+0x810]
        call public_4144f0
        lea ecx, ds:[esi+0x854]
        call public_4144f0
        lea ecx, ds:[esi+0x888]
        call public_4144f0
        lea ecx, ds:[esi+0x8C0]
        call public_4144f0
        mov eax, dword ptr ds : [esi+0x900]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_4ea861
        public_4ea842 : nop
        add ecx, 0x10
        call public_4144f0
        lea ecx, ss:[esp+0x18]
        call public_4f3770
        mov eax, dword ptr ds : [esi+0x900]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_4ea842
        public_4ea861 : nop
        mov eax, dword ptr ds : [esi+0x900]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x8FC]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_4f2c90
        lea ecx, ds:[esi+0x450]
        call public_59eee0
        lea ecx, ds:[esi+0x478]
        call public_59eee0
        lea ecx, ds:[esi+0x4A0]
        call public_59eee0
        lea ecx, ds:[esi+0x4C8]
        call public_59eee0
        lea ecx, ds:[esi+0x4F0]
        call public_59eee0
        lea ecx, ds:[esi+0x518]
        call public_59eee0
        lea ecx, ds:[esi+0x540]
        call public_59eee0
        lea ecx, ds:[esi+0x5B8]
        call public_59eee0
        lea ecx, ds:[esi+0x5E0]
        call public_59eee0
        lea ecx, ds:[esi+0x568]
        call public_59eee0
        lea ecx, ds:[esi+0x590]
        call public_59eee0
        lea ecx, ds:[esi+0x628]
        call public_59eee0
        lea ecx, ds:[esi+0x650]
        call public_59eee0
        lea ecx, ds:[esi+0x678]
        call public_59eee0
        lea ecx, ds:[esi+0x6A0]
        call public_59eee0
        lea ecx, ds:[esi+0x6C8]
        call public_59eee0
        lea ecx, ds:[esi+0x6F0]
        call public_59eee0
        lea ecx, ds:[esi+0x718]
        call public_59eee0
        lea ecx, ds:[esi+0x740]
        call public_59eee0
        xor ebx, ebx
        mov dword ptr ds : [public_674b70], ebx
        mov eax, dword ptr ds : [esi+0x914]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        lea ebp, ds:[esi+0x910]
        mov byte ptr ss : [esp+0x38], 0x1C
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_4ea99d
        public_4ea975 : nop
        push ebx
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, ebp
        call public_4f37c0
        mov ecx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [esp+0x1C], ecx
        jne public_4ea975
        public_4ea99d : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x44], 0x1B
        call public_4f2c90
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_5b7e1d
        lea ebp, ds:[esi+0x8C0]
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x28], ebp
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 0x1F
        call public_4144f0
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+0xC]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0x1E
        call public_445dc0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        cmp eax, ebx
        je public_4eaa3e
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], ebx
        public_4eaa3e : nop
        lea ebp, ds:[esi+0x888]
        mov dword ptr ss : [esp+0x28], ebp
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 0x21
        call public_4144f0
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0x20
        call public_445dc0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x38], 0x19
        call public_444e20
        lea ebp, ds:[esi+0x854]
        mov dword ptr ss : [esp+0x28], ebp
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 0x23
        call public_4144f0
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0x22
        call public_445dc0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x38], 0x18
        call public_444e20
        lea ebp, ds:[esi+0x810]
        mov dword ptr ss : [esp+0x28], ebp
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 0x25
        call public_4144f0
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+0xC]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0x24
        call public_445dc0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x38], 0x17
        call public_444e20
        lea ebp, ds:[esi+0x7DC]
        mov dword ptr ss : [esp+0x28], ebp
        mov byte ptr ss : [esp+0x38], 0x27
        mov ecx, ebp
        call public_4144f0
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        lea edi, ss:[ebp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 0x26
        call public_445dc0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x38], 0x16
        call public_444e20
        lea ecx, ds:[esi+0x740]
        mov byte ptr ss : [esp+0x38], 0x15
        call public_59ef20
        lea ecx, ds:[esi+0x718]
        mov byte ptr ss : [esp+0x38], 0x14
        call public_59ef20
        lea ecx, ds:[esi+0x6F0]
        mov byte ptr ss : [esp+0x38], 0x13
        call public_59ef20
        lea ecx, ds:[esi+0x6C8]
        mov byte ptr ss : [esp+0x38], 0x12
        call public_59ef20
        lea ecx, ds:[esi+0x6A0]
        mov byte ptr ss : [esp+0x38], 0x11
        call public_59ef20
        lea ecx, ds:[esi+0x678]
        mov byte ptr ss : [esp+0x38], 0x10
        call public_59ef20
        lea ecx, ds:[esi+0x650]
        mov byte ptr ss : [esp+0x38], 0xF
        call public_59ef20
        lea ecx, ds:[esi+0x628]
        mov byte ptr ss : [esp+0x38], 0xE
        call public_59ef20
        lea ecx, ds:[esi+0x5E0]
        mov byte ptr ss : [esp+0x38], 0xD
        call public_59ef20
        lea ecx, ds:[esi+0x5B8]
        mov byte ptr ss : [esp+0x38], 0xC
        call public_59ef20
        lea ecx, ds:[esi+0x590]
        mov byte ptr ss : [esp+0x38], 0xB
        call public_59ef20
        lea ecx, ds:[esi+0x568]
        mov byte ptr ss : [esp+0x38], 0xA
        call public_59ef20
        lea ecx, ds:[esi+0x540]
        mov byte ptr ss : [esp+0x38], 9
        call public_59ef20
        lea ecx, ds:[esi+0x518]
        mov byte ptr ss : [esp+0x38], 8
        call public_59ef20
        lea ecx, ds:[esi+0x4F0]
        mov byte ptr ss : [esp+0x38], 7
        call public_59ef20
        lea ecx, ds:[esi+0x4C8]
        mov byte ptr ss : [esp+0x38], 6
        call public_59ef20
        lea ecx, ds:[esi+0x4A0]
        mov byte ptr ss : [esp+0x38], 5
        call public_59ef20
        lea ecx, ds:[esi+0x478]
        mov byte ptr ss : [esp+0x38], 4
        call public_59ef20
        lea ecx, ds:[esi+0x450]
        mov byte ptr ss : [esp+0x38], 3
        call public_59ef20
        mov eax, dword ptr ds : [esi+0x374]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x374], ebx
        lea ecx, ds:[esi+0x364]
        mov dword ptr ds : [esi+0x378], ebx
        mov dword ptr ds : [esi+0x37C], ebx
        mov byte ptr ss : [esp+0x38], 1
        call public_576010
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x38], bl
        call public_59fa50
        mov dword ptr ds : [esi], offset public_5d6eac
        mov eax, dword ptr ds : [esi+0x28]
        add esi, 0x28
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        je public_4ead04
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4ead04 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4ea7b0)
    }
}

#undef public_4ea842
#undef public_4ea861
#undef public_4ea975
#undef public_4ea99d
#undef public_4eaa3e
#undef public_4ead04
