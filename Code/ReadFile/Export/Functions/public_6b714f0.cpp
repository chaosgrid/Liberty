#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73f60);

#define public_6b71551 _public_6b71551
#define public_6b7155d _public_6b7155d
#define public_6b7158f _public_6b7158f
#define public_6b71595 _public_6b71595
#define public_6b71597 _public_6b71597
#define public_6b715b0 _public_6b715b0
#define public_6b715c3 _public_6b715c3

PROC_DECLARE(0x6b714f0, internal_6b714f0, public_6b714f0);
extern "C" NAKED register_t __cdecl internal_6b714f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebp
        push edi
        mov edi, dword ptr ds : [eax+8]
        mov ebp, ecx
        test edi, edi
        je public_6b715c3
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, 0x38
        jbe public_6b715c3
        mov dword ptr ss : [ebp+4], edi
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, 0x2C
        jne public_6b715c3
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ecx
        jae public_6b715c3
        cmp dword ptr ds : [edi+0x18], ecx
        jae public_6b715c3
        lea ecx, ds:[eax+edi]
        push esi
        test ecx, ecx
        lea esi, ss:[ebp+0x10]
        je public_6b71595
        push ebx
        mov ebx, dword ptr ds : [esi+0xC]
        test ebx, ebx
        je public_6b7155d
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b7155d
        public_6b71551 : nop
        cmp dword ptr ds : [eax+0xC], 0
        je public_6b715b0
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b71551
        public_6b7155d : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x20]
        push ecx
        push eax
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], offset public_6b791e4
        mov dword ptr ss : [esp+0x24], 0
        call public_6b73f60
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        public_6b7158f : nop
        cmp eax, 0xFFFFFFFF
        pop ebx
        jne public_6b71597
        public_6b71595 : nop
        xor eax, eax
        public_6b71597 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov al, 1
        mov edx, dword ptr ds : [ecx+0x18]
        add edx, edi
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
        pop ebp
        add esp, 0xC
        ret 4
        public_6b715b0 : nop
        dec ebx
        add eax, 8
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0
        jmp public_6b7158f
        public_6b715c3 : nop
        pop edi
        xor al, al
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6b714f0)
    }
}

#undef public_6b71551
#undef public_6b7155d
#undef public_6b7158f
#undef public_6b71595
#undef public_6b71597
#undef public_6b715b0
#undef public_6b715c3
