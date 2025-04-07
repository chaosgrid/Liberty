#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9b390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb18ab);

#define public_6f9a306 _public_6f9a306
#define public_6f9a363 _public_6f9a363
#define public_6f9a377 _public_6f9a377
#define public_6f9a3b0 _public_6f9a3b0
#define public_6f9a3e9 _public_6f9a3e9
#define public_6f9a3eb _public_6f9a3eb

PROC_DECLARE(0x6f9a270, internal_6f9a270, public_6f9a270);
extern "C" NAKED register_t __cdecl internal_6f9a270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb18ab @0x6f9a272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb18ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+5]
        xor ebx, ebx
        xor eax, eax
        cmp cl, bl
        je public_6f9a306
        push 0x1C
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6f9a3e9
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [eax+4], cl
        mov dl, byte ptr ds : [esi+5]
        mov byte ptr ds : [eax+5], dl
        mov cl, byte ptr ds : [esi+6]
        mov byte ptr ds : [eax+6], cl
        mov dl, byte ptr ds : [esi+7]
        mov byte ptr ds : [eax+7], dl
        mov cl, byte ptr ds : [esi+8]
        pop esi
        mov byte ptr ds : [eax+0xC], bl
        mov byte ptr ds : [eax+0xD], bl
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov byte ptr ds : [eax+0x12], bl
        mov byte ptr ds : [eax+0x13], bl
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov byte ptr ds : [eax+0x16], bl
        mov byte ptr ds : [eax+0x17], bl
        mov byte ptr ds : [eax+0x18], bl
        mov byte ptr ds : [eax+0x19], bl
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax], offset public_6fbd034
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f9a306 : nop
        cmp byte ptr ds : [esi+6], bl
        je public_6f9a377
        push edi
        push 0x28
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f9a363
        mov dl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], dl
        mov al, byte ptr ds : [esi+5]
        mov byte ptr ds : [edi+5], al
        mov cl, byte ptr ds : [esi+6]
        mov byte ptr ds : [edi+6], cl
        mov dl, byte ptr ds : [esi+7]
        mov byte ptr ds : [edi+7], dl
        mov al, byte ptr ds : [esi+8]
        mov ecx, edi
        mov byte ptr ds : [edi+8], al
        mov dword ptr ds : [edi], offset public_6fbd01c
        call public_6f9b390
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f9a363 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f9a377 : nop
        cmp byte ptr ds : [esi+7], bl
        je public_6f9a3b0
        push 0xC
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6f9a3e9
        pop esi
        mov byte ptr ds : [eax+4], bl
        mov byte ptr ds : [eax+5], bl
        mov byte ptr ds : [eax+6], bl
        mov byte ptr ds : [eax+7], bl
        mov byte ptr ds : [eax+8], bl
        mov dword ptr ds : [eax], offset public_6fbd004
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f9a3b0 : nop
        cmp byte ptr ds : [esi+8], bl
        je public_6f9a3eb
        push 0xC
        call public_6fa912a
        add esp, 4
        cmp eax, ebx
        je public_6f9a3e9
        pop esi
        mov byte ptr ds : [eax+4], bl
        mov byte ptr ds : [eax+5], bl
        mov byte ptr ds : [eax+6], bl
        mov byte ptr ds : [eax+7], bl
        mov byte ptr ds : [eax+8], bl
        mov dword ptr ds : [eax], offset public_6fbcfec
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f9a3e9 : nop
        xor eax, eax
        public_6f9a3eb : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f9a270)
    }
}

#undef public_6f9a306
#undef public_6f9a363
#undef public_6f9a377
#undef public_6f9a3b0
#undef public_6f9a3e9
#undef public_6f9a3eb
