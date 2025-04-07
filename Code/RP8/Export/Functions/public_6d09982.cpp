#include "RP8-PCH.h"


#define public_6d099cb _public_6d099cb
#define public_6d099e5 _public_6d099e5
#define public_6d099ee _public_6d099ee
#define public_6d09a22 _public_6d09a22
#define public_6d09a3e _public_6d09a3e
#define public_6d09a40 _public_6d09a40
#define public_6d09a47 _public_6d09a47
#define public_6d09a61 _public_6d09a61
#define public_6d09a6a _public_6d09a6a
#define public_6d09a9e _public_6d09a9e
#define public_6d09aba _public_6d09aba
#define public_6d09abc _public_6d09abc
#define public_6d09b06 _public_6d09b06
#define public_6d09b22 _public_6d09b22

PROC_DECLARE(0x6d09982, internal_6d09982, public_6d09982);
extern "C" NAKED register_t __cdecl internal_6d09982()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x138
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+0x10], 0
        mov dword ptr ss : [ebp-4], 0
        public_6d099cb : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d099e5
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x22E4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d099ee
        public_6d099e5 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-4], ecx
        public_6d099ee : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d09a40
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+0x20], 0
        je public_6d09a3e
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d09a22
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d09a22 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x20], 0
        public_6d09a3e : nop
        jmp public_6d099cb
        public_6d09a40 : nop
        mov dword ptr ss : [ebp-8], 0
        public_6d09a47 : nop
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d09a61
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x22F0]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d09a6a
        public_6d09a61 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-8], edx
        public_6d09a6a : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d09abc
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+4], 0
        je public_6d09aba
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+8], 0
        je public_6d09a9e
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d09a9e : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], 0
        public_6d09aba : nop
        jmp public_6d09a47
        public_6d09abc : nop
        mov edx, dword ptr ss : [ebp+8]
        add edx, 4
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        push edx
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x14C
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [eax+4], 0
        je public_6d09b22
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [ecx+8], 0
        je public_6d09b06
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d09b06 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+4], 0
        public_6d09b22 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x274], 0
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 0xFE
        mov edx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [edx+0x184], cl
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d09982)
    }
}

#undef public_6d099cb
#undef public_6d099e5
#undef public_6d099ee
#undef public_6d09a22
#undef public_6d09a3e
#undef public_6d09a40
#undef public_6d09a47
#undef public_6d09a61
#undef public_6d09a6a
#undef public_6d09a9e
#undef public_6d09aba
#undef public_6d09abc
#undef public_6d09b06
#undef public_6d09b22
