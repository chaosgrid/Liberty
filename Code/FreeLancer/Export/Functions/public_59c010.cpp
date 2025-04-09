#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_583e30);
CLANG_FORWARD_PROC_SYMBOL(public_5868e0);
CLANG_FORWARD_PROC_SYMBOL(public_586900);
CLANG_FORWARD_PROC_SYMBOL(public_586a10);
CLANG_FORWARD_PROC_SYMBOL(public_586a30);
CLANG_FORWARD_PROC_SYMBOL(public_586a50);
CLANG_FORWARD_PROC_SYMBOL(public_586a70);
CLANG_FORWARD_PROC_SYMBOL(public_586af0);

#define public_59c05c _public_59c05c
#define public_59c0f2 _public_59c0f2

PROC_DECLARE(0x59c010, internal_59c010, public_59c010);
extern "C" NAKED register_t __cdecl internal_59c010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_583e30
        mov bl, al
        test bl, bl
        je public_59c0f2
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_59c05c
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_5cef60]
        fld dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x578], 0
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [esi+0x570]
        fstp dword ptr ds : [esi+0x574]
        public_59c05c : nop
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0x41F00000
        call public_5868e0
        lea edx, ss:[esp+8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0x43870000
        mov dword ptr ss : [esp+0x14], 0
        call public_586900
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_586a10
        push 0
        mov ecx, esi
        call public_586a30
        push 1
        mov ecx, esi
        call public_586a50
/*FIXUP push offset public_6156f4 @0x59c0da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6156f4
        mov ecx, esi
        call public_586a70
/*FIXUP push offset public_615704 @0x59c0e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_615704
        mov ecx, esi
        call public_586af0
        public_59c0f2 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x59c010)
    }
}

#undef public_59c05c
#undef public_59c0f2
