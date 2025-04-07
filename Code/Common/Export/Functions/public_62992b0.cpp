#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_62992b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_JUMP_SYMBOL(public_6393868);

#define public_6299302 _public_6299302
#define public_629935a _public_629935a
#define public_6299361 _public_6299361

PROC_DECLARE(0x62992b0, internal_62992b0, public_62992b0);
extern "C" NAKED register_t __cdecl internal_62992b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393868 @0x62992b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393868
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_62930d0
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        lea eax, ds:[esi+0x54]
        mov ecx, 8
        public_6299302 : nop
        mov dword ptr ds : [eax], 0xFFFFFFFF
        add eax, 0x34
        dec ecx
        jne public_6299302
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi], offset public_639cee4
        mov eax, dword ptr ds : [edx+0x98]
        push eax
        call public_62f93f0
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [esi+0x4C], eax
        jne public_629935a
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[eax+0x98]
        mov edi, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x22
/*FIXUP push offset public_639d304 @0x6299348*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d304
/*FIXUP push offset public_639d2b0 @0x629934d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d2b0
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6299361
        public_629935a : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_6299361 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x62992b0)
    }
}

#undef public_6299302
#undef public_629935a
#undef public_6299361
