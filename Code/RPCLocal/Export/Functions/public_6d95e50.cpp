#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95e50);
CLANG_FORWARD_PROC_SYMBOL(public_6da2820);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db27ce);

#define public_6d95f0f _public_6d95f0f
#define public_6d95f11 _public_6d95f11
#define public_6d95f19 _public_6d95f19

PROC_DECLARE(0x6d95e50, internal_6d95e50, public_6d95e50);
extern "C" NAKED register_t __cdecl internal_6d95e50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6db27ce @0x6d95e58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db27ce
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6dbbe38]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_6d95f19
        push esi
        push 0x1C
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d95f0f
        push edi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi], offset public_6db3c54
        mov al, byte ptr ss : [esp+0xF]
        mov cl, byte ptr ss : [esp+0xF]
        push 0x18
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], cl
        mov byte ptr ds : [esi+0x14], bl
        call public_6db1f8a
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
        call public_6db1f8a
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
        mov dword ptr ds : [esi], offset public_6db3e18
        call public_6da2820
        pop edi
        jmp public_6d95f11
        public_6d95f0f : nop
        xor esi, esi
        public_6d95f11 : nop
        mov eax, esi
        mov dword ptr ds : [public_6dbbe38], eax
        pop esi
        public_6d95f19 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d95e50)
    }
}

#undef public_6d95f0f
#undef public_6d95f11
#undef public_6d95f19
