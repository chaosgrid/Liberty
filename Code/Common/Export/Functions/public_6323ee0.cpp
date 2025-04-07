#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6323930);
CLANG_FORWARD_PROC_SYMBOL(public_6323ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396df1);

#define public_6323ff0 _public_6323ff0
#define public_6324014 _public_6324014
#define public_6324040 _public_6324040
#define public_6324049 _public_6324049
#define public_6324060 _public_6324060
#define public_632406a _public_632406a
#define public_632407e _public_632407e
#define public_6324086 _public_6324086

PROC_DECLARE(0x6323ee0, internal_6323ee0, public_6323ee0);
extern "C" NAKED register_t __cdecl internal_6323ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396df1 @0x6323ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396df1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        mov dword ptr ss : [esp+0xC], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6324086
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        add ebp, 4
        add eax, 4
        push edi
        mov edi, eax
        mov ecx, 5
        mov esi, ebp
        rep movsd
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        lea esi, ds:[eax+0x20]
        mov al, byte ptr ss : [ebp+0x20]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+0x21]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0x2C]
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov edx, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [edi+0x15]
        add esp, 8
        cmp cl, bl
        jne public_6324014
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_626b3a0
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        push ecx
        add eax, 0xC
        push eax
        call public_62bee40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp edx, ecx
        jne public_6323ff0
        mov dword ptr ss : [esp+0x10], eax
        public_6323ff0 : nop
        push eax
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_6323930
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6323930
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], eax
        public_6324014 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        pop ebp
        je public_632407e
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], bl
        jne public_6324049
        lea ebx, ds:[ebx]
        public_6324040 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], bl
        je public_6324040
        public_6324049 : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_632406a
        lea esp, ss:[esp]
        public_6324060 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [eax+0x15], bl
        je public_6324060
        public_632406a : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_632407e : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6324086 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6323ee0)
    }
}

#undef public_6323ff0
#undef public_6324014
#undef public_6324040
#undef public_6324049
#undef public_6324060
#undef public_632406a
#undef public_632407e
#undef public_6324086
