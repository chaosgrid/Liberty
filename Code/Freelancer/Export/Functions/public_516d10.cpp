#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_516d10);

#define public_516daf _public_516daf
#define public_516e0f _public_516e0f
#define public_516e8a _public_516e8a

PROC_DECLARE(0x516d10, internal_516d10, public_516d10);
extern "C" NAKED register_t __cdecl internal_516d10()
{
    __asm
    {
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [edx+4]
        add eax, 0x84
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_516e0f
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
/*FIXUP push offset public_5db7e8 @0x516d59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7e8
        push ebp
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_516daf
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x5C]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x58]
        push 0
        mov dword ptr ss : [esp+0x44], edx
        lea edx, ss:[esp+0x20]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        mov dword ptr ss : [esp+0x58], ecx
        push eax
        mov ecx, offset public_674c60
        call public_503070
        mov esi, dword ptr ss : [esp+0x18]
        public_516daf : nop
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_5db7dc @0x516db9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7dc
        push ebp
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_516e0f
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, 9
        lea esi, ss:[esp+0x5C]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x54]
        push 0
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[esp+0x20]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push ecx
        mov ecx, offset public_674c60
        mov dword ptr ss : [esp+0x5C], edx
        call public_503070
        mov esi, dword ptr ss : [esp+0x18]
        public_516e0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x80
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_516e8a
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_5db91c @0x516e38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db91c
        push ebp
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_516e8a
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, 9
        lea esi, ss:[esp+0x5C]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x54]
        push 0
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[esp+0x20]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push ecx
        mov ecx, offset public_674c60
        mov dword ptr ss : [esp+0x5C], edx
        call public_503070
        public_516e8a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x516d10)
    }
}

#undef public_516daf
#undef public_516e0f
#undef public_516e8a
