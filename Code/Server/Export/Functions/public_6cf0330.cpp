#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0330);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6080b);

PROC_DECLARE(0x6cf0330, internal_6cf0330, public_6cf0330);
extern "C" NAKED register_t __cdecl internal_6cf0330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6080b @0x6cf0332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6080b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x68], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x6C], ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+0x70], al
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov cl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x80]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x8C]
        mov byte ptr ss : [esp+0x1C], 1
        call dword ptr ds : [public_6d643c8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0xA8], bl
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov byte ptr ds : [esi+0xDC], bl
        pop edi
        mov dword ptr ds : [esi+0xD4], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6d65f78
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cf0330)
    }
}
