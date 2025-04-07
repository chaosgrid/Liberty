#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc4b);

#define public_6f1a314 _public_6f1a314

PROC_DECLARE(0x6f1a280, internal_6f1a280, public_6f1a280);
extern "C" NAKED register_t __cdecl internal_6f1a280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadc4b @0x6f1a282*/
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
        push ebx
        push esi
        push 0x54
        mov esi, ecx
        call public_6fa912a
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+8], ebx
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f1a314
        mov al, byte ptr ds : [esi+4]
        mov byte ptr ds : [ebx+4], al
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ds : [esi+0x18]
        push edi
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x20]
        push ecx
        lea ecx, ds:[ebx+0x20]
        mov dword ptr ds : [ebx+0x1C], eax
        call dword ptr ds : [public_6fb3084]
        mov dword ptr ds : [ebx], offset public_6fb8ccc
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [ebx+0x3C], eax
        add esi, 0x40
        lea edi, ds:[ebx+0x40]
        mov ecx, 5
        rep movsd
        mov dword ptr ds : [ebx], offset public_6fb8c94
        mov eax, ebx
        pop edi
        public_6f1a314 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f1a280)
    }
}

#undef public_6f1a314
