#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418bee);
CLANG_FORWARD_PROC_SYMBOL(public_419032);
CLANG_FORWARD_PROC_SYMBOL(public_419038);
CLANG_FORWARD_JUMP_SYMBOL(public_41a288);

#define public_40df78 _public_40df78

PROC_DECLARE(0x40de80, internal_40de80, public_40de80);
extern "C" NAKED register_t __cdecl internal_40de80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a288 @0x40de88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a288
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call public_419038
        test ebx, ebx
        je public_40df78
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [public_425838]
        sub esp, 0x3C
        mov edi, esp
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, 0xF
        lea esi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0x3C
        mov dword ptr ss : [esp+0x50], 0x40000000
        rep movsd
        mov ecx, ebx
        call public_419032
        mov ecx, dword ptr ds : [ebx+0x20]
        mov esi, dword ptr ds : [public_41bbe8]
        push 0
        push 1
        push 0xCF
        push ecx
        call esi
        mov edx, dword ptr ds : [ebx+0x20]
        push 0
        push 0
        push 0x443
        push edx
        call esi
        mov eax, 0x2D0
        add ebx, 0x74
        mov dword ptr ds : [ebx], eax
        mov ecx, eax
        mov dword ptr ds : [ebx+4], ecx
        mov edx, eax
        mov esi, eax
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], esi
        mov eax, dword ptr ds : [public_427828]
        test eax, eax
        je public_40df78
        lea ecx, ss:[esp+0xC]
        call public_418aaa
        lea eax, ss:[esp+0xC]
        push 0xF00D
        push eax
        mov dword ptr ss : [esp+0x5C], 0
        call public_40ae40
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        push ecx
        mov ecx, dword ptr ds : [public_427828]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x7C]
        mov ecx, eax
        call public_418bee
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_418aa4
        public_40df78 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x40de80)
    }
}

#undef public_40df78
