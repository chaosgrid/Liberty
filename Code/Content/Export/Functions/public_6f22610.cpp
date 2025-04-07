#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3480);
CLANG_FORWARD_PROC_SYMBOL(public_6f21550);
CLANG_FORWARD_PROC_SYMBOL(public_6f22610);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faddc1);

#define public_6f22701 _public_6f22701
#define public_6f22722 _public_6f22722
#define public_6f22747 _public_6f22747
#define public_6f22751 _public_6f22751
#define public_6f22763 _public_6f22763
#define public_6f2276f _public_6f2276f
#define public_6f22774 _public_6f22774
#define public_6f2277c _public_6f2277c
#define public_6f22784 _public_6f22784

PROC_DECLARE(0x6f22610, internal_6f22610, public_6f22610);
extern "C" NAKED register_t __cdecl internal_6f22610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faddc1 @0x6f22612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faddc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov dword ptr ss : [esp+8], ebx
        xor ebp, ebp
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f22784
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ecx
        mov dl, byte ptr ds : [edi+8]
        lea esi, ds:[ebx+8]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [edi+0x14]
        push 0x54
        mov byte ptr ds : [esi+0xC], cl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x51], 0
        mov cl, 1
        mov byte ptr ds : [eax+0x50], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x51], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ds : [esi+8]
        push 0x54
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x50], 0
        mov byte ptr ds : [eax+0x51], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x51]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x28], edx
        jne public_6f22722
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x50]
        push ecx
        push eax
        mov ecx, esi
        call public_6f96d10
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_6ef3480
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_6f22701
        mov dword ptr ss : [esp+0x28], ebx
        public_6f22701 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_6f21550
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6f21550
        mov dword ptr ds : [ebx+8], eax
        mov ebx, dword ptr ss : [esp+0x24]
        public_6f22722 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f22774
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x51], 0
        jne public_6f22751
        public_6f22747 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x51], 0
        je public_6f22747
        public_6f22751 : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x51]
        test dl, dl
        jne public_6f2276f
        public_6f22763 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x51]
        test dl, dl
        je public_6f22763
        public_6f2276f : nop
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f2277c
        public_6f22774 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6f2277c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        mov dword ptr ds : [ebx+0x1C], eax
        pop esi
        public_6f22784 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f22610)
    }
}

#undef public_6f22701
#undef public_6f22722
#undef public_6f22747
#undef public_6f22751
#undef public_6f22763
#undef public_6f2276f
#undef public_6f22774
#undef public_6f2277c
#undef public_6f22784
