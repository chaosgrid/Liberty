#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_5766e0);
CLANG_FORWARD_PROC_SYMBOL(public_576a00);
CLANG_FORWARD_PROC_SYMBOL(public_576ac0);
CLANG_FORWARD_PROC_SYMBOL(public_576bb0);
CLANG_FORWARD_PROC_SYMBOL(public_577ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5785d0);
CLANG_FORWARD_PROC_SYMBOL(public_578630);
CLANG_FORWARD_PROC_SYMBOL(public_578b20);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3b36);

#define public_576c50 _public_576c50
#define public_576c7b _public_576c7b
#define public_576c95 _public_576c95
#define public_576ca0 _public_576ca0
#define public_576cfe _public_576cfe
#define public_576d71 _public_576d71
#define public_576e03 _public_576e03
#define public_576e40 _public_576e40
#define public_576e84 _public_576e84
#define public_576e95 _public_576e95
#define public_576eab _public_576eab

PROC_DECLARE(0x576bb0, internal_576bb0, public_576bb0);
extern "C" NAKED register_t __cdecl internal_576bb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c3b36 @0x576bb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3b36
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16A4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x16B4]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x148]
        call dword ptr ds : [public_5c605c]
        mov edx, dword ptr ss : [esp+0x16C4]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x150]
        mov dword ptr ss : [esp+0x16C0], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_576eab
        mov edi, dword ptr ds : [public_5c6054]
        lea ecx, ss:[esp+0x148]
        call edi
        test al, al
        je public_576c50
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5e4388 @0x576c3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4388
        lea ecx, ss:[esp+0x14C]
        call esi
        test al, al
        jne public_576c7b
        public_576c50 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x44]
        push ecx
        push 0x2EA
/*FIXUP push offset public_5e42c8 @0x576c60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e42c8
        mov eax, 0x100001
/*FIXUP push offset public_5e4350 @0x576c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4350
        push eax
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [public_5c6050]
        add esp, 0x14
        public_576c7b : nop
        lea ecx, ss:[esp+0x148]
        call edi
        test al, al
        je public_576eab
        push ebp
        mov ebp, dword ptr ds : [public_5c669c]
        jmp public_576ca0
        public_576c95 : nop
        mov esi, dword ptr ds : [public_5c6050]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_576ca0 : nop
        push offset public_5e4348 @0x576ca0*/
  FIXUP public_576ca0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4348
        lea ecx, ss:[esp+0x150]
        call esi
        test al, al
        je public_576d71
        mov al, byte ptr ds : [public_67c250]
        test al, 1
        jne public_576cfe
        or al, 1
        mov byte ptr ds : [public_67c250], al
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, offset public_67c240
        call public_5a6900
/*FIXUP push offset _public_576a00 @0x576cd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_576a00
        mov dword ptr ds : [public_67c230], ebx
        mov dword ptr ds : [public_67c234], ebx
        mov dword ptr ds : [public_67c238], ebx
        mov dword ptr ds : [public_67c23c], 1
        call public_5b7e6c
        add esp, 4
        public_576cfe : nop
        mov eax, dword ptr ds : [public_67c258]
/*FIXUP push offset public_67c230 @0x576d03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c230
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, offset public_67c254
        call public_5785d0
        mov eax, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14C]
        lea ecx, ds:[eax+8]
        push edx
        call public_5766e0
        test al, al
        jne public_576e95
        mov eax, dword ptr ds : [public_67c258]
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_578b20
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67c25c]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67c25c], eax
        jmp public_576e95
/*FIXUP public_576d71 : nop
        push offset public_5e4340 @0x576d71*/
  FIXUP public_576d71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4340
        lea ecx, ss:[esp+0x150]
        call esi
        test al, al
        je public_576e95
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x1A]
        inc eax
        push ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6f98]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x16C0], 1
        call public_46ba60
        mov eax, dword ptr ds : [public_67c228]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_67c224
        mov byte ptr ss : [esp+0x16C8], 2
        call public_578630
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x16BC], bl
        call public_576ac0
        mov eax, dword ptr ds : [public_67c228]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14C]
        lea esi, ds:[eax+8]
        call ebp
        test al, al
        je public_576e95
/*FIXUP public_576e03 : nop
        push offset public_5c866c @0x576e03*/
  FIXUP public_576e03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x150]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x14C]
        je public_576e40
        call dword ptr ds : [public_5c6698]
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c7088]
        jmp public_576e84
/*FIXUP public_576e40 : nop
        push offset public_5e4300 @0x576e40*/
  FIXUP public_576e40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4300
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_576e84
        push ebx
        lea ecx, ss:[esp+0x150]
        call dword ptr ds : [public_5c6024]
        push eax
        call public_577ef0
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_576e84
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call public_5947a0
        public_576e84 : nop
        lea ecx, ss:[esp+0x14C]
        call ebp
        test al, al
        jne public_576e03
        public_576e95 : nop
        lea ecx, ss:[esp+0x14C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_576c95
        pop ebp
        public_576eab : nop
        mov ebx, 3
        lea ecx, ss:[esp+0x1570]
        mov dword ptr ss : [esp+0x16B8], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x1570]
        mov byte ptr ss : [esp+0x16B8], 4
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x1574]
        mov byte ptr ss : [esp+0x16BC], bl
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x148]
        mov dword ptr ss : [esp+0x16B8], 5
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x14C]
        mov dword ptr ss : [esp+0x16BC], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x16B0]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16B0
        ret 
        UNREACHABLE_TRAP(0x576bb0)
    }
}

#undef public_576c50
#undef public_576c7b
#undef public_576c95
#undef public_576ca0
#undef public_576cfe
#undef public_576d71
#undef public_576e03
#undef public_576e40
#undef public_576e84
#undef public_576e95
#undef public_576eab
