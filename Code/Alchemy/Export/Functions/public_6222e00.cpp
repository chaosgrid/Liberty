#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222e00);

#define public_6222e7a _public_6222e7a
#define public_6222eaf _public_6222eaf

PROC_DECLARE(0x6222e00, internal_6222e00, public_6222e00);
extern "C" NAKED register_t __cdecl internal_6222e00()
{
    __asm
    {
        sub esp, 0x34
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], offset public_6256234
        rep stosd
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi], edx
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ss : [esp+0x48]
        test al, al
        mov dword ptr ss : [esp+0x18], 0x80000000
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x24], 3
        mov dword ptr ss : [esp+0x28], 0x8000080
        mov dword ptr ss : [esp+8], 0x34
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        je public_6222e7a
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0xC0000000
        mov dword ptr ss : [esp+0x24], 2
        public_6222e7a : nop
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[esp+8]
        push eax
        push edx
        call dword ptr ds : [ecx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        jne public_6222eaf
        mov ecx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_6256214 @0x6222e93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256214
        push 0x1E
        mov eax, 0x100001
/*FIXUP push offset public_62561d0 @0x6222e9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62561d0
/*FIXUP push offset public_625506c @0x6222ea4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6222eaf : nop
        mov eax, esi
        pop edi
        pop esi
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6222e00)
    }
}

#undef public_6222e7a
#undef public_6222eaf
