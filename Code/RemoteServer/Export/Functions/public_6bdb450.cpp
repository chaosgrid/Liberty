#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bdb499 _public_6bdb499
#define public_6bdb4b1 _public_6bdb4b1
#define public_6bdb4c1 _public_6bdb4c1
#define public_6bdb4de _public_6bdb4de
#define public_6bdb4ee _public_6bdb4ee
#define public_6bdb50b _public_6bdb50b
#define public_6bdb51b _public_6bdb51b
#define public_6bdb53a _public_6bdb53a
#define public_6bdb54a _public_6bdb54a
#define public_6bdb56b _public_6bdb56b
#define public_6bdb57b _public_6bdb57b
#define public_6bdb592 _public_6bdb592
#define public_6bdb5af _public_6bdb5af
#define public_6bdb5d3 _public_6bdb5d3
#define public_6bdb5f9 _public_6bdb5f9
#define public_6bdb615 _public_6bdb615
#define public_6bdb632 _public_6bdb632
#define public_6bdb640 _public_6bdb640
#define public_6bdb673 _public_6bdb673

PROC_DECLARE(0x6bdb450, internal_6bdb450, public_6bdb450);
extern "C" NAKED register_t __cdecl internal_6bdb450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea esi, ds:[ebx+0x10]
        push edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdb499
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdb499 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bdb4b1
        mov dword ptr ds : [esi+0xC], ebp
        public_6bdb4b1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdb4c1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb4c1 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bdb4de
        mov dword ptr ds : [esi+0xC], ebp
        public_6bdb4de : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdb4ee
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb4ee : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [ebx+0x30]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bdb50b
        mov dword ptr ds : [esi+0xC], ebp
        public_6bdb50b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdb51b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb51b : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bdb53a
        mov dword ptr ds : [esi+0xC], ebp
        public_6bdb53a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdb54a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb54a : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [eax], edx
        mov cx, word ptr ds : [ebx+0x2C]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bdb56b
        mov dword ptr ds : [esi+0xC], ebp
        public_6bdb56b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bdb57b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb57b : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        mov ecx, dword ptr ds : [ebx+0x28]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6bdb615
        public_6bdb592 : nop
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0xC]
        mov bp, word ptr ds : [eax+8]
        mov dl, byte ptr ds : [eax+0x10]
        add ecx, 2
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6bdb5af
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bdb5af : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6bdb632
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], bp
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6bdb5d3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bdb5d3 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6bdb632
        mov ebp, dword ptr ds : [edi]
        mov byte ptr ss : [ebp], dl
        inc ebp
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bdb5f9
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bdb5f9 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6bdb632
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x28]
        jne public_6bdb592
        mov ebp, 0x16
        public_6bdb615 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        push edi
        mov ecx, ebx
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdb640
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bdb632 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdb640 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bdb673
        mov dword ptr ds : [ecx+0x10], esi
        public_6bdb673 : nop
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
        UNREACHABLE_TRAP(0x6bdb450)
    }
}

#undef public_6bdb499
#undef public_6bdb4b1
#undef public_6bdb4c1
#undef public_6bdb4de
#undef public_6bdb4ee
#undef public_6bdb50b
#undef public_6bdb51b
#undef public_6bdb53a
#undef public_6bdb54a
#undef public_6bdb56b
#undef public_6bdb57b
#undef public_6bdb592
#undef public_6bdb5af
#undef public_6bdb5d3
#undef public_6bdb5f9
#undef public_6bdb615
#undef public_6bdb632
#undef public_6bdb640
#undef public_6bdb673
