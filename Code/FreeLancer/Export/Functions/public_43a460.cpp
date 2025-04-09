#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a4a1 _public_43a4a1
#define public_43a4a9 _public_43a4a9
#define public_43a4c0 _public_43a4c0
#define public_43a4e6 _public_43a4e6

PROC_DECLARE(0x43a460, internal_43a460, public_43a460);
extern "C" NAKED register_t __cdecl internal_43a460()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x38]
        xor eax, eax
        test ecx, 0x3FFFFFFF
        je public_43a4e6
        push esi
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], eax
        je public_43a4a1
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a4a1
        lea eax, ss:[esp+0xC]
        jmp public_43a4a9
        public_43a4a1 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43a4a9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        pop esi
        je public_43a4c0
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+8]
        pop edi
        add esp, 0xC
        ret 
        lea esp, ss:[esp]
        public_43a4c0 : nop
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x110
/*FIXUP push offset public_5caf30 @0x43a4cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43a4d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        mov eax, dword ptr ds : [eax+8]
        public_43a4e6 : nop
        pop edi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x43a460)
    }
}

#undef public_43a4a1
#undef public_43a4a9
#undef public_43a4c0
#undef public_43a4e6
