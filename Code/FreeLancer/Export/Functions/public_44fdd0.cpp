#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fdd0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9de2);

#define public_44fee6 _public_44fee6
#define public_44ff19 _public_44ff19

PROC_DECLARE(0x44fdd0, internal_44fdd0, public_44fdd0);
extern "C" NAKED register_t __cdecl internal_44fdd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9de2 @0x44fdd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9de2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        mov eax, dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x68]
        push ebp
        mov ebp, dword ptr ds : [eax+ecx*4]
        test ebp, ebp
        push esi
        mov esi, dword ptr ds : [eax+edx*4]
        mov dword ptr ss : [esp+0x68], esi
        je public_44ff19
        test esi, esi
        je public_44ff19
        push ebx
        push edi
        mov edi, dword ptr ds : [public_5c61b0]
        lea ecx, ss:[esp+0x40]
        call edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x68], 0
        call edi
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x68], 1
        call dword ptr ds : [eax+0x44]
        mov edi, dword ptr ds : [public_5c61c8]
        push eax
        lea ecx, ss:[esp+0x44]
        call edi
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        call edi
        mov esi, dword ptr ss : [esp+0x74]
        mov ebx, dword ptr ds : [public_5c6d14]
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call ebx
        mov edi, dword ptr ss : [esp+0x80]
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        call ebx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx]
        add esp, 8
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6204]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6204]
        mov ecx, dword ptr ds : [public_5c6d5c]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_44fee6
        mov ecx, dword ptr ss : [ebp+0x64]
        mov edx, dword ptr ss : [esp+0x70]
        push ecx
        mov ecx, dword ptr ds : [edx+0x64]
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push ecx
        push edi
        push 0x5E
/*FIXUP push offset public_5cc8cc @0x44fed1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc8cc
        mov eax, 0x100001
/*FIXUP push offset public_5cc870 @0x44fedb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc870
        push eax
        call dword ptr ds : [edx]
        add esp, 0x20
        public_44fee6 : nop
        mov esi, dword ptr ds : [public_5c61bc]
        lea ecx, ss:[esp+0x40]
        call esi
        lea ecx, ss:[esp+0x20]
        call esi
        mov esi, dword ptr ds : [public_5c61b4]
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x68], 0
        call esi
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call esi
        pop edi
        pop ebx
        public_44ff19 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 0x10
        UNREACHABLE_TRAP(0x44fdd0)
    }
}

#undef public_44fee6
#undef public_44ff19
