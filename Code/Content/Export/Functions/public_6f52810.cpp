#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52810);

#define public_6f52826 _public_6f52826
#define public_6f5282f _public_6f5282f
#define public_6f52836 _public_6f52836
#define public_6f52838 _public_6f52838
#define public_6f5284f _public_6f5284f
#define public_6f52864 _public_6f52864
#define public_6f52883 _public_6f52883
#define public_6f52887 _public_6f52887
#define public_6f5288f _public_6f5288f
#define public_6f5289d _public_6f5289d

PROC_DECLARE(0x6f52810, internal_6f52810, public_6f52810);
extern "C" NAKED register_t __cdecl internal_6f52810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, edx
        je public_6f52836
        public_6f52826 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f5282f
        cmp dword ptr ds : [eax+4], edi
        je public_6f52838
        public_6f5282f : nop
        add eax, 0xC
        cmp eax, edx
        jne public_6f52826
        public_6f52836 : nop
        mov eax, edx
        public_6f52838 : nop
        cmp eax, edx
        je public_6f5288f
        mov ebx, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x14]
        dec ebx
        test esi, esi
        mov dword ptr ds : [eax+8], ebx
        mov edx, ebx
        je public_6f5284f
        mov dword ptr ds : [esi], edx
        public_6f5284f : nop
        mov edx, dword ptr ds : [eax+8]
        test edx, edx
        jne public_6f52887
        mov esi, dword ptr ds : [ecx+8]
        add eax, 0xC
        cmp eax, esi
        je public_6f52883
        lea edx, ds:[eax-0xC]
        push ebp
        public_6f52864 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add edx, 0xC
        cmp eax, esi
        mov dword ptr ds : [ebx+8], edi
        jne public_6f52864
        pop ebp
        public_6f52883 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFF4
        public_6f52887 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f5288f : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6f5289d
        mov dword ptr ds : [eax], 0
        public_6f5289d : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f52810)
    }
}

#undef public_6f52826
#undef public_6f5282f
#undef public_6f52836
#undef public_6f52838
#undef public_6f5284f
#undef public_6f52864
#undef public_6f52883
#undef public_6f52887
#undef public_6f5288f
#undef public_6f5289d
