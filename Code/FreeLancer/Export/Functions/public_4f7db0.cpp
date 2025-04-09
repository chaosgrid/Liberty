#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f7dd4 _public_4f7dd4
#define public_4f7e0a _public_4f7e0a
#define public_4f7e0d _public_4f7e0d
#define public_4f7e12 _public_4f7e12
#define public_4f7e15 _public_4f7e15
#define public_4f7e2b _public_4f7e2b
#define public_4f7e61 _public_4f7e61
#define public_4f7e6a _public_4f7e6a
#define public_4f7ea8 _public_4f7ea8
#define public_4f7ebe _public_4f7ebe
#define public_4f7ec3 _public_4f7ec3
#define public_4f7ee3 _public_4f7ee3

PROC_DECLARE(0x4f7db0, internal_4f7db0, public_4f7db0);
extern "C" NAKED register_t __cdecl internal_4f7db0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        push edi
        je public_4f7ee3
        mov eax, dword ptr ss : [ebp+0x44]
        xor edi, edi
        cmp eax, edi
        je public_4f7dd4
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f7e2b
        public_4f7dd4 : nop
        cmp dword ptr ss : [ebp+0x68], edi
        mov bl, 2
        jne public_4f7e15
        test byte ptr ss : [ebp+8], bl
        jne public_4f7e15
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f7e12
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f7e0a
        mov dword ptr ds : [edx], eax
        jmp public_4f7e0d
        public_4f7e0a : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f7e0d : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f7e12 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f7e15 : nop
        mov ecx, ebp
        call public_4f7db0
        mov al, byte ptr ss : [ebp+8]
        or al, bl
        pop edi
        mov byte ptr ss : [ebp+8], al
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        public_4f7e2b : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f7e61
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
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
        jmp public_4f7e6a
        public_4f7e61 : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f7e6a : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push esi
        je public_4f7ebe
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f7ebe
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f7ebe
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f7ea8
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f7ea8 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f7ec3
        public_4f7ebe : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f7ec3 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov edi, ebx
        rep movsd
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop esi
        public_4f7ee3 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4f7db0)
    }
}

#undef public_4f7dd4
#undef public_4f7e0a
#undef public_4f7e0d
#undef public_4f7e12
#undef public_4f7e15
#undef public_4f7e2b
#undef public_4f7e61
#undef public_4f7e6a
#undef public_4f7ea8
#undef public_4f7ebe
#undef public_4f7ec3
#undef public_4f7ee3
