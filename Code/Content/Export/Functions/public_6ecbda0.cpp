#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf050);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15560);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafab);

#define public_6ecbdfb _public_6ecbdfb
#define public_6ecbe32 _public_6ecbe32
#define public_6ecbe3a _public_6ecbe3a
#define public_6ecbe51 _public_6ecbe51
#define public_6ecbe74 _public_6ecbe74
#define public_6ecbe76 _public_6ecbe76
#define public_6ecbea2 _public_6ecbea2
#define public_6ecbea4 _public_6ecbea4
#define public_6ecbeca _public_6ecbeca
#define public_6ecbecc _public_6ecbecc
#define public_6ecbed8 _public_6ecbed8
#define public_6ecbeda _public_6ecbeda
#define public_6ecbee6 _public_6ecbee6
#define public_6ecbeeb _public_6ecbeeb
#define public_6ecbf32 _public_6ecbf32
#define public_6ecbf4e _public_6ecbf4e
#define public_6ecbf70 _public_6ecbf70

PROC_DECLARE(0x6ecbda0, internal_6ecbda0, public_6ecbda0);
extern "C" NAKED register_t __cdecl internal_6ecbda0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafab @0x6ecbda8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecbf70
        push ebx
        push ebp
        push esi
        lea eax, ds:[edi+0x14]
/*FIXUP push offset public_6fb57a0 @0x6ecbdd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push eax
        xor esi, esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ecbdfb
        lea ecx, ds:[edi+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        call public_6f15560
        mov esi, eax
        public_6ecbdfb : nop
        xor ebp, ebp
        test esi, esi
        je public_6ecbe51
        lea ebx, ds:[esi+0x38]
        mov esi, dword ptr ds : [edi+4]
        push ebx
        lea edx, ss:[esp+0x14]
        add esi, 0x184
        push edx
        mov ecx, esi
        call public_6f2e220
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_6ecbe32
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecbe32
        lea eax, ss:[esp+0x10]
        jmp public_6ecbe3a
        public_6ecbe32 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6ecbe3a : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax+0x188]
        add eax, 0x184
        cmp ecx, edx
        je public_6ecbe51
        lea ebp, ds:[ecx+0x10]
        public_6ecbe51 : nop
        push 0x70
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x44], ebx
        je public_6ecbe74
        mov ecx, eax
        call public_6ecf3a0
        mov esi, eax
        jmp public_6ecbe76
        public_6ecbe74 : nop
        xor esi, esi
        public_6ecbe76 : nop
        lea eax, ds:[edi+0x14]
/*FIXUP push offset public_6fb57a0 @0x6ecbe79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push eax
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ecbea2
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ds:[edi+0x10]
        push edx
        call public_6f15b90
        jmp public_6ecbea4
        public_6ecbea2 : nop
        xor eax, eax
        public_6ecbea4 : nop
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f478c0
        cmp ebp, ebx
        mov eax, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [esi+0xC], eax
        je public_6ecbeca
        lea eax, ss:[ebp+0x10]
        jmp public_6ecbecc
        public_6ecbeca : nop
        xor eax, eax
        public_6ecbecc : nop
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x10], eax
        je public_6ecbed8
        mov eax, dword ptr ss : [ebp+0x44]
        jmp public_6ecbeda
        public_6ecbed8 : nop
        xor eax, eax
        public_6ecbeda : nop
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x14], eax
        je public_6ecbee6
        mov eax, dword ptr ss : [ebp+4]
        jmp public_6ecbeeb
        public_6ecbee6 : nop
        mov eax, 1
        public_6ecbeeb : nop
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x34], ecx
        mov dl, byte ptr ds : [edi+0x8C]
        mov byte ptr ds : [esi+0x61], dl
        mov al, byte ptr ds : [edi+0x8D]
        mov byte ptr ds : [esi+0x62], al
        lea eax, ds:[edi+0x44]
        mov byte ptr ds : [esi+0x60], 1
        cmp dword ptr ds : [eax], ebx
        je public_6ecbf32
        mov ecx, dword ptr ds : [edi+4]
        push eax
        call public_6f15b90
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ds:[esi+0x44]
        push edx
        push eax
        mov dword ptr ds : [esi+0x38], eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        jmp public_6ecbf4e
        public_6ecbf32 : nop
        lea eax, ds:[edi+0x80]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [esi+0x38], ebx
        public_6ecbf4e : nop
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x40], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+4]
        push esi
        push eax
        add ecx, 0x204
        call public_6ecf050
        pop esi
        pop ebp
        pop ebx
        public_6ecbf70 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov al, 1
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6ecbda0)
    }
}

#undef public_6ecbdfb
#undef public_6ecbe32
#undef public_6ecbe3a
#undef public_6ecbe51
#undef public_6ecbe74
#undef public_6ecbe76
#undef public_6ecbea2
#undef public_6ecbea4
#undef public_6ecbeca
#undef public_6ecbecc
#undef public_6ecbed8
#undef public_6ecbeda
#undef public_6ecbee6
#undef public_6ecbeeb
#undef public_6ecbf32
#undef public_6ecbf4e
#undef public_6ecbf70
