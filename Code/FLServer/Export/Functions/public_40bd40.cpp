#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f00);
CLANG_FORWARD_PROC_SYMBOL(public_402380);
CLANG_FORWARD_PROC_SYMBOL(public_4023a0);
CLANG_FORWARD_PROC_SYMBOL(public_40af20);
CLANG_FORWARD_PROC_SYMBOL(public_40bd40);
CLANG_FORWARD_PROC_SYMBOL(public_40c920);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_4126d0);
CLANG_FORWARD_PROC_SYMBOL(public_4186a2);
CLANG_FORWARD_PROC_SYMBOL(public_4186a8);
CLANG_FORWARD_PROC_SYMBOL(public_4186ae);
CLANG_FORWARD_PROC_SYMBOL(public_4186d8);
CLANG_FORWARD_PROC_SYMBOL(public_4186de);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418c9c);
CLANG_FORWARD_PROC_SYMBOL(public_418ca2);
CLANG_FORWARD_JUMP_SYMBOL(public_419fd8);

#define public_40bdbb _public_40bdbb
#define public_40be23 _public_40be23
#define public_40be38 _public_40be38
#define public_40be47 _public_40be47
#define public_40be5f _public_40be5f
#define public_40be7a _public_40be7a

PROC_DECLARE(0x40bd40, internal_40bd40, public_40bd40);
extern "C" NAKED register_t __cdecl internal_40bd40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419fd8 @0x40bd42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419fd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x14]
        push ebx
        push esi
        xor ebx, ebx
        cmp al, bl
        push edi
        mov esi, ecx
        je public_40be38
        push ebp
        lea edi, ds:[esi+0xCC]
        mov dword ptr ds : [public_427824], 1
        mov ebp, dword ptr ds : [esi+0x84C]
        push 4
        mov ecx, edi
        call public_401f00
        lea ecx, ss:[esp+0x24]
        call public_418aaa
        push 0xF00F
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40bdbb
/*FIXUP push offset public_42557c @0x40bdad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x28]
        call public_418c9c
        public_40bdbb : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0x100004
        push ecx
        push eax
        call public_40e160
        add esp, 8
        push ebp
        mov ecx, edi
        call public_401f00
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_418aa4
        mov edi, dword ptr ds : [public_41b154]
/*FIXUP push offset public_427820 @0x40bded*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427820
        push ebx
        push ebx
/*FIXUP push offset _public_40c920 @0x40bdf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40c920
        push ebx
        push ebx
        call edi
        cmp eax, ebx
        mov dword ptr ds : [public_42781c], eax
        pop ebp
        jne public_40be23
        pop edi
        pop esi
        mov dword ptr ds : [public_427824], ebx
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_40be23 : nop
        lea edx, ss:[esp+0xC]
        push edx
        push ebx
        push ebx
/*FIXUP push offset _public_40af20 @0x40be2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40af20
        push ebx
        push ebx
        call edi
        mov dword ptr ds : [public_42782c], eax
        public_40be38 : nop
        mov eax, dword ptr ds : [esi+0x81C]
        cmp eax, ebx
        jne public_40be47
        mov eax, dword ptr ds : [public_41b8c8]
        public_40be47 : nop
        push eax
        call public_4186ae
        mov eax, dword ptr ds : [esi+0x6E8]
        add esp, 4
        cmp eax, ebx
        jne public_40be5f
        mov eax, dword ptr ds : [public_41b8c8]
        public_40be5f : nop
        push eax
        call public_4186a8
        mov eax, dword ptr ds : [esi+0x82C]
        add esp, 4
        cmp eax, ebx
        mov ebx, dword ptr ds : [public_41b8c8]
        je public_40be7a
        mov ebx, eax
        public_40be7a : nop
        mov ecx, dword ptr ds : [public_41bb70]
        lea edi, ds:[esi+0xCC]
        call public_4186d8
        mov ecx, dword ptr ds : [public_41bb70]
        push eax
        call public_4186de
        push eax
        mov eax, dword ptr ds : [public_427830]
        push ebx
        push eax
        mov ecx, edi
        call public_402380
        mov ecx, edi
        push eax
        call public_4023a0
        push eax
        call public_4186a2
        add esp, 0x18
        lea ecx, ds:[esi+0x2D4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        call public_4126d0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x40bd40)
    }
}

#undef public_40bdbb
#undef public_40be23
#undef public_40be38
#undef public_40be47
#undef public_40be5f
#undef public_40be7a
