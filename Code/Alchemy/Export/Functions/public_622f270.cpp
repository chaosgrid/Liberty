#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230960);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622f2c0 _public_622f2c0
#define public_622f2dd _public_622f2dd
#define public_622f2f4 _public_622f2f4
#define public_622f309 _public_622f309
#define public_622f312 _public_622f312
#define public_622f32a _public_622f32a
#define public_622f386 _public_622f386
#define public_622f39d _public_622f39d
#define public_622f3a6 _public_622f3a6
#define public_622f3b8 _public_622f3b8
#define public_622f3d5 _public_622f3d5
#define public_622f3f0 _public_622f3f0
#define public_622f402 _public_622f402
#define public_622f420 _public_622f420

PROC_DECLARE(0x622f270, internal_622f270, public_622f270);
extern "C" NAKED register_t __cdecl internal_622f270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        cmp eax, 0xEC7A290
        push edi
        jne public_622f32a
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp esi, ebp
        je public_622f2f4
        mov edx, dword ptr ds : [ebx+0x6C]
        cmp esi, edx
        je public_622f312
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x74]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x70], ecx
        jl public_622f2dd
        cmp dword ptr ds : [ebx+0x68], ebp
        je public_622f2c0
        cmp edx, ebp
        je public_622f2c0
        push edx
        call public_62460e0
        add esp, 4
        public_622f2c0 : nop
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ds : [ebx+0x68], 1
        inc eax
        push eax
        call public_6230960
        mov ecx, dword ptr ds : [ebx+0x70]
        add esp, 4
        mov dword ptr ds : [ebx+0x6C], eax
        mov dword ptr ds : [ebx+0x74], ecx
        public_622f2dd : nop
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edi, dword ptr ds : [ebx+0x6C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_622f312
        public_622f2f4 : nop
        cmp dword ptr ds : [ebx+0x68], ebp
        je public_622f309
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, ebp
        je public_622f309
        push eax
        call public_62460e0
        add esp, 4
        public_622f309 : nop
        mov dword ptr ds : [ebx+0x6C], ebp
        mov dword ptr ds : [ebx+0x74], ebp
        mov dword ptr ds : [ebx+0x70], ebp
        public_622f312 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x60], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_622f32a : nop
        cmp eax, 0x3B76E6C
        jne public_622f420
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp esi, ebp
        je public_622f3d5
        mov edx, dword ptr ds : [ebx+0x8C]
        cmp esi, edx
        je public_622f402
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x94]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x90], ecx
        jl public_622f3b8
        cmp dword ptr ds : [ebx+0x88], ebp
        je public_622f386
        cmp edx, ebp
        je public_622f386
        push edx
        call public_62460e0
        add esp, 4
        public_622f386 : nop
        mov eax, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x88], 1
        inc eax
        jne public_622f39d
        xor eax, eax
        jmp public_622f3a6
        public_622f39d : nop
        push eax
        call public_624612c
        add esp, 4
        public_622f3a6 : nop
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x94], eax
        public_622f3b8 : nop
        mov ecx, dword ptr ds : [ebx+0x90]
        mov edi, dword ptr ds : [ebx+0x8C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_622f402
        public_622f3d5 : nop
        cmp dword ptr ds : [ebx+0x88], ebp
        je public_622f3f0
        mov eax, dword ptr ds : [ebx+0x8C]
        cmp eax, ebp
        je public_622f3f0
        push eax
        call public_62460e0
        add esp, 4
        public_622f3f0 : nop
        mov dword ptr ds : [ebx+0x8C], ebp
        mov dword ptr ds : [ebx+0x94], ebp
        mov dword ptr ds : [ebx+0x90], ebp
        public_622f402 : nop
        mov eax, dword ptr ds : [ebx+0x8C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x80], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_622f420 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x622f270)
    }
}

#undef public_622f2c0
#undef public_622f2dd
#undef public_622f2f4
#undef public_622f309
#undef public_622f312
#undef public_622f32a
#undef public_622f386
#undef public_622f39d
#undef public_622f3a6
#undef public_622f3b8
#undef public_622f3d5
#undef public_622f3f0
#undef public_622f402
#undef public_622f420
