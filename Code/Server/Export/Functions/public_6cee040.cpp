#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d09640);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d606d8);

#define public_6cee0fe _public_6cee0fe
#define public_6cee100 _public_6cee100
#define public_6cee146 _public_6cee146
#define public_6cee192 _public_6cee192
#define public_6cee19a _public_6cee19a
#define public_6cee1c9 _public_6cee1c9

PROC_DECLARE(0x6cee040, internal_6cee040, public_6cee040);
extern "C" NAKED register_t __cdecl internal_6cee040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d606d8 @0x6cee042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d606d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        mov al, byte ptr ss : [esp+0x74]
        push ebp
        push esi
        xor esi, esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov byte ptr ss : [esp+0xC], al
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x80], esi
        call dword ptr ds : [edx+0x98]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, esi
        je public_6cee1c9
        mov edx, dword ptr ss : [esp+0x14]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x80], edx
        je public_6cee1c9
        mov eax, dword ptr ds : [public_6d6402c]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov cx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x24], cx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x68], esi
        mov dx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x6C], dx
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, esi
        je public_6cee0fe
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cee100
        public_6cee0fe : nop
        xor eax, eax
        public_6cee100 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6d641b8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [ebp+4]
        mov cx, word ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x14]
        mov word ptr ss : [esp+0x24], cx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x80], eax
        je public_6cee1c9
        push ebx
        lea ebx, ds:[ecx+0x3C]
        public_6cee146 : nop
        lea edx, ds:[ebx-0x3C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], edx
        lea esi, ds:[ebx-0x30]
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov eax, dword ptr ds : [ebx-0xC]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ds : [ebx-8]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [ebx-4]
        mov dword ptr ss : [esp+0x68], edx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_6cee192
        mov eax, dword ptr ds : [eax+0xB0]
        mov dword ptr ss : [esp+0x6C], eax
        jmp public_6cee19a
        public_6cee192 : nop
        mov dword ptr ss : [esp+0x6C], 0
        public_6cee19a : nop
        mov cx, word ptr ds : [ebx+4]
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x20]
        mov word ptr ss : [esp+0x70], cx
        mov ecx, dword ptr ds : [eax+0x28]
        push edx
        call public_6d09640
        mov eax, dword ptr ss : [esp+0x84]
        add ebx, 0x44
        lea ecx, ds:[ebx-0x3C]
        cmp ecx, eax
        jne public_6cee146
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        public_6cee1c9 : nop
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x74]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x6cee040)
    }
}

#undef public_6cee0fe
#undef public_6cee100
#undef public_6cee146
#undef public_6cee192
#undef public_6cee19a
#undef public_6cee1c9
