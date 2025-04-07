#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece940);
CLANG_FORWARD_PROC_SYMBOL(public_6eceba0);

#define public_6ecd9a0 _public_6ecd9a0
#define public_6ecd9d0 _public_6ecd9d0
#define public_6ecd9f0 _public_6ecd9f0
#define public_6ecda0b _public_6ecda0b
#define public_6ecda3d _public_6ecda3d
#define public_6ecda45 _public_6ecda45
#define public_6ecda88 _public_6ecda88
#define public_6ecda8a _public_6ecda8a

PROC_DECLARE(0x6ecd990, internal_6ecd990, public_6ecd990);
extern "C" NAKED register_t __cdecl internal_6ecd990()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ecd9a0
        or eax, eax
        pop ecx
        ret 0x10
        public_6ecd9a0 : nop
        push ebx
        push ebp
        push esi
        or ebp, 0xFFFFFFFF
        test eax, eax
        push edi
        jne public_6ecda0b
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [eax+0x24]
        jae public_6ecda8a
        mov esi, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [esi]
        xor edi, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6ecda8a
        nop 
        public_6ecd9d0 : nop
        cmp edi, ebx
        je public_6ecd9f0
        lea ecx, ss:[esp+0x18]
        inc edi
        call public_6ece940
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_6ecd9d0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        public_6ecd9f0 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        xor ebp, ebp
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        public_6ecda0b : nop
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        lea esi, ds:[edi+0x28]
        push ecx
        mov ecx, esi
        call public_6eceba0
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_6ecda3d
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ecda3d
        lea eax, ss:[esp+0x18]
        jmp public_6ecda45
        public_6ecda3d : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6ecda45 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+0x2C]
        je public_6ecda8a
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        je public_6ecda8a
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x20]
        sar eax, 2
        cmp edx, eax
        jae public_6ecda8a
        mov ecx, dword ptr ds : [ecx+0x18]
        lea eax, ds:[ecx+edx*4]
        push eax
        mov ecx, edi
        call public_6ecc4e0
        test eax, eax
        je public_6ecda8a
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        je public_6ecda88
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6ecda88 : nop
        xor ebp, ebp
        public_6ecda8a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6ecd990)
    }
}

#undef public_6ecd9a0
#undef public_6ecd9d0
#undef public_6ecd9f0
#undef public_6ecda0b
#undef public_6ecda3d
#undef public_6ecda45
#undef public_6ecda88
#undef public_6ecda8a
