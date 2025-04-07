#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639762b);

#define public_6333c48 _public_6333c48
#define public_6333c4a _public_6333c4a
#define public_6333c51 _public_6333c51

PROC_DECLARE(0x6333bb0, internal_6333bb0, public_6333bb0);
extern "C" NAKED register_t __cdecl internal_6333bb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639762b @0x6333bb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639762b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_658a814]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_6333c51
        push esi
        push 0x14
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6333c48
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        push 0x18
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop edi
        jmp public_6333c4a
        public_6333c48 : nop
        xor esi, esi
        public_6333c4a : nop
        mov dword ptr ds : [public_658a814], esi
        pop esi
        public_6333c51 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6333bb0)
    }
}

#undef public_6333c48
#undef public_6333c4a
#undef public_6333c51
