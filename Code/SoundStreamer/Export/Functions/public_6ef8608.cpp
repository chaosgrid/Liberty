#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8608);

#define public_6ef8628 _public_6ef8628
#define public_6ef863e _public_6ef863e
#define public_6ef865c _public_6ef865c
#define public_6ef8692 _public_6ef8692
#define public_6ef869f _public_6ef869f
#define public_6ef86bd _public_6ef86bd
#define public_6ef86d9 _public_6ef86d9
#define public_6ef86e6 _public_6ef86e6
#define public_6ef86ec _public_6ef86ec
#define public_6ef86f2 _public_6ef86f2
#define public_6ef8711 _public_6ef8711
#define public_6ef872f _public_6ef872f
#define public_6ef8738 _public_6ef8738
#define public_6ef873a _public_6ef873a
#define public_6ef8755 _public_6ef8755
#define public_6ef875f _public_6ef875f
#define public_6ef8784 _public_6ef8784
#define public_6ef878a _public_6ef878a
#define public_6ef8795 _public_6ef8795
#define public_6ef8799 _public_6ef8799

PROC_DECLARE(0x6ef8608, internal_6ef8608, public_6ef8608);
extern "C" NAKED register_t __cdecl internal_6ef8608()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        push 0x100
        call public_6ef45cb
        mov esi, eax
        pop ecx
        test esi, esi
        jne public_6ef8628
        push 0x1B
        call public_6ef50fb
        pop ecx
        public_6ef8628 : nop
        mov dword ptr ds : [public_6f02540], esi
        mov dword ptr ds : [public_6f02640], 0x20
        lea eax, ds:[esi+0x100]
        public_6ef863e : nop
        cmp esi, eax
        jae public_6ef865c
        and byte ptr ds : [esi+4], 0
        or dword ptr ds : [esi], 0xFFFFFFFF
        mov byte ptr ds : [esi+5], 0xA
        mov eax, dword ptr ds : [public_6f02540]
        add esi, 8
        add eax, 0x100
        jmp public_6ef863e
        public_6ef865c : nop
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_6efc0c8]
        cmp word ptr ss : [esp+0x42], 0
        je public_6ef8738
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        je public_6ef8738
        mov esi, dword ptr ds : [eax]
        lea ebp, ds:[eax+4]
        mov eax, 0x800
        cmp esi, eax
        lea ebx, ds:[esi+ebp]
        jl public_6ef8692
        mov esi, eax
        public_6ef8692 : nop
        cmp dword ptr ds : [public_6f02640], esi
        jge public_6ef86ec
        mov edi, offset public_6f02544
        public_6ef869f : nop
        push 0x100
        call public_6ef45cb
        test eax, eax
        pop ecx
        je public_6ef86e6
        add dword ptr ds : [public_6f02640], 0x20
        mov dword ptr ds : [edi], eax
        lea ecx, ds:[eax+0x100]
        public_6ef86bd : nop
        cmp eax, ecx
        jae public_6ef86d9
        and byte ptr ds : [eax+4], 0
        or dword ptr ds : [eax], 0xFFFFFFFF
        mov byte ptr ds : [eax+5], 0xA
        mov ecx, dword ptr ds : [edi]
        add eax, 8
        add ecx, 0x100
        jmp public_6ef86bd
        public_6ef86d9 : nop
        add edi, 4
        cmp dword ptr ds : [public_6f02640], esi
        jl public_6ef869f
        jmp public_6ef86ec
        public_6ef86e6 : nop
        mov esi, dword ptr ds : [public_6f02640]
        public_6ef86ec : nop
        xor edi, edi
        test esi, esi
        jle public_6ef8738
        public_6ef86f2 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, 0xFFFFFFFF
        je public_6ef872f
        mov cl, byte ptr ss : [ebp]
        test cl, 1
        je public_6ef872f
        test cl, 8
        jne public_6ef8711
        push eax
        call dword ptr ds : [public_6efc0d8]
        test eax, eax
        je public_6ef872f
        public_6ef8711 : nop
        mov eax, edi
        mov ecx, edi
        sar eax, 5
        and ecx, 0x1F
        mov eax, dword ptr ds : [eax*4+public_6f02540]
        lea eax, ds:[eax+ecx*8]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov cl, byte ptr ss : [ebp]
        mov byte ptr ds : [eax+4], cl
        public_6ef872f : nop
        inc edi
        inc ebp
        add ebx, 4
        cmp edi, esi
        jl public_6ef86f2
        public_6ef8738 : nop
        xor ebx, ebx
        public_6ef873a : nop
        mov eax, dword ptr ds : [public_6f02540]
        cmp dword ptr ds : [eax+ebx*8], 0xFFFFFFFF
        lea esi, ds:[eax+ebx*8]
        jne public_6ef8795
        test ebx, ebx
        mov byte ptr ds : [esi+4], 0x81
        jne public_6ef8755
        push 0xFFFFFFF6
        pop eax
        jmp public_6ef875f
        public_6ef8755 : nop
        mov eax, ebx
        dec eax
        neg eax
        sbb eax, eax
        add eax, 0xFFFFFFF5
        public_6ef875f : nop
        push eax
        call dword ptr ds : [public_6efc0d4]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ef8784
        push edi
        call dword ptr ds : [public_6efc0d8]
        test eax, eax
        je public_6ef8784
        and eax, 0xFF
        mov dword ptr ds : [esi], edi
        cmp eax, 2
        jne public_6ef878a
        public_6ef8784 : nop
        or byte ptr ds : [esi+4], 0x40
        jmp public_6ef8799
        public_6ef878a : nop
        cmp eax, 3
        jne public_6ef8799
        or byte ptr ds : [esi+4], 8
        jmp public_6ef8799
        public_6ef8795 : nop
        or byte ptr ds : [esi+4], 0x80
        public_6ef8799 : nop
        inc ebx
        cmp ebx, 3
        jl public_6ef873a
        push dword ptr ds : [public_6f02640]
        call dword ptr ds : [public_6efc0a0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6ef8608)
    }
}

#undef public_6ef8628
#undef public_6ef863e
#undef public_6ef865c
#undef public_6ef8692
#undef public_6ef869f
#undef public_6ef86bd
#undef public_6ef86d9
#undef public_6ef86e6
#undef public_6ef86ec
#undef public_6ef86f2
#undef public_6ef8711
#undef public_6ef872f
#undef public_6ef8738
#undef public_6ef873a
#undef public_6ef8755
#undef public_6ef875f
#undef public_6ef8784
#undef public_6ef878a
#undef public_6ef8795
#undef public_6ef8799
