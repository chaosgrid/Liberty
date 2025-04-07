#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f002e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f46b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f483d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facafb);

#define public_6f00328 _public_6f00328
#define public_6f00330 _public_6f00330
#define public_6f00344 _public_6f00344
#define public_6f00354 _public_6f00354
#define public_6f00385 _public_6f00385
#define public_6f00387 _public_6f00387

PROC_DECLARE(0x6f002e0, internal_6f002e0, public_6f002e0);
extern "C" NAKED register_t __cdecl internal_6f002e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6facafb @0x6f002e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facafb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        push edi
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, offset public_6fd0bbc
        call public_6f2e220
        mov eax, dword ptr ds : [public_6fd0bc0]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, eax
        je public_6f00328
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6f00328
        lea ecx, ss:[esp+0x2C]
        jmp public_6f00330
        public_6f00328 : nop
        mov dword ptr ss : [esp+8], eax
        lea ecx, ss:[esp+8]
        public_6f00330 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        je public_6f00354
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6f00344
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+8]
        public_6f00344 : nop
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, offset public_6fd0bbc
        call public_6f20e00
        public_6f00354 : nop
        mov edx, dword ptr ds : [edi]
        push 0x10C
        mov dword ptr ss : [esp+0x14], edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        je public_6f00385
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call public_6f46b90
        jmp public_6f00387
        public_6f00385 : nop
        xor eax, eax
        public_6f00387 : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6fd0bbc
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edx
        call public_6f003e0
        mov ecx, dword ptr ds : [edi+4]
        call dword ptr ds : [public_6fb3028]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        push edx
        call public_6f483d0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f002e0)
    }
}

#undef public_6f00328
#undef public_6f00330
#undef public_6f00344
#undef public_6f00354
#undef public_6f00385
#undef public_6f00387
