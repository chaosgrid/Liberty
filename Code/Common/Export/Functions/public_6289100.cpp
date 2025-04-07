#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62814b0);
CLANG_FORWARD_PROC_SYMBOL(public_6289100);
CLANG_FORWARD_PROC_SYMBOL(public_628c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_63481b0);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393209);

#define public_6289158 _public_6289158
#define public_628915a _public_628915a
#define public_6289184 _public_6289184
#define public_6289186 _public_6289186
#define public_6289237 _public_6289237
#define public_6289281 _public_6289281
#define public_62892b0 _public_62892b0
#define public_62892d4 _public_62892d4
#define public_6289300 _public_6289300

PROC_DECLARE(0x6289100, internal_6289100, public_6289100);
extern "C" NAKED register_t __cdecl internal_6289100()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393209 @0x6289108*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393209
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB0
        push esi
        mov esi, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6289300
        push edi
        mov edi, dword ptr ss : [esp+0xC8]
        push 0xC
        mov dword ptr ds : [edi+0x58], esi
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6289158
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax], offset public_639c258
        jmp public_628915a
        public_6289158 : nop
        xor eax, eax
        public_628915a : nop
        push 0x14
        mov dword ptr ds : [edi+0x5C], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC0], 0
        je public_6289184
        push edi
        mov ecx, eax
        call public_62814b0
        jmp public_6289186
        public_6289184 : nop
        xor eax, eax
        public_6289186 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x84], eax
        call public_63486c0
        mov esi, dword ptr ss : [esp+0xD0]
        lea eax, ds:[esi+0x1E]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xC4], 1
        call public_6348720
        fld dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [esi+0xC]
        movzx edx, byte ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, ecx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x68], edx
        call public_6303220
        test al, al
        jne public_6289237
/*FIXUP push offset _public_6261260 @0x6289210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x84]
        push eax
        call public_6273bc0
        lea ecx, ss:[esp+0x78]
        call public_63481b0
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x70], ecx
        public_6289237 : nop
        mov al, byte ptr ds : [esi+0x26]
        test al, al
        je public_6289281
        fld dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi+0x28]
        fld dword ptr ds : [esi+0x2C]
        mov eax, edx
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], edx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], 0
        public_6289281 : nop
        add esi, 0x14
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_63fc098
        call public_6301640
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_63fc09c]
        je public_62892b0
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        lea ecx, ds:[eax+0x10]
        call public_628c7b0
        jmp public_62892d4
/*FIXUP public_62892b0 : nop
        push offset public_639c21c @0x62892b0*/
  FIXUP public_62892b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c21c
        push 0x211
/*FIXUP push offset public_639c19c @0x62892ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c19c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62892c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62892d4 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        call public_6348710
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0xB0]
        mov dword ptr fs : [0], ecx
        add esp, 0xBC
        ret 
        nop 
        public_6289300 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639c1e8 @0x6289306*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c1e8
        push 0x215
/*FIXUP push offset public_639c19c @0x6289310*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c19c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x628931a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC8]
        add esp, 0x14
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xBC
        ret 
        UNREACHABLE_TRAP(0x6289100)
    }
}

#undef public_6289158
#undef public_628915a
#undef public_6289184
#undef public_6289186
#undef public_6289237
#undef public_6289281
#undef public_62892b0
#undef public_62892d4
#undef public_6289300
