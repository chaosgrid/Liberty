#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a510);
CLANG_FORWARD_PROC_SYMBOL(public_628a700);
CLANG_FORWARD_PROC_SYMBOL(public_628c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628c860);
CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_JUMP_SYMBOL(public_6393418);

#define public_628a5e6 _public_628a5e6
#define public_628a61d _public_628a61d
#define public_628a625 _public_628a625
#define public_628a64a _public_628a64a
#define public_628a65f _public_628a65f
#define public_628a68a _public_628a68a
#define public_628a6b0 _public_628a6b0
#define public_628a6d9 _public_628a6d9

PROC_DECLARE(0x628a510, internal_628a510, public_628a510);
extern "C" NAKED register_t __cdecl internal_628a510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393418 @0x628a512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x20]
        call public_63486c0
        mov ebp, dword ptr ss : [esp+0x8C]
        lea eax, ss:[ebp+0x1E]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x84], 0
        call public_6348720
        fld dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x64], eax
        mov al, byte ptr ss : [ebp+0x26]
        test al, al
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x68], ecx
        je public_628a5e6
        fld dword ptr ss : [ebp+0x30]
        mov edx, dword ptr ss : [ebp+0x28]
        fld dword ptr ss : [ebp+0x2C]
        mov eax, edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], 0
        public_628a5e6 : nop
        lea esi, ss:[ebp+0x14]
        push esi
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, offset public_63fc098
        call public_62fd030
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        je public_628a61d
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628a61d
        lea eax, ss:[esp+0x8C]
        jmp public_628a625
        public_628a61d : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_628a625 : nop
        mov edi, dword ptr ss : [esp+0x88]
        mov esi, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ds : [eax]
        test esi, esi
        sete cl
        test cl, cl
        jne public_628a64a
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        lea ecx, ds:[eax+0x10]
        call public_628c7b0
        jmp public_628a68a
        public_628a64a : nop
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        jne public_628a65f
        mov edx, dword ptr ds : [public_63fc0bc]
        mov dword ptr ss : [esp+0x38], edx
        public_628a65f : nop
        mov ecx, dword ptr ss : [esp+0x90]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        lea edx, ds:[edi+8]
        push edx
        lea eax, ds:[edi+0x2C]
        push eax
        mov ecx, esi
        call public_628c860
        mov dword ptr ds : [edi+0x54], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x50], ecx
        mov dword ptr ds : [eax+0xA4], edi
        public_628a68a : nop
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628a6d9
        lea ebx, ds:[ebx]
        public_628a6b0 : nop
        push ebp
        push esi
        push edi
        call public_628a700
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628a6b0
        public_628a6d9 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6348710
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x628a510)
    }
}

#undef public_628a5e6
#undef public_628a61d
#undef public_628a625
#undef public_628a64a
#undef public_628a65f
#undef public_628a68a
#undef public_628a6b0
#undef public_628a6d9
