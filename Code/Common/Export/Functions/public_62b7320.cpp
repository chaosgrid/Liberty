#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a9010);
CLANG_FORWARD_PROC_SYMBOL(public_62b7320);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63947f4);

PROC_DECLARE(0x62b7320, internal_62b7320, public_62b7320);
extern "C" NAKED register_t __cdecl internal_62b7320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63947f4 @0x62b7322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63947f4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62a9010
        xor ebx, ebx
        lea ecx, ds:[esi+0x1A4]
        mov dword ptr ss : [esp+0x14], ebx
        call public_6333e40
        lea ecx, ds:[esi+0x1B0]
        mov byte ptr ds : [esi+0x1A8], bl
        mov byte ptr ds : [esi+0x1A9], bl
        call public_6333e40
        lea ecx, ds:[esi+0x1B8]
        mov dword ptr ds : [esi+0x1B4], ebx
        call public_6333e40
        mov byte ptr ds : [esi+0x1BC], bl
        mov dword ptr ds : [esi+0x1C0], 0xFFFFFFFF
        mov cl, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x1CC], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x1D0], eax
        mov dword ptr ds : [esi+0x1D4], ebx
        lea ecx, ds:[esi+0x1E8]
        mov byte ptr ss : [esp+0x14], 2
        mov byte ptr ds : [esi+0x1E4], bl
        call public_6333e40
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1AC], ebx
        mov dword ptr ds : [esi+0x1C8], ebx
        mov dword ptr ds : [esi+0x1D8], ebx
        mov dword ptr ds : [esi+0x1DC], ebx
        mov dword ptr ds : [esi+0x1E0], ebx
        mov dword ptr ds : [esi], offset public_639d3c4
        mov dword ptr ds : [esi+0x1C4], 4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62b7320)
    }
}
