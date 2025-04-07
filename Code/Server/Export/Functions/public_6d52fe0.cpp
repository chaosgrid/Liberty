#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6d48960);
CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d52fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63915);

#define public_6d5309d _public_6d5309d
#define public_6d530c6 _public_6d530c6
#define public_6d530e4 _public_6d530e4
#define public_6d530ea _public_6d530ea
#define public_6d53102 _public_6d53102
#define public_6d53130 _public_6d53130
#define public_6d53150 _public_6d53150
#define public_6d53162 _public_6d53162
#define public_6d53172 _public_6d53172
#define public_6d53189 _public_6d53189
#define public_6d53197 _public_6d53197
#define public_6d531a5 _public_6d531a5
#define public_6d531e4 _public_6d531e4
#define public_6d53201 _public_6d53201
#define public_6d53244 _public_6d53244
#define public_6d5326a _public_6d5326a
#define public_6d532c8 _public_6d532c8

PROC_DECLARE(0x6d52fe0, internal_6d52fe0, public_6d52fe0);
extern "C" NAKED register_t __cdecl internal_6d52fe0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63915 @0x6d52fe8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63915
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1D84
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov al, byte ptr ss : [esp+0x17]
        push ebp
        push esi
        push edi
        push 0
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_6d64b74]
        mov dword ptr ss : [esp+0xC], 0
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1D98], 0
        call dword ptr ds : [public_6d644f0]
        mov esi, dword ptr ss : [esp+0x1DA0]
        mov edi, dword ptr ds : [public_6d64bd8]
/*FIXUP push offset public_6d6b314 @0x6d53040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b314
        push esi
        mov byte ptr ss : [esp+0x1DA0], 1
        call edi
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6d530ea
        push eax
        push 4
        lea ecx, ss:[esp+0x2C]
        push 1
        push ecx
        call dword ptr ds : [public_6d64bd4]
        lea eax, ss:[esp+0x34]
        mov ecx, dword ptr ds : [eax]
        mov edx, offset public_6d6b30c
        mov eax, dword ptr ds : [edx]
        add esp, 0x10
        cmp ecx, eax
        jne public_6d530c6
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6d5309d
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0xC], 0
/*FIXUP public_6d5309d : nop
        push offset public_6d6aea8 @0x6d5309d*/
  FIXUP public_6d5309d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push esi
        call edi
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6d530ea
        push 4
        lea ecx, ss:[esp+0x10]
        call public_6d48960
        lea ecx, ss:[esp+0xC]
        call public_6d48b60
        jmp public_6d530e4
        public_6d530c6 : nop
        lea eax, ss:[esp+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, offset public_6d6b304
        cmp ecx, dword ptr ds : [edx]
        je public_6d531a5
        push 0
        lea ecx, ss:[esp+0x10]
        call public_6d48960
        public_6d530e4 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        public_6d530ea : nop
        setne al
        test al, al
        je public_6d531a5
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6d53102
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d53102 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d648d4]
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6d531a5
        mov ebp, dword ptr ds : [public_6d64538]
        mov edi, dword ptr ds : [public_6d64568]
/*FIXUP public_6d53130 : nop
        push offset public_6d6b2fc @0x6d53130*/
  FIXUP public_6d53130 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2fc
        lea ecx, ss:[esp+0x2C]
        xor esi, esi
        call ebp
        test al, al
        je public_6d53197
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d53197
        nop 
/*FIXUP public_6d53150 : nop
        push offset public_6d6b2f4 @0x6d53150*/
  FIXUP public_6d53150 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f4
        lea ecx, ss:[esp+0x2C]
        call edi
        test al, al
        je public_6d53162
        inc esi
        jmp public_6d53172
/*FIXUP public_6d53162 : nop
        push offset public_6d6b2f0 @0x6d53162*/
  FIXUP public_6d53162 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f0
        lea ecx, ss:[esp+0x2C]
        call edi
        test al, al
        je public_6d53172
        dec esi
        public_6d53172 : nop
        test esi, esi
        jg public_6d53189
/*FIXUP push offset public_6d6b2e8 @0x6d53176*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2e8
        lea ecx, ss:[esp+0x2C]
        call edi
        test al, al
        jne public_6d5326a
        public_6d53189 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d53150
        public_6d53197 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d53130
/*FIXUP public_6d531a5 : nop
        push offset public_6d6b2f8 @0x6d531a5*/
  FIXUP public_6d531a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f8
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ss : [esp+0x1DA8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, edi
        call public_6ce4520
        test al, al
        je public_6d531e4
        mov eax, dword ptr ds : [edi+4]
        push esi
/*FIXUP push offset public_6d6b2f8 @0x6d531ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f8
        push eax
        call public_6ce1960
        add esp, 0xC
        push esi
        mov ecx, edi
        call public_6ce4500
        public_6d531e4 : nop
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x1D98], 4
        call dword ptr ds : [public_6d64980]
        mov byte ptr ss : [esp+0x1D98], 5
        public_6d53201 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64660]
        lea ecx, ss:[esp+0x28]
        push 1
        mov byte ptr ss : [esp+0x1D9C], 0
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x1D98], 0xFFFFFFFF
        je public_6d53244
        push eax
        call dword ptr ds : [public_6d64bd0]
        mov dword ptr ss : [esp+0x10], 0
        add esp, 4
        public_6d53244 : nop
        lea ecx, ss:[esp+0x10]
        push 1
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ss : [esp+0x1D90]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1D90
        ret 8
        public_6d5326a : nop
        lea eax, ss:[esp+0x1590]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64564]
        push eax
        call dword ptr ds : [public_6d648d0]
        lea ecx, ss:[esp+0x1598]
        push ecx
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ss : [esp+0x1DB0]
        add esp, 0xC
        mov esi, eax
        push 1
        push esi
        mov ecx, edi
        call public_6ce4520
        test al, al
        je public_6d532c8
        mov eax, dword ptr ds : [edi+4]
        push esi
        lea edx, ss:[esp+0x1594]
        push edx
        push eax
        call public_6ce1960
        add esp, 0xC
        push esi
        mov ecx, edi
        call public_6ce4500
        public_6d532c8 : nop
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x1D98], 2
        call dword ptr ds : [public_6d64980]
        mov byte ptr ss : [esp+0x1D98], 3
        jmp public_6d53201
        UNREACHABLE_TRAP(0x6d52fe0)
    }
}

#undef public_6d5309d
#undef public_6d530c6
#undef public_6d530e4
#undef public_6d530ea
#undef public_6d53102
#undef public_6d53130
#undef public_6d53150
#undef public_6d53162
#undef public_6d53172
#undef public_6d53189
#undef public_6d53197
#undef public_6d531a5
#undef public_6d531e4
#undef public_6d53201
#undef public_6d53244
#undef public_6d5326a
#undef public_6d532c8
