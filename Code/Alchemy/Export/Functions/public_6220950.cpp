#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c80);
CLANG_FORWARD_PROC_SYMBOL(public_6220cc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248c00);

#define public_62209a8 _public_62209a8
#define public_62209c6 _public_62209c6

PROC_DECLARE(0x6220950, internal_6220950, public_6220950);
extern "C" NAKED register_t __cdecl internal_6220950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248c00 @0x6220952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248c00
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ss:[esp+4]
        lea esi, ds:[eax+0x18]
        push ecx
        mov ecx, esi
        call public_6220cc0
        lea edx, ss:[esp+0x18]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x14], 0
        call public_6220c80
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x10], 1
        je public_62209c6
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        public_62209a8 : nop
        mov eax, dword ptr ds : [eax+8]
        push esi
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x44]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62209a8
        pop edi
        public_62209c6 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6220950)
    }
}

#undef public_62209a8
#undef public_62209c6
