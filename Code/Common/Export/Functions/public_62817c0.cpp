#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62817c0);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_630e660);

#define public_62817f4 _public_62817f4
#define public_6281820 _public_6281820
#define public_6281851 _public_6281851
#define public_628185c _public_628185c
#define public_628185e _public_628185e
#define public_6281885 _public_6281885
#define public_6281896 _public_6281896
#define public_62818a0 _public_62818a0
#define public_62818ab _public_62818ab
#define public_62818ad _public_62818ad
#define public_62818d5 _public_62818d5
#define public_62818e0 _public_62818e0
#define public_62818e2 _public_62818e2
#define public_62818f2 _public_62818f2
#define public_6281901 _public_6281901
#define public_628190a _public_628190a
#define public_6281917 _public_6281917
#define public_628192a _public_628192a

PROC_DECLARE(0x62817c0, internal_62817c0, public_62817c0);
extern "C" NAKED register_t __cdecl internal_62817c0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax+0x54]
        test eax, eax
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push edi
        je public_6281917
        mov edi, dword ptr ds : [eax+0x1C]
        test edi, edi
        je public_6281917
        mov ecx, dword ptr ds : [edi+0x14]
        xor ebp, ebp
        inc ecx
        test ecx, ecx
        jle public_6281917
        public_62817f4 : nop
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [edx+ebp*8+4]
        test ecx, ecx
        je public_628190a
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [eax+0xA4]
        jne public_6281820
        mov eax, dword ptr ss : [esp+0x24]
        public_6281820 : nop
        mov edx, dword ptr ds : [eax+0xA4]
        test edx, edx
        mov dword ptr ss : [esp+0x14], edx
        je public_628190a
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        je public_6281896
        push edx
        call public_630e660
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_628185c
        public_6281851 : nop
        cmp dword ptr ds : [ecx], eax
        je public_628185e
        add ecx, 4
        cmp ecx, edx
        jne public_6281851
        public_628185c : nop
        mov ecx, edx
        public_628185e : nop
        cmp ecx, edx
        jne public_628190a
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        mov ecx, esi
        call public_628e0b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_628190a
        mov edx, dword ptr ss : [esp+0x10]
        public_6281885 : nop
        cmp dword ptr ds : [eax], edx
        je public_628190a
        add eax, 4
        cmp eax, ecx
        jne public_6281885
        jmp public_628190a
        public_6281896 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_62818ab
        public_62818a0 : nop
        cmp dword ptr ds : [eax], edx
        je public_62818ad
        add eax, 4
        cmp eax, ecx
        jne public_62818a0
        public_62818ab : nop
        mov eax, ecx
        public_62818ad : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62818f2
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        mov ecx, esi
        call public_628e0b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x38], 1
        je public_62818e0
        mov edx, dword ptr ss : [esp+0x14]
        public_62818d5 : nop
        cmp dword ptr ds : [eax], edx
        je public_62818e2
        add eax, 4
        cmp eax, ecx
        jne public_62818d5
        public_62818e0 : nop
        mov eax, ecx
        public_62818e2 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        jmp public_6281901
        public_62818f2 : nop
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x3C], 0
        push eax
        public_6281901 : nop
        lea ecx, ss:[esp+0x30]
        call public_62bed70
        public_628190a : nop
        mov ecx, dword ptr ds : [edi+0x14]
        inc ebp
        inc ecx
        cmp ebp, ecx
        jl public_62817f4
        public_6281917 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_628192a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 8
        public_628192a : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        sub eax, ecx
        pop ebp
        sar eax, 2
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x62817c0)
    }
}

#undef public_62817f4
#undef public_6281820
#undef public_6281851
#undef public_628185c
#undef public_628185e
#undef public_6281885
#undef public_6281896
#undef public_62818a0
#undef public_62818ab
#undef public_62818ad
#undef public_62818d5
#undef public_62818e0
#undef public_62818e2
#undef public_62818f2
#undef public_6281901
#undef public_628190a
#undef public_6281917
#undef public_628192a
