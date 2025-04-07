#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244df0);
CLANG_FORWARD_PROC_SYMBOL(public_6244f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246470);

#define public_6244e78 _public_6244e78
#define public_6244ee7 _public_6244ee7

PROC_DECLARE(0x6244df0, internal_6244df0, public_6244df0);
extern "C" NAKED register_t __cdecl internal_6244df0()
{
    __asm
    {
        mov eax, 0x2010
        call public_6246470
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        jne public_6244ee7
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6244ee7
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6257bbc]
        push edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], offset public_6255804
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jge public_6244e78
/*FIXUP push offset public_6255804 @0x6244e3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255804
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_62576dc @0x6244e47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62576dc
        push eax
        call public_6244f60
        push eax
        push 0x63
        mov ecx, 0x100002
/*FIXUP push offset public_6257698 @0x6244e5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257698
/*FIXUP push offset public_625528c @0x6244e5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push ecx
        mov ecx, dword ptr ds : [public_624b004]
        call dword ptr ds : [ecx]
        add esp, 0x20
        pop esi
        add esp, 0x2010
        ret 
        public_6244e78 : nop
        mov eax, dword ptr ds : [public_6257bbc]
        lea ecx, ss:[esp+8]
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [public_6257bbc]
        lea ecx, ds:[esi+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x68]
        mov eax, dword ptr ds : [public_6257bbc]
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ss : [esp+0xC]
        lea edi, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        push 0
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [public_6257bbc]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_6257bbc]
        mov edx, dword ptr ds : [esi+4]
        push edi
        push 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x70]
        pop edi
        public_6244ee7 : nop
        pop esi
        add esp, 0x2010
        ret 
        UNREACHABLE_TRAP(0x6244df0)
    }
}

#undef public_6244e78
#undef public_6244ee7
