#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1600);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be1650 _public_6be1650
#define public_6be1672 _public_6be1672
#define public_6be1682 _public_6be1682
#define public_6be16e6 _public_6be16e6
#define public_6be1700 _public_6be1700
#define public_6be170d _public_6be170d
#define public_6be1715 _public_6be1715
#define public_6be171f _public_6be171f
#define public_6be1726 _public_6be1726
#define public_6be1733 _public_6be1733
#define public_6be173d _public_6be173d

PROC_DECLARE(0x6be1600, internal_6be1600, public_6be1600);
extern "C" NAKED register_t __cdecl internal_6be1600()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_6c0bd08 @0x6be1611*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bd08
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_6c0b1e0]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_6be173d
/*FIXUP push offset public_6c0bc78 @0x6be162e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bc78
        push ebx
        call dword ptr ds : [public_6c0b1dc]
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        add esp, 8
        cmp edi, eax
        je public_6be1733
        lea ebx, ds:[ebx]
        public_6be1650 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6bec3b0
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        test eax, eax
        jne public_6be1672
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6be16e6
        public_6be1672 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        jne public_6be1682
        mov eax, dword ptr ds : [public_6c0b160]
        public_6be1682 : nop
        push eax
/*FIXUP push offset public_6c0bc70 @0x6be1683*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bc70
        push ebx
        call dword ptr ds : [public_6c0b1dc]
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_6c0bc5c @0x6be16af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bc5c
        push ebx
        call dword ptr ds : [public_6c0b1dc]
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [public_6c0b1dc]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_6c0bc50 @0x6be16d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bc50
        push ebx
        call esi
        add esp, 0x4C
/*FIXUP push offset public_6c0bbf4 @0x6be16db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push ebx
        call esi
        add esp, 8
        public_6be16e6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6be170d
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6be1726
        nop 
        lea esp, ss:[esp]
        public_6be1700 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6be1700
        jmp public_6be1726
        public_6be170d : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6be171f
        public_6be1715 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6be1715
        public_6be171f : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6be1726
        mov edi, eax
        public_6be1726 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+0xC]
        jne public_6be1650
        public_6be1733 : nop
        push ebx
        call dword ptr ds : [public_6c0b1d8]
        add esp, 4
        public_6be173d : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6be1600)
    }
}

#undef public_6be1650
#undef public_6be1672
#undef public_6be1682
#undef public_6be16e6
#undef public_6be1700
#undef public_6be170d
#undef public_6be1715
#undef public_6be171f
#undef public_6be1726
#undef public_6be1733
#undef public_6be173d
