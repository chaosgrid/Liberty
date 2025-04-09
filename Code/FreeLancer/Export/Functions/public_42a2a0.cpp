#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_42a2a0);
CLANG_FORWARD_PROC_SYMBOL(public_42a420);

#define public_42a325 _public_42a325
#define public_42a33b _public_42a33b

PROC_DECLARE(0x42a2a0, internal_42a2a0, public_42a2a0);
extern "C" NAKED register_t __cdecl internal_42a2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d48]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax], 0
        push edi
        je public_42a325
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_42a325
        cmp eax, 0xFFFFFFFF
        je public_42a325
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0xC]
        push ecx
        push edi
        mov ecx, esi
        call public_4291c0
        test al, al
        je public_42a325
        mov ecx, esi
        call public_42a420
        mov edx, dword ptr ds : [public_5c6d48]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_5c6d48]
        mov edx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_42a325
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        push eax
        push 0x905
/*FIXUP push offset public_5c9ec8 @0x42a30a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ec8
        mov ecx, 0x100002
/*FIXUP push offset public_5ca2d8 @0x42a314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca2d8
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_42a325 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        je public_42a33b
        cmp esi, 0xFFFFFFFF
        je public_42a33b
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_42a33b : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x42a2a0)
    }
}

#undef public_42a325
#undef public_42a33b
