#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_566380);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2068);

PROC_DECLARE(0x566380, internal_566380, public_566380);
extern "C" NAKED register_t __cdecl internal_566380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2068 @0x566382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2068
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xF8
        or al, 8
        mov byte ptr ds : [esi+0x6C], al
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        inc dword ptr ds : [public_67dcd4]
        lea ecx, ds:[esi+0x7C]
        mov dword ptr ss : [esp+0x18], ebx
        call public_4144b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0xCF], bl
        mov byte ptr ds : [esi+0xCE], bl
        mov byte ptr ds : [esi+0xCD], bl
        mov byte ptr ds : [esi+0xCC], bl
        mov byte ptr ds : [esi+0xD3], bl
        mov byte ptr ds : [esi+0xD2], bl
        mov byte ptr ds : [esi+0xD1], bl
        mov byte ptr ds : [esi+0xD0], bl
        mov byte ptr ds : [esi+0xD7], bl
        mov byte ptr ds : [esi+0xD6], bl
        mov byte ptr ds : [esi+0xD5], bl
        mov byte ptr ds : [esi+0xD4], bl
        mov byte ptr ds : [esi+0xDB], bl
        mov byte ptr ds : [esi+0xDA], bl
        mov byte ptr ds : [esi+0xD9], bl
        mov byte ptr ds : [esi+0xD8], bl
        mov byte ptr ds : [esi+0xDF], bl
        mov byte ptr ds : [esi+0xDE], bl
        mov byte ptr ds : [esi+0xDD], bl
        mov byte ptr ds : [esi+0xDC], bl
        mov dword ptr ds : [esi+0xEC], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_5e2844
        mov byte ptr ds : [esi+0xE6], 1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x566380)
    }
}
