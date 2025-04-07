#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_JUMP_SYMBOL(public_6396b11);

PROC_DECLARE(0x631b0e0, internal_631b0e0, public_631b0e0);
extern "C" NAKED register_t __cdecl internal_631b0e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396b11 @0x631b0e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396b11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov byte ptr ds : [edi+8], bl
        mov byte ptr ds : [edi+9], bl
        mov byte ptr ds : [edi+0xA], bl
        mov byte ptr ds : [edi+0xB], bl
        mov byte ptr ds : [edi+0xC], bl
        mov byte ptr ds : [edi+0xD], bl
        mov byte ptr ds : [edi+0xE], bl
        mov byte ptr ds : [edi+0xF], bl
        mov byte ptr ds : [edi+0x10], bl
        mov byte ptr ds : [edi+0x11], bl
        mov byte ptr ds : [edi+0x12], bl
        mov byte ptr ds : [edi+0x13], bl
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        lea esi, ds:[ecx+0x28]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov byte ptr ds : [esi+9], bl
        mov byte ptr ds : [esi+0xA], bl
        mov byte ptr ds : [esi+0xB], bl
        mov byte ptr ds : [esi+0xC], bl
        mov byte ptr ds : [esi+0xD], bl
        mov byte ptr ds : [esi+0xE], bl
        mov byte ptr ds : [esi+0xF], bl
        mov byte ptr ds : [esi+0x10], bl
        mov byte ptr ds : [esi+0x11], bl
        mov byte ptr ds : [esi+0x12], bl
        mov byte ptr ds : [esi+0x13], bl
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        lea ebp, ds:[ecx+0x40]
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ss : [ebp+8], bl
        mov byte ptr ss : [ebp+9], bl
        mov byte ptr ss : [ebp+0xA], bl
        mov byte ptr ss : [ebp+0xB], bl
        mov byte ptr ss : [ebp+0xC], bl
        mov byte ptr ss : [ebp+0xD], bl
        mov byte ptr ss : [ebp+0xE], bl
        mov byte ptr ss : [ebp+0xF], bl
        mov byte ptr ss : [ebp+0x10], bl
        mov byte ptr ss : [ebp+0x11], bl
        mov byte ptr ss : [ebp+0x12], bl
        mov byte ptr ss : [ebp+0x13], bl
        mov byte ptr ss : [ebp+0x14], bl
        mov byte ptr ss : [ebp+0x15], bl
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov dword ptr ds : [ecx+4], ebx
        mov byte ptr ds : [ecx+8], bl
        mov byte ptr ds : [ecx+9], bl
        mov dword ptr ds : [ecx+0xC], ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 2
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, esi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov ecx, ebp
        call public_630e270
        mov ecx, 6
        xor eax, eax
        mov edi, ebp
        rep stosd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x58], ebx
        mov dword ptr ds : [eax+0x5C], ebx
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631b0e0)
    }
}
