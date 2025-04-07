#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4255c0);

#define public_4255e1 _public_4255e1
#define public_42562b _public_42562b

PROC_DECLARE(0x4255c0, internal_4255c0, public_4255c0);
extern "C" NAKED register_t __cdecl internal_4255c0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        push edi
        je public_4255e1
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi], 0
        public_4255e1 : nop
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ss : [esp+0xC], edi
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_42562b
        push edi
        push 0x24
/*FIXUP push offset public_5c999c @0x425611*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c999c
        mov eax, 0x100001
/*FIXUP push offset public_5c996c @0x42561b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c996c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_42562b : nop
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        test ecx, ecx
        pop edi
        setne al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4255c0)
    }
}

#undef public_4255e1
#undef public_42562b
