#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43a750);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43a780 _public_43a780
#define public_43a7a7 _public_43a7a7
#define public_43a7d2 _public_43a7d2
#define public_43a7f1 _public_43a7f1
#define public_43a7f3 _public_43a7f3
#define public_43a814 _public_43a814
#define public_43a826 _public_43a826
#define public_43a84b _public_43a84b

PROC_DECLARE(0x43a750, internal_43a750, public_43a750);
extern "C" NAKED register_t __cdecl internal_43a750()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x18], eax
        call public_432240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_43a780
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43a7a7
        lea ecx, ds:[ecx]
        public_43a780 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43a790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43a79a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43a7a7 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43a84b
        push ebx
        lea edi, ds:[eax+0x18]
        push 1
        lea eax, ss:[esp+0x18]
        xor esi, esi
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], esi
        call public_43ce90
        test al, al
        je public_43a7f3
        mov ebx, dword ptr ss : [esp+0x18]
        public_43a7d2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], ebx
        je public_43a7f1
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_43ce90
        test al, al
        jne public_43a7d2
        jmp public_43a7f3
        public_43a7f1 : nop
        mov esi, eax
        public_43a7f3 : nop
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        pop ebx
        je public_43a826
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_43a814
        mov ecx, esi
        call dword ptr ds : [public_5c6148]
        push esi
        call public_5b7e1d
        add esp, 4
        public_43a814 : nop
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        call public_43cf80
        pop edi
        pop esi
        pop ecx
        ret 8
        public_43a826 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb048 @0x43a82c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb048
        push 0xF6
/*FIXUP push offset public_5cafd8 @0x43a836*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43a840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_43a84b : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x43a750)
    }
}

#undef public_43a780
#undef public_43a7a7
#undef public_43a7d2
#undef public_43a7f1
#undef public_43a7f3
#undef public_43a814
#undef public_43a826
#undef public_43a84b
