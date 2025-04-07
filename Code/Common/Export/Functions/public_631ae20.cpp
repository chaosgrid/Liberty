#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_JUMP_SYMBOL(public_6396abb);

PROC_DECLARE(0x631ae20, internal_631ae20, public_631ae20);
extern "C" NAKED register_t __cdecl internal_631ae20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396abb @0x631ae22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396abb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], eax
        mov byte ptr ds : [edi+8], al
        mov byte ptr ds : [edi+9], al
        mov byte ptr ds : [edi+0xA], al
        mov byte ptr ds : [edi+0xB], al
        mov byte ptr ds : [edi+0xC], al
        mov byte ptr ds : [edi+0xD], al
        mov byte ptr ds : [edi+0xE], al
        mov byte ptr ds : [edi+0xF], al
        mov byte ptr ds : [edi+0x10], al
        mov byte ptr ds : [edi+0x11], al
        mov byte ptr ds : [edi+0x12], al
        mov byte ptr ds : [edi+0x13], al
        mov byte ptr ds : [edi+0x14], al
        mov byte ptr ds : [edi+0x15], al
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631ae20)
    }
}
