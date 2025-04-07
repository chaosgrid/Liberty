#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1350);
CLANG_FORWARD_PROC_SYMBOL(public_63345a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395563);

PROC_DECLARE(0x62f1350, internal_62f1350, public_62f1350);
extern "C" NAKED register_t __cdecl internal_62f1350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395563 @0x62f1352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395563
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
        call public_62efff0
        xor ebx, ebx
        lea ecx, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        call public_63345a0
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x64], cl
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        push 0x14
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x74], dl
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x78], eax
        mov al, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x7C], ebx
        mov byte ptr ds : [esi+0x80], bl
        mov byte ptr ds : [esi+0x81], 1
        mov byte ptr ds : [esi+0x84], al
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        add esp, 4
        mov dword ptr ds : [esi], offset public_63a11d4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f1350)
    }
}
