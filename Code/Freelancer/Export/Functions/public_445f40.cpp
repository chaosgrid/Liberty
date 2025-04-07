#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445f40);
CLANG_FORWARD_PROC_SYMBOL(public_4464f0);
CLANG_FORWARD_PROC_SYMBOL(public_555a40);
CLANG_FORWARD_PROC_SYMBOL(public_555a70);
CLANG_FORWARD_PROC_SYMBOL(public_558180);
CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b98e5);

PROC_DECLARE(0x445f40, internal_445f40, public_445f40);
extern "C" NAKED register_t __cdecl internal_445f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b98e5 @0x445f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b98e5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_5593d0
        mov cl, byte ptr ss : [esp+0x20]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0x38], cl
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        lea edi, ds:[esi+0x4C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_555a40
        mov dl, byte ptr ss : [esp+0x20]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x68], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x70], ebx
        lea ecx, ds:[esi+0x74]
        mov byte ptr ss : [esp+0x18], 3
        call public_558180
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 4
        mov dword ptr ds : [esi], offset public_5cbc0c
        mov dword ptr ds : [esi+0x30], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x48], bl
        mov byte ptr ds : [esi+0x49], bl
        call public_555a70
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x64], ebx
        call public_4464f0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x445f40)
    }
}
