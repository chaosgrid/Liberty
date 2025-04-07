#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459470);
CLANG_FORWARD_PROC_SYMBOL(public_459830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba203);

#define public_4598d8 _public_4598d8
#define public_4598da _public_4598da
#define public_4598e1 _public_4598e1

PROC_DECLARE(0x459830, internal_459830, public_459830);
extern "C" NAKED register_t __cdecl internal_459830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba203 @0x459838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba203
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66d334]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_4598e1
        push esi
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_4598d8
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        push 0x20
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x1D], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x20
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x1C], bl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        mov dword ptr ds : [esi+0x10], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        call public_459470
        pop edi
        jmp public_4598da
        public_4598d8 : nop
        xor esi, esi
        public_4598da : nop
        mov dword ptr ds : [public_66d334], esi
        pop esi
        public_4598e1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x459830)
    }
}

#undef public_4598d8
#undef public_4598da
#undef public_4598e1
