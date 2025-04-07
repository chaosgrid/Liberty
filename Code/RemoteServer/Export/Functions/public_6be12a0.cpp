#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be12a0);
CLANG_FORWARD_PROC_SYMBOL(public_6bed590);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a64e);

#define public_6be135f _public_6be135f
#define public_6be1361 _public_6be1361
#define public_6be1369 _public_6be1369

PROC_DECLARE(0x6be12a0, internal_6be12a0, public_6be12a0);
extern "C" NAKED register_t __cdecl internal_6be12a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6c0a64e @0x6be12a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a64e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6c13b10]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_6be1369
        push esi
        push 0x1C
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6be135f
        push edi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi], offset public_6c0baa4
        mov al, byte ptr ss : [esp+0xF]
        mov cl, byte ptr ss : [esp+0xF]
        push 0x18
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], cl
        mov byte ptr ds : [esi+0x14], bl
        call public_6c09d26
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x10], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x10]
        push 0x18
        call public_6c09d26
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        mov dword ptr ds : [esi+0x18], ebx
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ds : [esi], offset public_6c0bc4c
        call public_6bed590
        pop edi
        jmp public_6be1361
        public_6be135f : nop
        xor esi, esi
        public_6be1361 : nop
        mov eax, esi
        mov dword ptr ds : [public_6c13b10], eax
        pop esi
        public_6be1369 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6be12a0)
    }
}

#undef public_6be135f
#undef public_6be1361
#undef public_6be1369
