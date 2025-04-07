#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead780);
CLANG_FORWARD_PROC_SYMBOL(public_6eadac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae320);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9e93);

#define public_6eae373 _public_6eae373
#define public_6eae38e _public_6eae38e
#define public_6eae3d0 _public_6eae3d0
#define public_6eae3ee _public_6eae3ee

PROC_DECLARE(0x6eae320, internal_6eae320, public_6eae320);
extern "C" NAKED register_t __cdecl internal_6eae320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9e93 @0x6eae322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9e93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [ebx]
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0x14
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x30], ecx
        je public_6eae38e
        public_6eae373 : nop
        mov eax, dword ptr ss : [esp+0x30]
        lea edx, ds:[edi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6eadac0
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6eae373
        public_6eae38e : nop
        mov dl, byte ptr ds : [ebx+0xC]
        lea edi, ds:[esi+0xC]
        push 0x64
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ds : [edi], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x30], eax
        je public_6eae3ee
        lea ebx, ds:[ebx]
        public_6eae3d0 : nop
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[ebp+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6ead780
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_6eae3d0
        public_6eae3ee : nop
        mov cl, byte ptr ds : [ebx+0x18]
        lea edi, ds:[esi+0x18]
        push 0xC
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [edi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ebx, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ebx
        push ecx
        push eax
        mov ecx, edi
        call public_6ed0230
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6eae320)
    }
}

#undef public_6eae373
#undef public_6eae38e
#undef public_6eae3d0
#undef public_6eae3ee
