#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebd2f2 _public_6ebd2f2
#define public_6ebd312 _public_6ebd312
#define public_6ebd316 _public_6ebd316
#define public_6ebd31b _public_6ebd31b
#define public_6ebd3a5 _public_6ebd3a5
#define public_6ebd3bc _public_6ebd3bc
#define public_6ebd3d4 _public_6ebd3d4
#define public_6ebd3db _public_6ebd3db
#define public_6ebd3ed _public_6ebd3ed
#define public_6ebd3ff _public_6ebd3ff

PROC_DECLARE(0x6ebd2d0, internal_6ebd2d0, public_6ebd2d0);
extern "C" NAKED register_t __cdecl internal_6ebd2d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6ebd3ed
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6ebd2f2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6ebd316
        cmp al, bl
        je public_6ebd312
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6ebd316
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6ebd2f2
        public_6ebd312 : nop
        xor eax, eax
        jmp public_6ebd31b
        public_6ebd316 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebd31b : nop
        cmp eax, ebx
        jne public_6ebd3ed
        push 0x7C
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6ebd3db
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x68], ebx
        lea eax, ds:[esi+0x70]
        mov dword ptr ds : [eax], offset public_6ed2864
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed27f0
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x6C], ecx
        jne public_6ebd3d4
        mov dword ptr ds : [esi+0x6C], eax
        public_6ebd3a5 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6ebd3ff
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6ebd3bc
        mov dword ptr ds : [eax], ebx
        public_6ebd3bc : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ebd3d4 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ebd3a5
        public_6ebd3db : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6ebd3ed : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6ebd3ff : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebd2d0)
    }
}

#undef public_6ebd2f2
#undef public_6ebd312
#undef public_6ebd316
#undef public_6ebd31b
#undef public_6ebd3a5
#undef public_6ebd3bc
#undef public_6ebd3d4
#undef public_6ebd3db
#undef public_6ebd3ed
#undef public_6ebd3ff
