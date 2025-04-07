#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627fc80);
CLANG_FORWARD_PROC_SYMBOL(public_62efe40);

#define public_62f0a50 _public_62f0a50
#define public_62f0acc _public_62f0acc
#define public_62f0ace _public_62f0ace

PROC_DECLARE(0x62f09e0, internal_62f09e0, public_62f09e0);
extern "C" NAKED register_t __cdecl internal_62f09e0()
{
    __asm
    {
        sub esp, 0x40C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        push edi
        lea edi, ds:[esi+0x40]
        xor bl, bl
        cmp eax, 0xFFFFFFFF
        jne public_62f0ace
        mov eax, dword ptr ds : [esi+0xC]
        cmp byte ptr ds : [eax], 0
        je public_62f0ace
        lea ecx, ds:[esi+0x44]
        push ecx
        push edi
        push eax
        call public_62efe40
        add esp, 0xC
        test al, al
        jne public_62f0a50
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        push 0x2B0
/*FIXUP push offset public_63a123c @0x62f0a23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1410 @0x62f0a2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1410
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 0x14
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x3C], eax
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x40C
        ret 
        public_62f0a50 : nop
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_62f0acc
        lea ecx, ss:[esp+0x214]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x118]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        call dword ptr ds : [public_6399348]
        lea eax, ss:[esp+0x228]
/*FIXUP push offset public_639e848 @0x62f0a80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e848
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 0x1C
        test eax, eax
        je public_62f0acc
/*FIXUP push offset public_63a140c @0x62f0a93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a140c
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x118]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x324]
        push ecx
        call dword ptr ds : [public_6399208]
        lea edx, ds:[esi+0x48]
        push edx
        lea eax, ss:[esp+0x32C]
        push eax
        call public_627fc80
        add esp, 0x1C
        public_62f0acc : nop
        mov bl, 1
        public_62f0ace : nop
        mov eax, dword ptr ds : [esi+0x3C]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x3C], eax
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x40C
        ret 
        UNREACHABLE_TRAP(0x62f09e0)
    }
}

#undef public_62f0a50
#undef public_62f0acc
#undef public_62f0ace
