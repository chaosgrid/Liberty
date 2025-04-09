#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c157b);

#define public_559451 _public_559451
#define public_559465 _public_559465

PROC_DECLARE(0x5593d0, internal_5593d0, public_5593d0);
extern "C" NAKED register_t __cdecl internal_5593d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c157b @0x5593d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c157b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov ecx, dword ptr ss : [esp+0x24]
        mov al, 1
        mov dword ptr ds : [esi], offset public_5e14a4
        mov byte ptr ds : [esi+4], bl
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], al
        mov byte ptr ds : [esi+0x12], al
        mov byte ptr ds : [esi+0x13], bl
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov byte ptr ds : [esi+0x16], bl
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+8], ecx
        mov edi, dword ptr ds : [public_679a14]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        mov dword ptr ss : [esp+0x20], ebx
        call public_5b7e84
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_559451
        mov ebp, eax
        public_559451 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_559465
        mov dword ptr ds : [eax], esi
        public_559465 : nop
        mov eax, dword ptr ds : [public_679a18]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        pop edi
        mov dword ptr ds : [public_679a18], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5593d0)
    }
}

#undef public_559451
#undef public_559465
