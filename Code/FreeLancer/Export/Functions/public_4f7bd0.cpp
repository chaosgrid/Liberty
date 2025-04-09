#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f7c10 _public_4f7c10
#define public_4f7c13 _public_4f7c13
#define public_4f7c18 _public_4f7c18
#define public_4f7c1b _public_4f7c1b
#define public_4f7c35 _public_4f7c35
#define public_4f7c4a _public_4f7c4a
#define public_4f7c80 _public_4f7c80
#define public_4f7c89 _public_4f7c89
#define public_4f7cc8 _public_4f7cc8
#define public_4f7cde _public_4f7cde
#define public_4f7ce3 _public_4f7ce3
#define public_4f7d04 _public_4f7d04

PROC_DECLARE(0x4f7bd0, internal_4f7bd0, public_4f7bd0);
extern "C" NAKED register_t __cdecl internal_4f7bd0()
{
    __asm
    {
        sub esp, 0x6C
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x68]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_4f7c1b
        test byte ptr ss : [ebp+8], 2
        jne public_4f7c1b
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f7c18
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f7c10
        mov dword ptr ds : [edx], eax
        jmp public_4f7c13
        public_4f7c10 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f7c13 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f7c18 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f7c1b : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f7d04
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        je public_4f7c35
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f7c4a
        public_4f7c35 : nop
        mov ecx, ebp
        call public_4f7bd0
        mov al, byte ptr ss : [ebp+8]
        or al, 2
        pop edi
        mov byte ptr ss : [ebp+8], al
        pop ebp
        add esp, 0x6C
        ret 
        public_4f7c4a : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f7c80
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        jmp public_4f7c89
        public_4f7c80 : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f7c89 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push ebx
        push esi
        je public_4f7cde
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f7cde
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f7cde
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f7cc8
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f7cc8 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f7ce3
        public_4f7cde : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f7ce3 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov edi, ebx
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        pop esi
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop ebx
        public_4f7d04 : nop
        mov al, byte ptr ss : [ebp+8]
        or al, 2
        pop edi
        mov byte ptr ss : [ebp+8], al
        pop ebp
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4f7bd0)
    }
}

#undef public_4f7c10
#undef public_4f7c13
#undef public_4f7c18
#undef public_4f7c1b
#undef public_4f7c35
#undef public_4f7c4a
#undef public_4f7c80
#undef public_4f7c89
#undef public_4f7cc8
#undef public_4f7cde
#undef public_4f7ce3
#undef public_4f7d04
