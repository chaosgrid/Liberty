#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000151f);

#define public_10001544 _public_10001544
#define public_1000155c _public_1000155c
#define public_1000158b _public_1000158b
#define public_100015b0 _public_100015b0
#define public_100015ca _public_100015ca
#define public_10001605 _public_10001605
#define public_1000161e _public_1000161e
#define public_10001621 _public_10001621
#define public_1000162e _public_1000162e
#define public_10001662 _public_10001662
#define public_1000168f _public_1000168f
#define public_1000169e _public_1000169e
#define public_100016af _public_100016af

PROC_DECLARE(0x1000151f, internal_1000151f, public_1000151f);
extern "C" NAKED register_t __cdecl internal_1000151f()
{
    __asm
    {
        push ebp
        push edi
        push esi
        push ebx
        sub esp, 0x24
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+0x70]
        mov ebx, dword ptr ds : [edx+0x84]
        cmp eax, ebx
        mov eax, dword ptr ds : [edx+0x2C]
        mov ebx, dword ptr ds : [edx+0x74]
        jl public_10001544
        shr ebx, 2
        public_10001544 : nop
        dec ebx
        shl ebx, 0x10
        or ebx, eax
        mov dword ptr ss : [esp], ebx
        mov eax, dword ptr ds : [edx+0x88]
        mov ebx, dword ptr ds : [edx+0x6C]
        cmp ebx, eax
        jl public_1000155c
        mov ebx, eax
        public_1000155c : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, dword ptr ds : [edx+0x30]
        mov dword ptr ss : [esp+4], esi
        mov ebp, dword ptr ds : [edx+0x64]
        lea edi, ss:[ebp+esi]
        mov dword ptr ss : [esp+0x20], edi
        mov eax, edi
        neg eax
        and eax, 3
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+0x24]
        sub eax, 0x106
        sub ebp, eax
        jg public_1000158b
        xor ebp, ebp
        public_1000158b : nop
        mov eax, dword ptr ds : [edx+0x70]
        mov dword ptr ss : [esp+0x1C], eax
        add esi, eax
        mov dword ptr ss : [esp+8], esi
        movzx ebx, word ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ebx
        movzx ebx, word ptr ds : [eax+edi-1]
        mov dword ptr ss : [esp+0xC], ebx
        mov edi, dword ptr ds : [edx+0x38]
        mov edx, dword ptr ss : [esp]
        jmp public_100015ca
        public_100015b0 : nop
        and ecx, edx
        movzx ecx, word ptr ds : [edi+ecx*2]
        cmp ecx, ebp
        jbe public_1000169e
        sub edx, 0x10000
        js public_1000169e
        public_100015ca : nop
        movzx eax, word ptr ds : [ecx+esi-1]
        cmp eax, ebx
        jne public_100015b0
        mov eax, dword ptr ss : [esp+4]
        movzx eax, word ptr ds : [ecx+eax]
        cmp eax, dword ptr ss : [esp+0x10]
        jne public_100015b0
        mov dword ptr ss : [esp], edx
        mov esi, dword ptr ss : [esp+4]
        mov edi, dword ptr ss : [esp+0x20]
        add esi, ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, 0xFFFFFEF8
        lea edi, ds:[eax+edi+0x108]
        lea esi, ds:[eax+esi+0x108]
        public_10001605 : nop
        mov eax, dword ptr ds : [edx+esi]
        xor eax, dword ptr ds : [edx+edi]
        jne public_10001621
        mov eax, dword ptr ds : [edx+esi+4]
        xor eax, dword ptr ds : [edx+edi+4]
        jne public_1000161e
        add edx, 8
        jne public_10001605
        jmp public_1000168f
        public_1000161e : nop
        add edx, 4
        public_10001621 : nop
        test eax, 0xFFFF
        jne public_1000162e
        add edx, 2
        shr eax, 0x10
        public_1000162e : nop
        sub al, 1
        adc edx, 0
        lea eax, ds:[edx+edi]
        mov edi, dword ptr ss : [esp+0x20]
        sub eax, edi
        cmp eax, 0x102
        jge public_1000168f
        mov edx, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        jg public_10001662
        mov esi, dword ptr ss : [esp+8]
        mov edi, dword ptr ds : [edx+0x38]
        mov ebx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp]
        jmp public_100015b0
        public_10001662 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [edx+0x68], ecx
        cmp eax, ebx
        jge public_1000169e
        mov esi, dword ptr ss : [esp+4]
        add esi, eax
        mov dword ptr ss : [esp+8], esi
        movzx ebx, word ptr ds : [eax+edi-1]
        mov edi, dword ptr ds : [edx+0x38]
        mov dword ptr ss : [esp+0xC], ebx
        mov edx, dword ptr ss : [esp]
        jmp public_100015b0
        public_1000168f : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x1C], 0x102
        mov dword ptr ds : [edx+0x68], ecx
        public_1000169e : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+0x6C]
        cmp ebx, eax
        jg public_100016af
        mov eax, ebx
        public_100016af : nop
        add esp, 0x24
        pop ebx
        pop esi
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x1000151f)
    }
}

#undef public_10001544
#undef public_1000155c
#undef public_1000158b
#undef public_100015b0
#undef public_100015ca
#undef public_10001605
#undef public_1000161e
#undef public_10001621
#undef public_1000162e
#undef public_10001662
#undef public_1000168f
#undef public_1000169e
#undef public_100016af
