#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d099e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d606f8);

#define public_6cee276 _public_6cee276
#define public_6cee2ca _public_6cee2ca

PROC_DECLARE(0x6cee1f0, internal_6cee1f0, public_6cee1f0);
extern "C" NAKED register_t __cdecl internal_6cee1f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d606f8 @0x6cee1f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d606f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        mov al, byte ptr ss : [esp+0x68]
        push ebx
        push ebp
        push esi
        mov byte ptr ss : [esp+0xC], al
        xor eax, eax
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [esp+0x78]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x98]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [ecx+0x28]
        call dword ptr ds : [edx+0x20]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6d641b8]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov word ptr ss : [esp+0x28], cx
        mov dword ptr ss : [esp+0x78], eax
        je public_6cee2ca
        public_6cee276 : nop
        mov edx, ebx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], edx
        lea esi, ds:[ebx+0xC]
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x5C], eax
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [esp+0x60], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x68], edx
        call public_6d099e0
        mov eax, dword ptr ss : [esp+0x78]
        add ebx, 0x44
        cmp ebx, eax
        jne public_6cee276
        mov ebx, dword ptr ss : [esp+0x14]
        public_6cee2ca : nop
        push ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x6C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x6cee1f0)
    }
}

#undef public_6cee276
#undef public_6cee2ca
