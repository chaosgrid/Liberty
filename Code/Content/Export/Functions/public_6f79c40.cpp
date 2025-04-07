#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79c40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0501);

#define public_6f79cb2 _public_6f79cb2
#define public_6f79cc7 _public_6f79cc7
#define public_6f79cfa _public_6f79cfa
#define public_6f79d15 _public_6f79d15

PROC_DECLARE(0x6f79c40, internal_6f79c40, public_6f79c40);
extern "C" NAKED register_t __cdecl internal_6f79c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0501 @0x6f79c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0501
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov al, byte ptr ds : [edi+0x18]
        push 0x1C
        mov byte ptr ds : [esi+0x18], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], 0
        mov ecx, dword ptr ds : [edi+0x1C]
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f79d15
        push ebx
        public_6f79cb2 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x1C
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f79cc7
        mov ebx, eax
        public_6f79cc7 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x20], 0
        je public_6f79cfa
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, ebx
        call public_6eb35b0
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x10], ecx
        public_6f79cfa : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+0x20], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jne public_6f79cb2
        pop ebx
        public_6f79d15 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f79c40)
    }
}

#undef public_6f79cb2
#undef public_6f79cc7
#undef public_6f79cfa
#undef public_6f79d15
