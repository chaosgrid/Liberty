#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629f180);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_JUMP_SYMBOL(public_6393b60);

#define public_629f1f0 _public_629f1f0

PROC_DECLARE(0x629f180, internal_629f180, public_629f180);
extern "C" NAKED register_t __cdecl internal_629f180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393b60 @0x629f182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393b60
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edi
        push ecx
        push edx
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_629ad70
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x14], 0
        call public_6333e30
        mov dword ptr ds : [esi+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639c59c
        mov al, byte ptr ds : [edi+0x70]
        test al, al
        mov dword ptr ss : [esp+0x14], 1
        je public_629f1f0
        push 1
        mov ecx, esi
        call public_629aed0
        public_629f1f0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629f180)
    }
}

#undef public_629f1f0
