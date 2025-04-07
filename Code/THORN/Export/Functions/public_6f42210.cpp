#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40900);
CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42210);
CLANG_FORWARD_PROC_SYMBOL(public_6f423a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42410);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59104);

PROC_DECLARE(0x6f42210, internal_6f42210, public_6f42210);
extern "C" NAKED register_t __cdecl internal_6f42210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59104 @0x6f42212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59104
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
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov ecx, 0x168
        mov dword ptr ds : [esi+0xD8], ecx
        mov dword ptr ds : [esi+0xDC], ecx
        lea edi, ds:[esi+0xC8]
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ds : [esi], offset public_6f5b10c
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xD0], 0x3F800000
        mov dword ptr ds : [esi+0xD4], 0x4E6E6B28
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0xE4], eax
        call public_6f42410
        push edi
        mov ecx, esi
        call public_6f423a0
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
        UNREACHABLE_TRAP(0x6f42210)
    }
}
