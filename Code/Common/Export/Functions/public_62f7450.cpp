#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627fc80);
CLANG_FORWARD_PROC_SYMBOL(public_62efe40);

#define public_62f7488 _public_62f7488
#define public_62f74e4 _public_62f74e4
#define public_62f7560 _public_62f7560
#define public_62f7562 _public_62f7562

PROC_DECLARE(0x62f7450, internal_62f7450, public_62f7450);
extern "C" NAKED register_t __cdecl internal_62f7450()
{
    __asm
    {
        sub esp, 0x40C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        cmp byte ptr ds : [eax], 0
        jne public_62f7488
        mov eax, dword ptr ds : [public_63ecd20]
        mov dword ptr ds : [esi+0x40], eax
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        inc dword ptr ds : [esi+0x3C]
        mov al, 1
        pop esi
        add esp, 0x40C
        ret 
        public_62f7488 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        push ebx
        push edi
        lea edi, ds:[esi+0x40]
        xor bl, bl
        cmp ecx, 0xFFFFFFFF
        jne public_62f7562
        lea edx, ds:[esi+0x44]
        push edx
        push edi
        push eax
        call public_62efe40
        add esp, 0xC
        test al, al
        jne public_62f74e4
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x2B0
/*FIXUP push offset public_63a123c @0x62f74bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1410 @0x62f74c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1410
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 0x14
        inc eax
        mov dword ptr ds : [esi+0x3C], eax
        pop edi
        mov al, bl
        pop ebx
        pop esi
        add esp, 0x40C
        ret 
        public_62f74e4 : nop
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_62f7560
        lea eax, ss:[esp+0x214]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x118]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_6399348]
        lea edx, ss:[esp+0x228]
/*FIXUP push offset public_639e848 @0x62f7514*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e848
        push edx
        call dword ptr ds : [public_639902c]
        add esp, 0x1C
        test eax, eax
        je public_62f7560
/*FIXUP push offset public_63a140c @0x62f7527*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a140c
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x118]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x324]
        push eax
        call dword ptr ds : [public_6399208]
        lea ecx, ds:[esi+0x48]
        push ecx
        lea edx, ss:[esp+0x32C]
        push edx
        call public_627fc80
        add esp, 0x1C
        public_62f7560 : nop
        mov bl, 1
        public_62f7562 : nop
        inc dword ptr ds : [esi+0x3C]
        pop edi
        mov al, bl
        pop ebx
        pop esi
        add esp, 0x40C
        ret 
        UNREACHABLE_TRAP(0x62f7450)
    }
}

#undef public_62f7488
#undef public_62f74e4
#undef public_62f7560
#undef public_62f7562
