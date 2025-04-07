#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c19d0);
CLANG_FORWARD_PROC_SYMBOL(public_65c41f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6db4);

#define public_65c215f _public_65c215f
#define public_65c21a4 _public_65c21a4

PROC_DECLARE(0x65c2090, internal_65c2090, public_65c2090);
extern "C" NAKED register_t __cdecl internal_65c2090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6db4 @0x65c2092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6db4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_65c7460
        call public_65c41f0
        xor ebx, ebx
        lea ecx, ds:[esi+0x3C]
        mov dword ptr ss : [esp+0x30], ebx
        call public_65c41f0
        mov al, byte ptr ss : [esp+0xF]
        push 0x28
        mov byte ptr ss : [esp+0x34], 1
        mov byte ptr ds : [esi+0x80], al
        call public_65c6a66
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi], offset public_65c744c
        mov dword ptr ds : [public_65ca1c8], esi
        lea edi, ds:[esi+4]
        push ebx
        mov byte ptr ss : [esp+0x34], 2
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [esi+8], bl
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x8C], 1
        call dword ptr ds : [public_65c70e8]
        push edi
/*FIXUP push offset public_65c75c0 @0x65c2125*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75c0
        push 1
        push ebx
/*FIXUP push offset public_65c75e0 @0x65c212d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75e0
        call dword ptr ds : [public_65c70e0]
        test eax, eax
        je public_65c215f
        push ebx
        push 0xD4
        call dword ptr ds : [public_65ca0b4]
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_65c215f : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_65c21a4
        mov ecx, dword ptr ds : [eax]
        push ebx
/*FIXUP push offset _public_65c19d0 @0x65c2168*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c19d0
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [edi]
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], 0x14
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], 0xBB8
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x2C], 0x1388
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x44]
        public_65c21a4 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x65c2090)
    }
}

#undef public_65c215f
#undef public_65c21a4
