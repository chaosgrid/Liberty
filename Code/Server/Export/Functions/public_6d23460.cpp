#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d234b7 _public_6d234b7
#define public_6d234b9 _public_6d234b9
#define public_6d234c2 _public_6d234c2
#define public_6d234e0 _public_6d234e0
#define public_6d234f6 _public_6d234f6
#define public_6d234f8 _public_6d234f8
#define public_6d23501 _public_6d23501
#define public_6d2352e _public_6d2352e

PROC_DECLARE(0x6d23460, internal_6d23460, public_6d23460);
extern "C" NAKED register_t __cdecl internal_6d23460()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        mov eax, dword ptr ds : [edx+ecx+0x18]
        lea esi, ds:[edx+ecx]
        mov edx, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [ecx+0x100C]
        cmp edx, eax
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+4]
        mov dword ptr ds : [ecx+0x1008], eax
        jne public_6d234e0
        cmp eax, ebp
        jbe public_6d234b7
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d234b9
        public_6d234b7 : nop
        mov eax, edx
        public_6d234b9 : nop
        test eax, eax
        je public_6d234c2
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ecx
        public_6d234c2 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d234e0 : nop
        cmp eax, ebp
        jbe public_6d234f6
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d234f8
        public_6d234f6 : nop
        mov eax, edx
        public_6d234f8 : nop
        test eax, eax
        je public_6d23501
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ecx
        public_6d23501 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [ecx+0xC], eax
        ja public_6d2352e
        mov byte ptr ds : [esi+0x14], 0
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d2352e : nop
        inc eax
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d23460)
    }
}

#undef public_6d234b7
#undef public_6d234b9
#undef public_6d234c2
#undef public_6d234e0
#undef public_6d234f6
#undef public_6d234f8
#undef public_6d23501
#undef public_6d2352e
