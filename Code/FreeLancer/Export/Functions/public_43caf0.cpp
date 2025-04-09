#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43caf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b94c1);

#define public_43cb60 _public_43cb60
#define public_43cb75 _public_43cb75
#define public_43cb9e _public_43cb9e
#define public_43cbb0 _public_43cbb0

PROC_DECLARE(0x43caf0, internal_43caf0, public_43caf0);
extern "C" NAKED register_t __cdecl internal_43caf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b94c1 @0x43caf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b94c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_43cbb0
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov al, byte ptr ds : [edi+0xC]
        push 0x18
        mov byte ptr ds : [esi+0xC], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov ecx, dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_43cbb0
        push ebp
        mov edi, edi
        public_43cb60 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0x18
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_43cb75
        mov ebp, eax
        public_43cb75 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_43cb9e
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        public_43cb9e : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_43cb60
        pop ebp
        public_43cbb0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x43caf0)
    }
}

#undef public_43cb60
#undef public_43cb75
#undef public_43cb9e
#undef public_43cbb0
