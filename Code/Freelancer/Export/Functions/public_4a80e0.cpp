#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4a8e80);

#define public_4a811a _public_4a811a
#define public_4a8135 _public_4a8135
#define public_4a8172 _public_4a8172
#define public_4a8186 _public_4a8186
#define public_4a8199 _public_4a8199
#define public_4a81c6 _public_4a81c6
#define public_4a81d0 _public_4a81d0
#define public_4a81dd _public_4a81dd
#define public_4a81e4 _public_4a81e4

PROC_DECLARE(0x4a80e0, internal_4a80e0, public_4a80e0);
extern "C" NAKED register_t __cdecl internal_4a80e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_4a811a
        cmp eax, 0x3E
        jne public_4a81dd
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x394]
        jne public_4a81dd
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x420], ecx
        mov eax, 1
        pop esi
        ret 0xC
        public_4a811a : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [esi+0x32C]
        jne public_4a8135
        call public_45a460
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_4a8135 : nop
        cmp edx, dword ptr ds : [esi+0x404]
        jne public_4a81c6
        mov eax, dword ptr ds : [esi+0x400]
        and byte ptr ds : [eax+0x6C], 0xFD
        mov eax, dword ptr ds : [esi+0x404]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x408]
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, cl
        push ebp
        mov byte ptr ds : [eax+0x6C], dl
        xor edi, edi
        lea ebp, ds:[esi+0x3CC]
        public_4a8172 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4a8186
        cmp edi, 1
        je public_4a8199
        cmp edi, 2
        je public_4a8199
        public_4a8186 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp]
        or byte ptr ds : [eax+0x6C], cl
        public_4a8199 : nop
        inc edi
        add ebp, 4
        cmp edi, 0xD
        jl public_4a8172
        mov esi, dword ptr ds : [esi+0x330]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0x640
        push 0x1E
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        pop ebp
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_4a81c6 : nop
        xor eax, eax
        lea ecx, ds:[esi+0x334]
        mov edi, edi
        public_4a81d0 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_4a81e4
        inc eax
        add ecx, 4
        cmp eax, 6
        jl public_4a81d0
        public_4a81dd : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_4a81e4 : nop
        mov ecx, dword ptr ds : [esi+0x420]
        add ecx, eax
        push ecx
        mov ecx, esi
        call public_4a8e80
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4a80e0)
    }
}

#undef public_4a811a
#undef public_4a8135
#undef public_4a8172
#undef public_4a8186
#undef public_4a8199
#undef public_4a81c6
#undef public_4a81d0
#undef public_4a81dd
#undef public_4a81e4
