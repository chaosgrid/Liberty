#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d83df0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db228b);

PROC_DECLARE(0x6d83df0, internal_6d83df0, public_6d83df0);
extern "C" NAKED register_t __cdecl internal_6d83df0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db228b @0x6d83df2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db228b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        or eax, 0xFFFFFFFF
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x68], eax
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+0x70], al
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov cl, byte ptr ss : [esp+0xB]
        push 0x10
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x80], cl
        call public_6db1f8a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x88], ebx
        mov dl, byte ptr ss : [esp+0xF]
        push 0x14
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x8C], dl
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0x94], ebx
        mov byte ptr ds : [esi+0x98], bl
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        add esp, 8
        mov byte ptr ds : [esi+0xA8], bl
        mov dword ptr ds : [esi], offset public_6db3750
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d83df0)
    }
}
