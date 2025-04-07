#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288e60);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630e660);
CLANG_FORWARD_PROC_SYMBOL(public_6343020);
CLANG_FORWARD_PROC_SYMBOL(public_6343050);
CLANG_FORWARD_PROC_SYMBOL(public_6343580);
CLANG_FORWARD_PROC_SYMBOL(public_6343670);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63931de);

#define public_6288ed1 _public_6288ed1
#define public_6288fb6 _public_6288fb6
#define public_6288fb8 _public_6288fb8
#define public_6289024 _public_6289024
#define public_62890b7 _public_62890b7

PROC_DECLARE(0x6288e60, internal_6288e60, public_6288e60);
extern "C" NAKED register_t __cdecl internal_6288e60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63931de @0x6288e68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63931de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        mov ebx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [ebx+0x18]
        dec eax
        push esi
        je public_6288ed1
        dec eax
        jne public_62890b7
        mov esi, dword ptr ss : [esp+0xB0]
        push esi
        mov dword ptr ds : [esi+0x74], 2
        call public_630e660
        mov ecx, dword ptr ds : [esi+0x54]
        mov edx, dword ptr ds : [eax+0x54]
        push 0xBF800000
        push ecx
        push edx
        call public_6343700
        add esp, 0x10
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x98]
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 
        public_6288ed1 : nop
        mov esi, dword ptr ss : [esp+0xB0]
        push edi
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ds : [esi+0x74], 1
        call public_6343020
        fld dword ptr ds : [public_63fc0d0]
        mov eax, dword ptr ds : [public_63eb378]
        mov ecx, dword ptr ds : [public_63eb37c]
        mov edx, dword ptr ds : [public_63eb380]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_63fc0d4]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_63eb384]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_63fc0d8]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ds : [public_63eb374]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ds : [public_63eb36c]
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ds : [public_63eb370]
        push 0xD0
        mov dword ptr ss : [esp+0x90], edx
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], ecx
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], edi
        test edi, edi
        mov dword ptr ss : [esp+0xAC], 0
        je public_6288fb6
        mov eax, dword ptr ds : [esi+0x54]
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        mov ecx, edi
        call public_6343050
        mov dword ptr ds : [edi], offset public_639c1c8
        jmp public_6288fb8
        public_6288fb6 : nop
        xor edi, edi
        public_6288fb8 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ds : [esi+0x60], edi
        mov eax, dword ptr ds : [ebx+0x14]
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_63fc098
        mov dword ptr ss : [esp+0xB4], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], eax
        call public_6301640
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [ecx+0xFC]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_63fc0b8]
        test eax, eax
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x64]
        jne public_6289024
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_6289024 : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 8
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], eax
        push edx
        mov dword ptr ss : [esp+0x4C], ecx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        call public_6343580
        push 0
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_6343670
        pop edi
        public_62890b7 : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x6288e60)
    }
}

#undef public_6288ed1
#undef public_6288fb6
#undef public_6288fb8
#undef public_6289024
#undef public_62890b7
