#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b64089 _public_6b64089
#define public_6b640a1 _public_6b640a1
#define public_6b640b1 _public_6b640b1
#define public_6b640d0 _public_6b640d0
#define public_6b640e0 _public_6b640e0
#define public_6b640ff _public_6b640ff
#define public_6b6410f _public_6b6410f
#define public_6b64130 _public_6b64130
#define public_6b64140 _public_6b64140
#define public_6b64161 _public_6b64161
#define public_6b64171 _public_6b64171
#define public_6b6418f _public_6b6418f
#define public_6b6419f _public_6b6419f
#define public_6b641c6 _public_6b641c6
#define public_6b641f7 _public_6b641f7

PROC_DECLARE(0x6b64040, internal_6b64040, public_6b64040);
extern "C" NAKED register_t __cdecl internal_6b64040()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b64089
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b64089 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b640a1
        mov dword ptr ds : [esi+0xC], ebp
        public_6b640a1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b640b1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b640b1 : nop
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
        jbe public_6b640d0
        mov dword ptr ds : [esi+0xC], ebp
        public_6b640d0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b640e0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b640e0 : nop
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
        jbe public_6b640ff
        mov dword ptr ds : [esi+0xC], ebp
        public_6b640ff : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6410f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6410f : nop
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
        jbe public_6b64130
        mov dword ptr ds : [esi+0xC], ebp
        public_6b64130 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b64140
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b64140 : nop
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
        jbe public_6b64161
        mov dword ptr ds : [esi+0xC], ebp
        public_6b64161 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b64171
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b64171 : nop
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
        jbe public_6b6418f
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6418f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6419f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6419f : nop
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
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b641c6
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b641c6 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b641f7
        mov dword ptr ds : [ecx+0x10], esi
        public_6b641f7 : nop
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
        UNREACHABLE_TRAP(0x6b64040)
    }
}

#undef public_6b64089
#undef public_6b640a1
#undef public_6b640b1
#undef public_6b640d0
#undef public_6b640e0
#undef public_6b640ff
#undef public_6b6410f
#undef public_6b64130
#undef public_6b64140
#undef public_6b64161
#undef public_6b64171
#undef public_6b6418f
#undef public_6b6419f
#undef public_6b641c6
#undef public_6b641f7
