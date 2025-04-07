#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2870);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa043);

#define public_6eb291f _public_6eb291f

PROC_DECLARE(0x6eb2870, internal_6eb2870, public_6eb2870);
extern "C" NAKED register_t __cdecl internal_6eb2870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa043 @0x6eb2872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa043
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fb385c
        mov eax, dword ptr ss : [esp+0x24]
        mov cl, byte ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], eax
        xor ebx, ebx
        lea edi, ds:[esi+4]
        push 0x24
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+8], cl
        mov byte ptr ds : [esi+9], dl
        mov byte ptr ds : [esi+0x14], bl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0x10], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], ebx
        mov ebp, dword ptr ds : [esi+0x10]
        push 0x24
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x20], bl
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x18], ebx
        push 0xBF800000
        push edi
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ds : [esi], offset public_6fb454c
        call dword ptr ds : [public_6fb36a4]
        mov eax, dword ptr ds : [public_6fcef08]
        add esp, 0x10
        cmp eax, ebx
        je public_6eb291f
        int 3
        public_6eb291f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [public_6fcef08], esi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eb2870)
    }
}

#undef public_6eb291f
