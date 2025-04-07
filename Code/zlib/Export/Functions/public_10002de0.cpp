#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);
CLANG_FORWARD_PROC_SYMBOL(public_10002ca0);
CLANG_FORWARD_PROC_SYMBOL(public_10002de0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a3f0);

#define public_10002e2d _public_10002e2d
#define public_10002e39 _public_10002e39
#define public_10002e4e _public_10002e4e
#define public_10002e5d _public_10002e5d
#define public_10002fc5 _public_10002fc5
#define public_10002fd3 _public_10002fd3
#define public_10002fdf _public_10002fdf
#define public_10002feb _public_10002feb

PROC_DECLARE(0x10002de0, internal_10002de0, public_10002de0);
extern "C" NAKED register_t __cdecl internal_10002de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        xor edx, edx
        push esi
        xor ebp, ebp
        cmp eax, edx
        push edi
        je public_10002feb
        mov ecx, dword ptr ds : [public_1000d004]
        mov al, byte ptr ds : [eax]
        cmp al, byte ptr ds : [ecx]
        jne public_10002feb
        cmp dword ptr ss : [esp+0x30], 0x38
        jne public_10002feb
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, edx
        je public_10002fdf
        cmp dword ptr ds : [edi+0x20], edx
        mov dword ptr ds : [edi+0x18], edx
        jne public_10002e2d
        mov dword ptr ds : [edi+0x20], offset _public_1000a3d0
        mov dword ptr ds : [edi+0x28], edx
        public_10002e2d : nop
        cmp dword ptr ds : [edi+0x24], edx
        jne public_10002e39
        mov dword ptr ds : [edi+0x24], offset _public_1000a3f0
        public_10002e39 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, 0xFFFFFFFF
        jne public_10002e4e
        mov dword ptr ss : [esp+0x18], 6
        mov ecx, dword ptr ss : [esp+0x18]
        public_10002e4e : nop
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, edx
        jge public_10002e5d
        mov ebp, 1
        neg ebx
        public_10002e5d : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 1
        jl public_10002fdf
        cmp eax, 9
        jg public_10002fdf
        cmp dword ptr ss : [esp+0x1C], 8
        jne public_10002fdf
        cmp ebx, 9
        jl public_10002fdf
        cmp ebx, 0xF
        jg public_10002fdf
        cmp ecx, edx
        jl public_10002fdf
        cmp ecx, 9
        jg public_10002fdf
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edx
        jl public_10002fdf
        cmp eax, 2
        jg public_10002fdf
        mov edx, dword ptr ds : [edi+0x28]
        push 0x16B8
        push 1
        push edx
        call dword ptr ds : [edi+0x20]
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_10002fd3
        mov dword ptr ds : [edi+0x1C], esi
        mov dword ptr ds : [esi+0x18], ebp
        mov ecx, ebx
        mov ebp, 1
        shl ebp, cl
        mov dword ptr ds : [esi+0x28], ebx
        mov ebx, dword ptr ss : [esp+0x24]
        lea ecx, ds:[ebx+7]
        lea eax, ss:[ebp-1]
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, 1
        shl eax, cl
        mov dword ptr ds : [esi+0x48], ecx
        add ecx, 2
        push 2
        mov dword ptr ds : [esi+0x44], eax
        dec eax
        mov dword ptr ds : [esi+0x4C], eax
        mov eax, 0xAAAAAAAB
        mul ecx
        shr edx, 1
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x50], edx
        mov ecx, dword ptr ds : [edi+0x28]
        push ebp
        push ecx
        call dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi+0x24]
        push 2
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [edi+0x28]
        push edx
        push eax
        call dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [esi+0x44]
        push 2
        mov dword ptr ds : [esi+0x38], eax
        mov edx, dword ptr ds : [edi+0x28]
        push ecx
        push edx
        call dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x3C], eax
        lea ecx, ds:[ebx+6]
        mov eax, 1
        shl eax, cl
        push 4
        push eax
        mov dword ptr ds : [esi+0x1694], eax
        mov eax, dword ptr ds : [edi+0x28]
        push eax
        call dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [esi+0x1694]
        lea edx, ds:[ecx*4]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ds : [esi+0x30]
        add esp, 0x30
        test edx, edx
        mov dword ptr ds : [esi+8], eax
        je public_10002fc5
        mov edx, dword ptr ds : [esi+0x38]
        test edx, edx
        je public_10002fc5
        mov edx, dword ptr ds : [esi+0x3C]
        test edx, edx
        je public_10002fc5
        test eax, eax
        je public_10002fc5
        mov edx, ecx
        shr edx, 1
        lea edx, ds:[eax+edx*2]
        lea eax, ds:[eax+ecx*2]
        add ecx, eax
        mov dword ptr ds : [esi+0x169C], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x1690], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        mov dword ptr ds : [esi+0x7C], ecx
        mov dword ptr ds : [esi+0x80], edx
        mov byte ptr ds : [esi+0x1D], 8
        call public_10002ca0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x20
        public_10002fc5 : nop
        mov eax, dword ptr ds : [public_1000e1b8]
        push edi
        mov dword ptr ds : [edi+0x18], eax
        call public_10001ff0
        public_10002fd3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0x20
        public_10002fdf : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0x20
        public_10002feb : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        ret 0x20
        UNREACHABLE_TRAP(0x10002de0)
    }
}

#undef public_10002e2d
#undef public_10002e39
#undef public_10002e4e
#undef public_10002e5d
#undef public_10002fc5
#undef public_10002fd3
#undef public_10002fdf
#undef public_10002feb
