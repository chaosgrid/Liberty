#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001710);
CLANG_FORWARD_PROC_SYMBOL(public_10004090);
CLANG_FORWARD_PROC_SYMBOL(public_10005840);
CLANG_FORWARD_PROC_SYMBOL(public_10005890);
CLANG_FORWARD_PROC_SYMBOL(public_100058e0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a3f0);

#define public_10005922 _public_10005922
#define public_1000592e _public_1000592e
#define public_10005960 _public_10005960
#define public_100059aa _public_100059aa
#define public_100059b4 _public_100059b4
#define public_100059c0 _public_100059c0
#define public_100059c6 _public_100059c6
#define public_100059d0 _public_100059d0

PROC_DECLARE(0x100058e0, internal_100058e0, public_100058e0);
extern "C" NAKED register_t __cdecl internal_100058e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        je public_100059d0
        cmp byte ptr ds : [eax], 0x31
        jne public_100059d0
        cmp dword ptr ss : [esp+0x18], 0x38
        jne public_100059d0
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, edi
        je public_100059c6
        cmp dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x18], edi
        jne public_10005922
        mov dword ptr ds : [esi+0x20], offset _public_1000a3d0
        mov dword ptr ds : [esi+0x28], edi
        public_10005922 : nop
        cmp dword ptr ds : [esi+0x24], edi
        jne public_1000592e
        mov dword ptr ds : [esi+0x24], offset _public_1000a3f0
        public_1000592e : nop
        mov eax, dword ptr ds : [esi+0x28]
        push 0x18
        push 1
        push eax
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        cmp eax, edi
        mov dword ptr ds : [esi+0x1C], eax
        je public_100059aa
        mov dword ptr ds : [eax+0x14], edi
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+0xC], edi
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        jge public_10005960
        mov edx, dword ptr ds : [esi+0x1C]
        neg ecx
        mov dword ptr ds : [edx+0xC], 1
        public_10005960 : nop
        cmp ecx, 8
        jl public_100059c0
        cmp ecx, 0xF
        jg public_100059c0
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, 1
        shl edx, cl
        xor ecx, ecx
        push edx
        cmp dword ptr ds : [eax+0xC], edi
        setne cl
        dec ecx
        and ecx, offset _public_10001710
        push ecx
        push esi
        call public_10004090
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx+0x14], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0xC
        cmp ecx, edi
        push esi
        jne public_100059b4
        call public_10005890
        public_100059aa : nop
        pop edi
        mov eax, 0xFFFFFFFC
        pop esi
        ret 0x10
        public_100059b4 : nop
        call public_10005840
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        public_100059c0 : nop
        push esi
        call public_10005890
        public_100059c6 : nop
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 0x10
        public_100059d0 : nop
        pop edi
        mov eax, 0xFFFFFFFA
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x100058e0)
    }
}

#undef public_10005922
#undef public_1000592e
#undef public_10005960
#undef public_100059aa
#undef public_100059b4
#undef public_100059c0
#undef public_100059c6
#undef public_100059d0
