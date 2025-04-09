#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43b110);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43b140 _public_43b140
#define public_43b167 _public_43b167
#define public_43b192 _public_43b192
#define public_43b1b1 _public_43b1b1
#define public_43b1b3 _public_43b1b3
#define public_43b1d4 _public_43b1d4
#define public_43b1e6 _public_43b1e6
#define public_43b20b _public_43b20b

PROC_DECLARE(0x43b110, internal_43b110, public_43b110);
extern "C" NAKED register_t __cdecl internal_43b110()
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
        je public_43b140
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43b167
        lea ecx, ds:[ecx]
        public_43b140 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43b150*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43b15a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43b167 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43b20b
        push ebx
        lea edi, ds:[eax+0x30]
        push 1
        lea eax, ss:[esp+0x18]
        xor esi, esi
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], esi
        call public_43ce90
        test al, al
        je public_43b1b3
        mov ebx, dword ptr ss : [esp+0x18]
        public_43b192 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], ebx
        je public_43b1b1
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_43ce90
        test al, al
        jne public_43b192
        jmp public_43b1b3
        public_43b1b1 : nop
        mov esi, eax
        public_43b1b3 : nop
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        pop ebx
        je public_43b1e6
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_43b1d4
        mov ecx, esi
        call dword ptr ds : [public_5c6124]
        push esi
        call public_5b7e1d
        add esp, 4
        public_43b1d4 : nop
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        call public_43cf80
        pop edi
        pop esi
        pop ecx
        ret 8
        public_43b1e6 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb048 @0x43b1ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb048
        push 0xF6
/*FIXUP push offset public_5cafd8 @0x43b1f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43b200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_43b20b : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x43b110)
    }
}

#undef public_43b140
#undef public_43b167
#undef public_43b192
#undef public_43b1b1
#undef public_43b1b3
#undef public_43b1d4
#undef public_43b1e6
#undef public_43b20b
