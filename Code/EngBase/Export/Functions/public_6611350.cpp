#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611350);

#define public_661138c _public_661138c
#define public_66113ab _public_66113ab
#define public_66113b6 _public_66113b6

PROC_DECLARE(0x6611350, internal_6611350, public_6611350);
extern "C" NAKED register_t __cdecl internal_6611350()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_66290dc @0x6611359*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66290dc
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_66113b6
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], 8
        test eax, eax
        mov dword ptr ss : [esp+0xC], offset public_662a040
        je public_661138c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_661138c : nop
        call dword ptr ds : [public_6629000]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_66113ab
        mov esi, dword ptr ds : [esi]
        push edi
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0xC]
        public_66113ab : nop
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_662a03c @0x66113ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push edi
        call dword ptr ds : [eax+0x60]
        public_66113b6 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6611350)
    }
}

#undef public_661138c
#undef public_66113ab
#undef public_66113b6
