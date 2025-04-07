#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40900);
CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f42f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f431d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f591de);

PROC_DECLARE(0x6f42d70, internal_6f42d70, public_6f42d70);
extern "C" NAKED register_t __cdecl internal_6f42d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f591de @0x6f42d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f591de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [esp+0x10], esi
        call public_6f403e0
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0x104], eax
        mov dword ptr ds : [esi+0x108], eax
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0x110], eax
        mov dword ptr ds : [esi+0x114], eax
        mov ecx, 6
        mov dword ptr ds : [esi+0xE0], ecx
        mov dword ptr ds : [esi+0xDC], ecx
        lea edi, ds:[esi+0xC8]
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 5
        mov dword ptr ds : [esi], offset public_6f5b15c
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xD4], eax
        mov dword ptr ds : [esi+0xD8], eax
        mov byte ptr ds : [esi+0xE4], al
        mov byte ptr ds : [esi+0xE5], al
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0xF0], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+0xFC], eax
        mov dword ptr ds : [esi+0x100], eax
        call public_6f42f70
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push edi
        mov ecx, esi
        call public_6f431d0
        lea eax, ds:[esi+0x38]
        push eax
        lea edi, ds:[esi+0x84]
        push edi
        mov ecx, esi
        call public_6f40900
        lea ecx, ds:[esi+0x44]
        push ecx
        push edi
        mov ecx, esi
        call public_6f40ab0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f42d70)
    }
}
