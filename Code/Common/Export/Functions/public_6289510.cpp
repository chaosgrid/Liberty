#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628c1f0);
CLANG_FORWARD_PROC_SYMBOL(public_628c900);
CLANG_FORWARD_PROC_SYMBOL(public_628ea80);
CLANG_FORWARD_PROC_SYMBOL(public_628ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_628f110);
CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_634bec0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393352);

#define public_628956f _public_628956f
#define public_6289571 _public_6289571
#define public_6289581 _public_6289581
#define public_62895b8 _public_62895b8
#define public_62895c0 _public_62895c0
#define public_628970e _public_628970e

PROC_DECLARE(0x6289510, internal_6289510, public_6289510);
extern "C" NAKED register_t __cdecl internal_6289510()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393352 @0x6289518*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393352
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_63fc0bc]
        mov dword ptr fs : [0], esp
        sub esp, 0xA4
        push esi
        xor esi, esi
        cmp eax, esi
        jne public_6289581
        push 0x1C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0xB0], esi
        je public_628956f
        fld qword ptr ds : [public_63eb330]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        mov ecx, eax
        fld qword ptr ds : [public_63eb328]
        fstp dword ptr ss : [esp]
        call public_634bec0
        jmp public_6289571
        public_628956f : nop
        xor eax, eax
        public_6289571 : nop
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc0bc], eax
        public_6289581 : nop
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_63fc098
        call public_62fd030
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xB8]
        je public_62895b8
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62895b8
        lea eax, ss:[esp+0x10]
        jmp public_62895c0
        public_62895b8 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_62895c0 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_628970e
        push edx
        lea ecx, ss:[esp+0x68]
        call public_628c1f0
        mov edx, dword ptr ss : [esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xB4], 1
        mov dword ptr ss : [esp+0x20], edx
        call public_628ebb0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_63fc098
        mov byte ptr ss : [esp+0xB8], 2
        call public_628f110
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xB0], 6
        call public_628ea80
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xB8], 5
        call public_628f050
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov byte ptr ss : [esp+0xB0], 4
        call public_634bca0
        mov dword ptr ss : [esp+0x24], offset public_639c2a0
        mov dword ptr ss : [esp+0x20], offset public_639c288
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0xB0], 0xA
        call public_628ea80
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ss : [esp+0x84]
        push eax
        push ecx
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0xB8], 9
        call public_628f050
        mov edx, dword ptr ss : [esp+0x84]
        push edx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x84], esi
        mov dword ptr ss : [esp+0x88], esi
        mov dword ptr ss : [esp+0x8C], esi
        mov byte ptr ss : [esp+0xB0], 8
        call public_634bca0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x68], offset public_639c2a0
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x64], offset public_639c288
        public_628970e : nop
        lea ecx, ds:[eax+0x10]
        call public_628c900
        mov ecx, dword ptr ss : [esp+0xA8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x6289510)
    }
}

#undef public_628956f
#undef public_6289571
#undef public_6289581
#undef public_62895b8
#undef public_62895c0
#undef public_628970e
