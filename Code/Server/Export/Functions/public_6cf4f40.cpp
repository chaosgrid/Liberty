#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4f40);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf4f50 _public_6cf4f50
#define public_6cf4f59 _public_6cf4f59
#define public_6cf4f5b _public_6cf4f5b
#define public_6cf4f93 _public_6cf4f93
#define public_6cf4f98 _public_6cf4f98
#define public_6cf4fae _public_6cf4fae
#define public_6cf4fb6 _public_6cf4fb6
#define public_6cf4fc0 _public_6cf4fc0
#define public_6cf4fd4 _public_6cf4fd4
#define public_6cf4fdd _public_6cf4fdd
#define public_6cf500a _public_6cf500a
#define public_6cf5015 _public_6cf5015

PROC_DECLARE(0x6cf4f40, internal_6cf4f40, public_6cf4f40);
extern "C" NAKED register_t __cdecl internal_6cf4f40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea esp, ss:[esp]
        public_6cf4f50 : nop
        test esi, esi
        jne public_6cf4f59
        mov esi, dword ptr ds : [edi+4]
        jmp public_6cf4f5b
        public_6cf4f59 : nop
        mov esi, dword ptr ds : [esi]
        public_6cf4f5b : nop
        test esi, esi
        je public_6cf5015
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x16C]
        test al, al
        jne public_6cf4f50
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        cmp dword ptr ds : [edi+4], esi
        jne public_6cf4f98
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [edi+4], eax
        jne public_6cf4f93
        mov dword ptr ds : [edi+8], ecx
        jmp public_6cf4fc0
        public_6cf4f93 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6cf4fc0
        public_6cf4f98 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, esi
        jne public_6cf4fb6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [edi+8], eax
        jne public_6cf4fae
        mov dword ptr ds : [edi+4], eax
        jmp public_6cf4fc0
        public_6cf4fae : nop
        mov dword ptr ds : [eax], 0
        jmp public_6cf4fc0
        public_6cf4fb6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6cf4fc0 : nop
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        mov ebp, dword ptr ds : [esi+4]
        je public_6cf4fd4
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [edi+0x10], esi
        jmp public_6cf4fdd
        public_6cf4fd4 : nop
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6cf4fdd : nop
        mov ecx, ebx
        mov esi, ebp
        call public_6d11850
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_6cf500a
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6cf4f50
        public_6cf500a : nop
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6cf4f50
        public_6cf5015 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf4f40)
    }
}

#undef public_6cf4f50
#undef public_6cf4f59
#undef public_6cf4f5b
#undef public_6cf4f93
#undef public_6cf4f98
#undef public_6cf4fae
#undef public_6cf4fb6
#undef public_6cf4fc0
#undef public_6cf4fd4
#undef public_6cf4fdd
#undef public_6cf500a
#undef public_6cf5015
