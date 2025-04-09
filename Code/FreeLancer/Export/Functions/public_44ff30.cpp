#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ff30);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9de2);

#define public_450020 _public_450020
#define public_450053 _public_450053

PROC_DECLARE(0x44ff30, internal_44ff30, public_44ff30);
extern "C" NAKED register_t __cdecl internal_44ff30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov edx, dword ptr ss : [esp+0xC]
        push 0xFFFFFFFF
/*FIXUP push public_5b9de2 @0x44ff3c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9de2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        sub esp, 0x40
        push esi
        mov esi, dword ptr ds : [eax+ecx*4]
        test esi, esi
        push edi
        mov edi, dword ptr ds : [eax+edx*4]
        je public_450053
        test edi, edi
        je public_450053
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c61b0]
        lea ecx, ss:[esp+0x30]
        call ebp
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x58], 0
        call ebp
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x58], 1
        call dword ptr ds : [eax+0x44]
        mov ebp, dword ptr ds : [public_5c61c8]
        push eax
        lea ecx, ss:[esp+0x34]
        call ebp
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x44]
        push eax
        lea ecx, ss:[esp+0x14]
        call ebp
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x64]
        mov ebp, dword ptr ds : [public_5c6204]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x64], eax
        call ebp
        mov ebx, dword ptr ss : [esp+0x6C]
        push eax
        push ebx
        lea ecx, ss:[esp+0x18]
        call ebp
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x68]
        push ecx
        call dword ptr ds : [eax+0xC0]
        cmp eax, 1
        je public_450020
        mov edx, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ss : [esp+0x64]
        push edx
        mov edx, dword ptr ds : [edi+0x64]
        push ecx
        push edx
        push ebx
        push 0x81
/*FIXUP push offset public_5cc8cc @0x450006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc8cc
        mov eax, 0x100001
/*FIXUP push offset public_5cc900 @0x450010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc900
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x20
        public_450020 : nop
        mov esi, dword ptr ds : [public_5c61bc]
        lea ecx, ss:[esp+0x30]
        call esi
        lea ecx, ss:[esp+0x10]
        call esi
        mov esi, dword ptr ds : [public_5c61b4]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x58], 0
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call esi
        pop ebp
        pop ebx
        public_450053 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 0x10
        UNREACHABLE_TRAP(0x44ff30)
    }
}

#undef public_450020
#undef public_450053
