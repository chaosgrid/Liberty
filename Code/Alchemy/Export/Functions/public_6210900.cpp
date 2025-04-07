#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_6210a80);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247cc3);

#define public_621095b _public_621095b
#define public_621095d _public_621095d
#define public_6210992 _public_6210992
#define public_6210994 _public_6210994

PROC_DECLARE(0x6210900, internal_6210900, public_6210900);
extern "C" NAKED register_t __cdecl internal_6210900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247cc3 @0x6210902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247cc3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        mov edi, 1
        je public_621095b
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi], offset public_624c410
        mov dword ptr ds : [esi+4], 4
        call public_6210a80
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], edi
        jmp public_621095d
        public_621095b : nop
        xor esi, esi
        public_621095d : nop
        mov dword ptr ss : [esp+8], 0
        push 0x10
        mov dword ptr ss : [esp+0x18], edi
        call public_624612c
        add esp, 4
        test eax, eax
        je public_6210992
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_624bca0
        mov edi, eax
        jmp public_6210994
        public_6210992 : nop
        xor edi, edi
        public_6210994 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        push edi
        push 0
        push esi
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [eax], esi
        mov ecx, dword ptr ds : [edi]
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6210900)
    }
}

#undef public_621095b
#undef public_621095d
#undef public_6210992
#undef public_6210994
