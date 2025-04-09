#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_418cd0);
CLANG_FORWARD_PROC_SYMBOL(public_418fc0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_527a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8951);

#define public_418e72 _public_418e72
#define public_418e96 _public_418e96
#define public_418ec0 _public_418ec0
#define public_418eca _public_418eca
#define public_418ee0 _public_418ee0
#define public_418ee8 _public_418ee8
#define public_418ef1 _public_418ef1

PROC_DECLARE(0x418cd0, internal_418cd0, public_418cd0);
extern "C" NAKED register_t __cdecl internal_418cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8951 @0x418cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8951
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_418ef1
        mov dword ptr ds : [ebx], offset public_5c8e1c
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+4]
        mov ecx, 0x11
        rep movsd
        lea esi, ss:[ebp+0x48]
        lea edi, ds:[ebx+0x48]
        mov ecx, 0x11
        rep movsd
        lea esi, ss:[ebp+0x8C]
        lea edi, ds:[ebx+0x8C]
        mov ecx, 0x11
        rep movsd
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ds : [ebx+0xD0], eax
        mov ecx, dword ptr ss : [ebp+0xD4]
        mov dword ptr ds : [ebx+0xD4], ecx
        mov edx, dword ptr ss : [ebp+0xD8]
        mov dword ptr ds : [ebx+0xD8], edx
        lea esi, ss:[ebp+0xDC]
        lea edi, ds:[ebx+0xDC]
        mov ecx, 0xF
        rep movsd
        mov eax, dword ptr ss : [ebp+0x118]
        mov dword ptr ds : [ebx+0x118], eax
        mov ecx, dword ptr ss : [ebp+0x11C]
        mov dword ptr ds : [ebx+0x11C], ecx
        lea esi, ss:[ebp+0x120]
        lea edi, ds:[ebx+0x120]
        mov ecx, 0xE
        rep movsd
        mov edx, dword ptr ss : [ebp+0x158]
        mov dword ptr ds : [ebx+0x158], edx
        mov al, byte ptr ss : [ebp+0x15C]
        lea esi, ds:[ebx+0x15C]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+0x15D]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0x168]
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_5b7e84
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x15], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov edx, dword ptr ss : [ebp+0x160]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [edi+0x15]
        add esp, 8
        test cl, cl
        jne public_418e96
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_40f110
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        push ecx
        add eax, 0xC
        push eax
        call public_4e5fc0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp edx, ecx
        jne public_418e72
        mov dword ptr ss : [esp+0x10], eax
        public_418e72 : nop
        push eax
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_418fc0
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_418fc0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], eax
        public_418e96 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp+0x16C]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, eax
        je public_418ee0
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x15], 0
        jne public_418eca
        mov edi, edi
        public_418ec0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x15], 0
        je public_418ec0
        public_418eca : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_527a00
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_418ee8
        public_418ee0 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_418ee8 : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_5c8dec
        pop ebp
        public_418ef1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x418cd0)
    }
}

#undef public_418e72
#undef public_418e96
#undef public_418ec0
#undef public_418eca
#undef public_418ee0
#undef public_418ee8
#undef public_418ef1
