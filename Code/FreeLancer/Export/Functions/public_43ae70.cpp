#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43ae70);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43aea0 _public_43aea0
#define public_43aec7 _public_43aec7
#define public_43aef2 _public_43aef2
#define public_43af11 _public_43af11
#define public_43af13 _public_43af13
#define public_43af34 _public_43af34
#define public_43af46 _public_43af46
#define public_43af6b _public_43af6b

PROC_DECLARE(0x43ae70, internal_43ae70, public_43ae70);
extern "C" NAKED register_t __cdecl internal_43ae70()
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
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        call public_432240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_43aea0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43aec7
        lea ecx, ds:[ecx]
        public_43aea0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43aeb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43aeba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43aec7 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43af6b
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
        je public_43af13
        mov ebx, dword ptr ss : [esp+0x18]
        public_43aef2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], ebx
        je public_43af11
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_43ce90
        test al, al
        jne public_43aef2
        jmp public_43af13
        public_43af11 : nop
        mov esi, eax
        public_43af13 : nop
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        pop ebx
        je public_43af46
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_43af34
        mov ecx, esi
        call dword ptr ds : [public_5c6118]
        push esi
        call public_5b7e1d
        add esp, 4
        public_43af34 : nop
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        call public_43cf80
        pop edi
        pop esi
        pop ecx
        ret 8
        public_43af46 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb048 @0x43af4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb048
        push 0xF6
/*FIXUP push offset public_5cafd8 @0x43af56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43af60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_43af6b : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x43ae70)
    }
}

#undef public_43aea0
#undef public_43aec7
#undef public_43aef2
#undef public_43af11
#undef public_43af13
#undef public_43af34
#undef public_43af46
#undef public_43af6b
