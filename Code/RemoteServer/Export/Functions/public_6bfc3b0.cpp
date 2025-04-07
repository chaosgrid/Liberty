#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfc3f6 _public_6bfc3f6
#define public_6bfc40c _public_6bfc40c
#define public_6bfc434 _public_6bfc434
#define public_6bfc45e _public_6bfc45e
#define public_6bfc48f _public_6bfc48f
#define public_6bfc4b6 _public_6bfc4b6
#define public_6bfc4dd _public_6bfc4dd
#define public_6bfc4fe _public_6bfc4fe
#define public_6bfc575 _public_6bfc575
#define public_6bfc5ae _public_6bfc5ae
#define public_6bfc5e0 _public_6bfc5e0
#define public_6bfc61e _public_6bfc61e
#define public_6bfc62a _public_6bfc62a

PROC_DECLARE(0x6bfc3b0, internal_6bfc3b0, public_6bfc3b0);
extern "C" NAKED register_t __cdecl internal_6bfc3b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfc3f6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6bfc3f6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6bfc40c
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc40c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x20], dl
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc434
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc434 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc45e
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc45e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x28]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6bfc48f
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc48f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x18], dl
        mov edx, dword ptr ds : [esi]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc4b6
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc4b6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        inc edx
        mov byte ptr ss : [esp+0x13], cl
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc4dd
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc4dd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6bfc4fe
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc4fe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        movsx eax, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6c0df48]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ds : [edi+0x38]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [edi+0x3C]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [edi+0x40]
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc575
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc575 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx ecx, cl
        mov dword ptr ss : [esp+0x18], ecx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc5ae
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfc5ae : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfc62a
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x44], edx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfc5e0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6bfc5e0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6bfc61e
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bfc61e : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfc62a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfc3b0)
    }
}

#undef public_6bfc3f6
#undef public_6bfc40c
#undef public_6bfc434
#undef public_6bfc45e
#undef public_6bfc48f
#undef public_6bfc4b6
#undef public_6bfc4dd
#undef public_6bfc4fe
#undef public_6bfc575
#undef public_6bfc5ae
#undef public_6bfc5e0
#undef public_6bfc61e
#undef public_6bfc62a
