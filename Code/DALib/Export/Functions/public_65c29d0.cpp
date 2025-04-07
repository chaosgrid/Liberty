#include "DALib-PCH.h"


#define public_65c29ee _public_65c29ee
#define public_65c2a65 _public_65c2a65
#define public_65c2a8b _public_65c2a8b
#define public_65c2ac6 _public_65c2ac6
#define public_65c2ae6 _public_65c2ae6
#define public_65c2b06 _public_65c2b06
#define public_65c2b3d _public_65c2b3d
#define public_65c2b91 _public_65c2b91

PROC_DECLARE(0x65c29d0, internal_65c29d0, public_65c29d0);
extern "C" NAKED register_t __cdecl internal_65c29d0()
{
    __asm
    {
        sub esp, 0x854
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        jne public_65c29ee
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c29ee : nop
        xor eax, eax
        mov ecx, 0x12
        lea edi, ss:[esp+0x14]
        rep stosd
        mov edi, dword ptr ds : [public_65c70e0]
        lea eax, ds:[esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_65c75f0 @0x65c2a1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 1
        push 0
/*FIXUP push offset public_65c7600 @0x65c2a25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0x48
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call edi
        test eax, eax
        je public_65c2a65
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2a65 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_65c75f0 @0x65c2a6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 1
        push 0
/*FIXUP push offset public_65c7600 @0x65c2a73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        call edi
        test eax, eax
        je public_65c2a8b
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2a8b : nop
        mov edx, dword ptr ss : [esp+0x860]
        push edx
        lea eax, ss:[esp+0x60]
/*FIXUP push offset public_65c7480 @0x65c2a97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7480
        push eax
        call dword ptr ds : [public_65c70bc]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_65c2ac6
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2ac6 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c2acc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_65c2ae6
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2ae6 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c2aec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [edx+0x34]
        test eax, eax
        je public_65c2b06
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2b06 : nop
        mov eax, dword ptr ss : [esp+0x864]
        test eax, eax
        je public_65c2b3d
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 4
        lea edx, ss:[esp+0x86C]
        push edx
/*FIXUP push offset public_65c7474 @0x65c2b23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7474
        push eax
        call dword ptr ds : [ecx+0x48]
        test eax, eax
        je public_65c2b3d
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2b3d : nop
        push 2
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x878]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x87C]
        push edx
        mov edx, dword ptr ss : [esp+0x87C]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push 0
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_65c2b91
        cmp eax, 0x15800E
        je public_65c2b91
        pop edi
        xor al, al
        pop esi
        add esp, 0x854
        ret 0x14
        public_65c2b91 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        mov al, 1
        pop esi
        add esp, 0x854
        ret 0x14
        UNREACHABLE_TRAP(0x65c29d0)
    }
}

#undef public_65c29ee
#undef public_65c2a65
#undef public_65c2a8b
#undef public_65c2ac6
#undef public_65c2ae6
#undef public_65c2b06
#undef public_65c2b3d
#undef public_65c2b91
