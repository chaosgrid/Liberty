#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422820);
CLANG_FORWARD_PROC_SYMBOL(public_422950);

#define public_4229de _public_4229de

PROC_DECLARE(0x422950, internal_422950, public_422950);
extern "C" NAKED register_t __cdecl internal_422950()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [esi]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [eax+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        call public_422820
        mov ecx, dword ptr ds : [esi]
        add esp, 0x10
        push esi
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [public_5c6de0]
        mov ebx, eax
        mov ecx, 0xC
        mov esi, ebx
        mov edi, offset public_6648dc
        rep movsd
        mov dword ptr ss : [esp+0x40], 1
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_4229de
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6648dc @0x4229ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6648dc
        push eax
        call dword ptr ds : [ecx+0x7C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        public_4229de : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x74]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x422950)
    }
}

#undef public_4229de
