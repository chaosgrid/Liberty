#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40310);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c920);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6ab2a);

#define public_6b4c957 _public_6b4c957
#define public_6b4c96a _public_6b4c96a
#define public_6b4c990 _public_6b4c990
#define public_6b4c9b5 _public_6b4c9b5
#define public_6b4c9d8 _public_6b4c9d8
#define public_6b4c9ee _public_6b4c9ee
#define public_6b4ca1f _public_6b4ca1f

PROC_DECLARE(0x6b4c920, internal_6b4c920, public_6b4c920);
extern "C" NAKED register_t __cdecl internal_6b4c920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6ab2a @0x6b4c922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6ab2a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xAC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6b4c957
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4c957 : nop
        mov eax, dword ptr ss : [ebp+0xA4]
        cmp eax, ebx
        je public_6b4c96a
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4c96a : nop
        mov dword ptr ss : [ebp], offset public_6b6c1bc
        mov edi, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ss:[ebp+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6b4c9b5
        nop 
        public_6b4c990 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6b40310
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6b6b00c]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6b4c990
        public_6b4c9b5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [ebp+0x78]
        mov esi, dword ptr ds : [ebx]
        lea edi, ss:[ebp+0x74]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_6b4c9ee
        public_6b4c9d8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6b6b048]
        cmp esi, ebx
        jne public_6b4c9d8
        public_6b4c9ee : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        xor esi, esi
        add esp, 4
        lea ecx, ss:[ebp+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6b3a450
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, esi
        je public_6b4ca1f
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4ca1f : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6b4c920)
    }
}

#undef public_6b4c957
#undef public_6b4c96a
#undef public_6b4c990
#undef public_6b4c9b5
#undef public_6b4c9d8
#undef public_6b4c9ee
#undef public_6b4ca1f
