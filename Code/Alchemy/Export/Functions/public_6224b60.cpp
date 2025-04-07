#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224710);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248deb);

#define public_6224bc3 _public_6224bc3
#define public_6224bc5 _public_6224bc5
#define public_6224be5 _public_6224be5
#define public_6224bf2 _public_6224bf2

PROC_DECLARE(0x6224b60, internal_6224b60, public_6224b60);
extern "C" NAKED register_t __cdecl internal_6224b60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248deb @0x6224b62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248deb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x90
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6224bc3
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_6224710
        mov dword ptr ds : [ebx], offset public_624dff0
        mov dword ptr ds : [esi], offset public_624df90
        mov dword ptr ds : [esi+0x8C], 1
        pop ebx
        jmp public_6224bc5
        public_6224bc3 : nop
        xor esi, esi
        public_6224bc5 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_6224bf2
        test eax, eax
        je public_6224be5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_6224be5 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_6224bf2
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6224bf2 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xC0], esi
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6224b60)
    }
}

#undef public_6224bc3
#undef public_6224bc5
#undef public_6224be5
#undef public_6224bf2
