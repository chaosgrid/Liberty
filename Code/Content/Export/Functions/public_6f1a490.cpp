#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc4b);

#define public_6f1a50f _public_6f1a50f

PROC_DECLARE(0x6f1a490, internal_6f1a490, public_6f1a490);
extern "C" NAKED register_t __cdecl internal_6f1a490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadc4b @0x6f1a492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadc4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x3C
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f1a50f
        mov al, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        lea ecx, ds:[edi+0x20]
        push ecx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ds : [esi+0x1C], eax
        call dword ptr ds : [public_6fb3084]
        mov dword ptr ds : [esi], offset public_6fb8ccc
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], edx
        mov dword ptr ds : [esi], offset public_6fb8c40
        mov eax, esi
        public_6f1a50f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f1a490)
    }
}

#undef public_6f1a50f
