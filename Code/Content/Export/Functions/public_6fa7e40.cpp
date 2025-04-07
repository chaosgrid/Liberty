#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7e40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8140);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa7ec0 _public_6fa7ec0
#define public_6fa7ec4 _public_6fa7ec4
#define public_6fa7ee0 _public_6fa7ee0
#define public_6fa7ee6 _public_6fa7ee6
#define public_6fa7ef0 _public_6fa7ef0
#define public_6fa7f21 _public_6fa7f21
#define public_6fa7f30 _public_6fa7f30
#define public_6fa7f71 _public_6fa7f71

PROC_DECLARE(0x6fa7e40, internal_6fa7e40, public_6fa7e40);
extern "C" NAKED register_t __cdecl internal_6fa7e40()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ss : [ebp+0x11]
        mov byte ptr ds : [edi+0x11], cl
        mov dl, byte ptr ss : [ebp+0x10]
        mov byte ptr ds : [edi+0x10], dl
        mov al, byte ptr ss : [ebp+0x12]
        mov byte ptr ds : [edi+0x12], al
        mov cl, byte ptr ss : [ebp+0x13]
        mov byte ptr ds : [edi+0x13], cl
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edi+0x1C], eax
        mov cl, byte ptr ss : [ebp+0x20]
        mov byte ptr ds : [edi+0x20], cl
        mov dl, byte ptr ss : [ebp+0x21]
        mov byte ptr ds : [edi+0x21], dl
        mov eax, dword ptr ss : [ebp+0x24]
        lea ecx, ss:[ebp+0x28]
        lea ebx, ds:[edi+0x28]
        cmp ebx, ecx
        mov dword ptr ds : [edi+0x24], eax
        je public_6fa7f71
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6fa7f21
        jmp public_6fa7ec4
        public_6fa7ec0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa7ec4 : nop
        cmp ecx, edx
        je public_6fa7ee0
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6fa7ec0
        public_6fa7ee0 : nop
        cmp eax, esi
        je public_6fa7f21
        jmp public_6fa7ef0
        public_6fa7ee6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_6fa7ef0 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+8], ecx
        jne public_6fa7ee6
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6fa7f21 : nop
        cmp ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6fa7f71
        nop 
        lea esp, ss:[esp]
        public_6fa7f30 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov ecx, ebx
        call public_6fa8bb0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 8
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6f305b0
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc edx
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6fa7f30
        public_6fa7f71 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        lea edx, ss:[ebp+0x38]
        mov dword ptr ds : [edi+0x34], ecx
        push edx
        lea ecx, ds:[edi+0x38]
        call public_6fa8140
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [edi+0x48], eax
        mov cl, byte ptr ss : [ebp+0x4C]
        mov byte ptr ds : [edi+0x4C], cl
        mov edx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [edi+0x50], edx
        mov eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [edi+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [edi+0x58], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6fa7e40)
    }
}

#undef public_6fa7ec0
#undef public_6fa7ec4
#undef public_6fa7ee0
#undef public_6fa7ee6
#undef public_6fa7ef0
#undef public_6fa7f21
#undef public_6fa7f30
#undef public_6fa7f71
