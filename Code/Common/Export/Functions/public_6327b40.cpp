#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639712b);

PROC_DECLARE(0x6327b40, internal_6327b40, public_6327b40);
extern "C" NAKED register_t __cdecl internal_6327b40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639712b @0x6327b42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639712b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push edi
        push 0x28
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+4], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edi, edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edi
        mov cl, byte ptr ss : [esp+0xF]
        push 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi+0x10], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi], offset public_63a3de8
        mov edx, dword ptr ds : [public_640957c]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi], offset public_63a3e1c
        add esp, 8
        xor ecx, ecx
        lea edx, ds:[esi+0x40]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6327b40)
    }
}
