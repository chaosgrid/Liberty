#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295440);
CLANG_FORWARD_PROC_SYMBOL(public_629b210);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_630a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_633bae0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393fdb);

#define public_62a9967 _public_62a9967
#define public_62a99a5 _public_62a99a5
#define public_62a99ac _public_62a99ac
#define public_62a99be _public_62a99be
#define public_62a99d0 _public_62a99d0
#define public_62a9a36 _public_62a9a36
#define public_62a9a38 _public_62a9a38
#define public_62a9a5e _public_62a9a5e
#define public_62a9a6d _public_62a9a6d

PROC_DECLARE(0x62a9920, internal_62a9920, public_62a9920);
extern "C" NAKED register_t __cdecl internal_62a9920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393fdb @0x62a9922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393fdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], ebp
        call public_629b990
        lea eax, ss:[esp+0x18]
        add ebp, 0xE4
        push eax
        mov ecx, ebp
        call public_629b440
        mov esi, eax
        test esi, esi
        je public_62a99be
        public_62a9967 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        call public_630a8b0
        mov edi, eax
        test edi, edi
        mov ecx, esi
        je public_62a99a5
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        call public_633bae0
        mov ecx, dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, esi
        call dword ptr ds : [edi+0x44]
        fmul dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x40]
        jmp public_62a99ac
        public_62a99a5 : nop
        push 0
        call public_633bae0
        public_62a99ac : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_629b440
        mov esi, eax
        test esi, esi
        jne public_62a9967
        public_62a99be : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_62a9a6d
        nop 
        public_62a99d0 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        jne public_62a9a5e
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        mov ecx, ebp
        push eax
        call public_629b6d0
        test eax, eax
        jne public_62a9a5e
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_62f93f0
        push 0x2C
        mov edi, eax
        call public_62fd560
        add esp, 8
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x30], 0
        je public_62a9a36
        mov cl, byte ptr ds : [esi+0x20]
        mov byte ptr ss : [esp+0xC], cl
        mov edx, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xA]
        push edx
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, eax
        call public_6295440
        mov edi, eax
        jmp public_62a9a38
        public_62a9a36 : nop
        xor edi, edi
        public_62a9a38 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [edi]
        lea eax, ds:[esi+0x10]
        push eax
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [edx+0x5C]
        push edi
        mov ecx, ebp
        call public_629b210
        public_62a9a5e : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+4]
        jne public_62a99d0
        public_62a9a6d : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x62a9920)
    }
}

#undef public_62a9967
#undef public_62a99a5
#undef public_62a99ac
#undef public_62a99be
#undef public_62a99d0
#undef public_62a9a36
#undef public_62a9a38
#undef public_62a9a5e
#undef public_62a9a6d
