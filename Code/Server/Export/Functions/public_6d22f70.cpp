#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d22fc7 _public_6d22fc7
#define public_6d22fc9 _public_6d22fc9
#define public_6d22fd2 _public_6d22fd2
#define public_6d22ff0 _public_6d22ff0
#define public_6d23006 _public_6d23006
#define public_6d23008 _public_6d23008
#define public_6d23011 _public_6d23011
#define public_6d2303b _public_6d2303b

PROC_DECLARE(0x6d22f70, internal_6d22f70, public_6d22f70);
extern "C" NAKED register_t __cdecl internal_6d22f70()
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
        jne public_6d22ff0
        cmp eax, ebp
        jbe public_6d22fc7
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d22fc9
        public_6d22fc7 : nop
        mov eax, edx
        public_6d22fc9 : nop
        test eax, eax
        je public_6d22fd2
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ecx
        public_6d22fd2 : nop
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
        public_6d22ff0 : nop
        cmp eax, ebp
        jbe public_6d23006
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d23008
        public_6d23006 : nop
        mov eax, edx
        public_6d23008 : nop
        test eax, eax
        je public_6d23011
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ecx
        public_6d23011 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, dword ptr ds : [esi+0x10]
        jne public_6d2303b
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        mov byte ptr ds : [esi+0x14], 0
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d2303b : nop
        mov al, 1
        mov byte ptr ds : [esi+0x14], al
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [esi+0x10]
        pop edi
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d22f70)
    }
}

#undef public_6d22fc7
#undef public_6d22fc9
#undef public_6d22fd2
#undef public_6d22ff0
#undef public_6d23006
#undef public_6d23008
#undef public_6d23011
#undef public_6d2303b
