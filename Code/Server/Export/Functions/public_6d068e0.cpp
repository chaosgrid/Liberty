#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d068e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61151);

#define public_6d06950 _public_6d06950
#define public_6d06965 _public_6d06965
#define public_6d0697c _public_6d0697c
#define public_6d06991 _public_6d06991
#define public_6d0699f _public_6d0699f

PROC_DECLARE(0x6d068e0, internal_6d068e0, public_6d068e0);
extern "C" NAKED register_t __cdecl internal_6d068e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61151 @0x6d068e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61151
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6d0699f
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ss : [ebp+8]
        push 0xC
        mov byte ptr ds : [esi+8], dl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d06991
        nop 
        lea esp, ss:[esp]
        public_6d06950 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6d06965
        mov ebp, eax
        public_6d06965 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d0697c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6d0697c : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6d06950
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6d06991 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        pop ebp
        mov dword ptr ds : [esi+0x18], ecx
        pop ebx
        public_6d0699f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d068e0)
    }
}

#undef public_6d06950
#undef public_6d06965
#undef public_6d0697c
#undef public_6d06991
#undef public_6d0699f
