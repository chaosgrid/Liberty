#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac69a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7760);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f20);

#define public_6ac77bc _public_6ac77bc
#define public_6ac77da _public_6ac77da
#define public_6ac7831 _public_6ac7831
#define public_6ac7839 _public_6ac7839
#define public_6ac786b _public_6ac786b
#define public_6ac7888 _public_6ac7888
#define public_6ac788c _public_6ac788c

PROC_DECLARE(0x6ac7760, internal_6ac7760, public_6ac7760);
extern "C" NAKED register_t __cdecl internal_6ac7760()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [esi+0x10]
        test ebp, ebp
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x20], eax
        jl public_6ac788c
        cmp ebp, dword ptr ds : [esi+0xC]
        jg public_6ac788c
        test eax, eax
        je public_6ac788c
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push ebx
        push edi
        call public_6ac7e60
        test eax, eax
        je public_6ac77bc
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push esi
        push ebp
        push eax
        call public_6ac69a0
        jmp public_6ac786b
        public_6ac77bc : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push ecx
        call public_6ac7e60
        test eax, eax
        je public_6ac77da
        push 1
        push esi
        push ebp
        push edi
        call public_6ac69a0
        jmp public_6ac786b
        public_6ac77da : nop
        push esi
        call public_6ac6b70
        mov edx, eax
        mov ecx, dword ptr ds : [ebx]
        shl edx, 6
        add edx, eax
        push ecx
        shl edx, 4
        push 2
        lea edi, ds:[edx+esi]
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+0x8418]
        push eax
        push edx
        call public_6ac3140
        test eax, eax
        je public_6ac7831
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        lea eax, ds:[edi+0x8418]
        push ebx
        lea edx, ds:[eax+ecx*8]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        call public_6ac7f20
        test eax, eax
        mov dword ptr ss : [esp+0x24], 1
        jne public_6ac7839
        public_6ac7831 : nop
        mov dword ptr ss : [esp+0x24], 0
        public_6ac7839 : nop
        mov ecx, ebp
        mov dword ptr ds : [edi+0x8818], 1
        shl ecx, 7
        add ecx, ebp
        mov dword ptr ds : [edi+0x881C], 2
        mov dword ptr ds : [edi+0x8820], ebp
        lea eax, ds:[esi+ecx*4+0x314]
        mov ecx, dword ptr ds : [esi+ecx*4+0x314]
        inc ecx
        mov dword ptr ds : [eax], ecx
        public_6ac786b : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        test eax, eax
        je public_6ac7888
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6ac7888
        mov eax, 1
        mov dword ptr ds : [esi], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        public_6ac7888 : nop
        xor eax, eax
        mov dword ptr ds : [esi], eax
        public_6ac788c : nop
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6ac7760)
    }
}

#undef public_6ac77bc
#undef public_6ac77da
#undef public_6ac7831
#undef public_6ac7839
#undef public_6ac786b
#undef public_6ac7888
#undef public_6ac788c
