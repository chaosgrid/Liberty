#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5793e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d48);

PROC_DECLARE(0x57b1b0, internal_57b1b0, public_57b1b0);
extern "C" NAKED register_t __cdecl internal_57b1b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3d48 @0x57b1b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        call public_5793e0
        mov al, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        push 0xC
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x488], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x48C], eax
        mov dword ptr ds : [esi+0x490], ebx
        add esp, 4
        mov byte ptr ds : [esi+0x401], bl
        mov byte ptr ds : [esi+0x400], bl
        mov dword ptr ds : [esi], offset public_5e476c
        mov dword ptr ds : [esi+0x7C], offset public_5e4760
        mov byte ptr ds : [esi+0x494], 1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x57b1b0)
    }
}
