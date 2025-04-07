#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d34d8a _public_6d34d8a
#define public_6d34db6 _public_6d34db6
#define public_6d34dc6 _public_6d34dc6
#define public_6d34de7 _public_6d34de7
#define public_6d34df3 _public_6d34df3
#define public_6d34df8 _public_6d34df8
#define public_6d34e08 _public_6d34e08
#define public_6d34e0a _public_6d34e0a
#define public_6d34e13 _public_6d34e13

PROC_DECLARE(0x6d34d50, internal_6d34d50, public_6d34d50);
extern "C" NAKED register_t __cdecl internal_6d34d50()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, ebp
        xor ebx, ebx
        cmp ecx, eax
        je public_6d34df8
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d34db6
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d34d8a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d34e08
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d34e0a
        public_6d34db6 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d34df3
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d34d8a
        public_6d34dc6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], eax
        je public_6d34de7
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d34dc6
        jmp public_6d34d8a
        public_6d34de7 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d34df3 : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d34d8a
        public_6d34df8 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d34d8a
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d34e08 : nop
        mov eax, edx
        public_6d34e0a : nop
        test eax, eax
        je public_6d34e13
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d34e13 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d34d50)
    }
}

#undef public_6d34d8a
#undef public_6d34db6
#undef public_6d34dc6
#undef public_6d34de7
#undef public_6d34df3
#undef public_6d34df8
#undef public_6d34e08
#undef public_6d34e0a
#undef public_6d34e13
