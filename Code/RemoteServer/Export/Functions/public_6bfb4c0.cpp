#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfb509 _public_6bfb509
#define public_6bfb521 _public_6bfb521
#define public_6bfb531 _public_6bfb531
#define public_6bfb550 _public_6bfb550
#define public_6bfb560 _public_6bfb560
#define public_6bfb57f _public_6bfb57f
#define public_6bfb58f _public_6bfb58f
#define public_6bfb5b0 _public_6bfb5b0
#define public_6bfb5c0 _public_6bfb5c0
#define public_6bfb5e1 _public_6bfb5e1
#define public_6bfb5f1 _public_6bfb5f1
#define public_6bfb60f _public_6bfb60f
#define public_6bfb61f _public_6bfb61f
#define public_6bfb646 _public_6bfb646
#define public_6bfb677 _public_6bfb677

PROC_DECLARE(0x6bfb4c0, internal_6bfb4c0, public_6bfb4c0);
extern "C" NAKED register_t __cdecl internal_6bfb4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfb509
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfb509 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bfb521
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb521 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb531
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb531 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb550
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb550 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb560
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb560 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb57f
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb57f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb58f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb58f : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb5b0
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb5b0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb5c0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb5c0 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2A]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb5e1
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb5e1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb5f1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb5f1 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x2C]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb60f
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfb60f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfb61f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb61f : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x30]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfb646
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfb646 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6bfb677
        mov dword ptr ds : [ecx+0x10], esi
        public_6bfb677 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bfb4c0)
    }
}

#undef public_6bfb509
#undef public_6bfb521
#undef public_6bfb531
#undef public_6bfb550
#undef public_6bfb560
#undef public_6bfb57f
#undef public_6bfb58f
#undef public_6bfb5b0
#undef public_6bfb5c0
#undef public_6bfb5e1
#undef public_6bfb5f1
#undef public_6bfb60f
#undef public_6bfb61f
#undef public_6bfb646
#undef public_6bfb677
