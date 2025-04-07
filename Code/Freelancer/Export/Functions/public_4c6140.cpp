#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6140);
CLANG_FORWARD_PROC_SYMBOL(public_585bd0);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd73c);

#define public_4c61a0 _public_4c61a0
#define public_4c61c7 _public_4c61c7
#define public_4c61e2 _public_4c61e2

PROC_DECLARE(0x4c6140, internal_4c6140, public_4c6140);
extern "C" NAKED register_t __cdecl internal_4c6140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd73c @0x4c6142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd73c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0x28
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi+0x1C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov ebp, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], ebx
        je public_4c61c7
        lea esp, ss:[esp]
        public_4c61a0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x24]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x24], ecx
        jne public_4c61a0
        public_4c61c7 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebx
        mov byte ptr ds : [esi+0x28], bl
        je public_4c61e2
        push ebx
        push ebx
        call public_585d90
        mov ecx, dword ptr ds : [esi]
        push ebx
        push ebx
        push 0xFFFFFFFF
        call public_585bd0
        public_4c61e2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4c6140)
    }
}

#undef public_4c61a0
#undef public_4c61c7
#undef public_4c61e2
