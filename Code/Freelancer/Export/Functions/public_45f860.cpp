#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45f860);
CLANG_FORWARD_PROC_SYMBOL(public_45fb20);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46cc90);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_46d0d0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_46d990);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba4bb);

#define public_45f8c6 _public_45f8c6
#define public_45f8c8 _public_45f8c8
#define public_45f917 _public_45f917
#define public_45f93c _public_45f93c
#define public_45f9d4 _public_45f9d4
#define public_45fa87 _public_45fa87
#define public_45faac _public_45faac
#define public_45fb0b _public_45fb0b

PROC_DECLARE(0x45f860, internal_45f860, public_45f860);
extern "C" NAKED register_t __cdecl internal_45f860()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba4bb @0x45f868*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba4bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_46cd50
        mov eax, dword ptr ds : [edi+4]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_45f9d4
        push 0xC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x74], 0
        je public_45f8c6
        lea edx, ss:[esp+0x13]
        push edx
        mov ecx, esi
        call public_46ba60
        jmp public_45f8c8
        public_45f8c6 : nop
        xor esi, esi
        public_45f8c8 : nop
        mov ebp, dword ptr ss : [esp+0x80]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call public_46baf0
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x84]
        call public_46bba0
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebx
        je public_45f93c
        public_45f917 : nop
        add eax, 8
        push eax
        push ebp
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x80], eax
        jne public_45f917
        public_45f93c : nop
        mov edx, dword ptr ss : [esp+0x7C]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        xor ebp, ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], ebp
        call public_46cc90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x10], esi
        xor eax, eax
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x64]
        xor esi, esi
        xor ebx, ebx
        call public_46d0d0
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[edi+0x18]
        call public_46cdc0
        mov eax, dword ptr ds : [eax]
        add eax, 0x10
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ds : [edi+0x14]
/*FIXUP push offset public_5cf0dc @0x45f9a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0dc
        push 0x552
/*FIXUP push offset public_5cf0b0 @0x45f9b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0b0
        inc ebp
        mov eax, 0x100003
        mov dword ptr ds : [edi+0x14], ebp
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cf094 @0x45f9c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_45fb0b
/*FIXUP public_45f9d4 : nop
        push offset public_5cf054 @0x45f9d4*/
  FIXUP public_45f9d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf054
        push 0x558
/*FIXUP push offset public_5cf0b0 @0x45f9de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0b0
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x45f9e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x90]
        add esp, 0x14
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], 0
        call public_46cc90
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+0x10]
        mov ebx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_53e430
        mov edx, dword ptr ds : [eax]
        push ebx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_46c860
        mov ebp, dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call public_46baf0
        mov ebx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x84]
        call public_46bba0
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebx
        je public_45faac
        public_45fa87 : nop
        add eax, 8
        push eax
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46c800
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x80], eax
        jne public_45fa87
        public_45faac : nop
        mov eax, dword ptr ss : [esp+0x7C]
        lea ecx, ss:[esp+0x40]
        xor esi, esi
        push ecx
        lea ecx, ss:[esp+0x54]
        xor ebx, ebx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x50], eax
        call public_45fb20
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ds:[edi+0x18]
        call public_46d990
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_46d660
        mov eax, dword ptr ss : [esp+0x38]
        add eax, 0x10
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebp
        inc dword ptr ds : [edi+0x14]
        public_45fb0b : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x45f860)
    }
}

#undef public_45f8c6
#undef public_45f8c8
#undef public_45f917
#undef public_45f93c
#undef public_45f9d4
#undef public_45fa87
#undef public_45faac
#undef public_45fb0b
