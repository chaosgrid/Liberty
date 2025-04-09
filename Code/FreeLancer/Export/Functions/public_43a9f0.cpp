#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43aa20 _public_43aa20
#define public_43aa47 _public_43aa47
#define public_43aa70 _public_43aa70
#define public_43aa8f _public_43aa8f
#define public_43aa91 _public_43aa91
#define public_43aab2 _public_43aab2
#define public_43aac4 _public_43aac4
#define public_43aae9 _public_43aae9

PROC_DECLARE(0x43a9f0, internal_43a9f0, public_43a9f0);
extern "C" NAKED register_t __cdecl internal_43a9f0()
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
        je public_43aa20
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43aa47
        lea ecx, ds:[ecx]
        public_43aa20 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43aa30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43aa3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43aa47 : nop
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_43aae9
        push ebx
        push 1
        lea eax, ss:[esp+0x18]
        xor esi, esi
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], esi
        call public_43ce90
        test al, al
        je public_43aa91
        mov ebx, dword ptr ss : [esp+0x18]
        nop 
        public_43aa70 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], ebx
        je public_43aa8f
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_43ce90
        test al, al
        jne public_43aa70
        jmp public_43aa91
        public_43aa8f : nop
        mov esi, eax
        public_43aa91 : nop
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        pop ebx
        je public_43aac4
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_43aab2
        mov ecx, esi
        call dword ptr ds : [public_5c6130]
        push esi
        call public_5b7e1d
        add esp, 4
        public_43aab2 : nop
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        call public_43cf80
        pop edi
        pop esi
        pop ecx
        ret 8
        public_43aac4 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb048 @0x43aaca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb048
        push 0xF6
/*FIXUP push offset public_5cafd8 @0x43aad4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43aade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_43aae9 : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x43a9f0)
    }
}

#undef public_43aa20
#undef public_43aa47
#undef public_43aa70
#undef public_43aa8f
#undef public_43aa91
#undef public_43aab2
#undef public_43aac4
#undef public_43aae9
