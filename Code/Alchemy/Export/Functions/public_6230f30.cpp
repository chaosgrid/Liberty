#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62306e0);
CLANG_FORWARD_PROC_SYMBOL(public_6230f30);
CLANG_FORWARD_JUMP_SYMBOL(public_6249a10);

#define public_6230f68 _public_6230f68
#define public_6230f8f _public_6230f8f

PROC_DECLARE(0x6230f30, internal_6230f30, public_6230f30);
extern "C" NAKED register_t __cdecl internal_6230f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249a10 @0x6230f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249a10
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        je public_6230f8f
        public_6230f68 : nop
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x10], esp
        mov dword ptr ds : [eax], ecx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_62306e0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], 0
        cmp ecx, edi
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6230f68
        public_6230f8f : nop
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6230f30)
    }
}

#undef public_6230f68
#undef public_6230f8f
