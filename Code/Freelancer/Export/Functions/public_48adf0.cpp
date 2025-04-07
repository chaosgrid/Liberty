#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_48ae15 _public_48ae15
#define public_48ae35 _public_48ae35
#define public_48ae40 _public_48ae40
#define public_48ae52 _public_48ae52
#define public_48ae64 _public_48ae64
#define public_48aeb8 _public_48aeb8
#define public_48aec2 _public_48aec2
#define public_48aee7 _public_48aee7
#define public_48aef9 _public_48aef9
#define public_48af08 _public_48af08

PROC_DECLARE(0x48adf0, internal_48adf0, public_48adf0);
extern "C" NAKED register_t __cdecl internal_48adf0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        call public_5a17b0
        mov al, byte ptr ds : [edi+0x368]
        test al, al
        jne public_48ae64
        call public_45a470
        test al, al
        jne public_48ae15
        call public_442720
        test al, al
        je public_48ae64
        public_48ae15 : nop
        cmp dword ptr ds : [edi+0x360], 6
        jne public_48ae35
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push 4
        push edx
        call dword ptr ds : [eax+0x128]
        public_48ae35 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48ae52
        lea esp, ss:[esp]
        public_48ae40 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48ae40
        public_48ae52 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        ret 
        public_48ae64 : nop
        cmp dword ptr ds : [edi+0x360], 4
        jne public_48af08
        call public_54baf0
        mov esi, eax
        mov eax, dword ptr ds : [public_671f78]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_48aeb8
        test esi, esi
        je public_48aeb8
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_48aeb8
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_48aeb8
        mov ecx, dword ptr ds : [ecx+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_48aeb8
        push eax
        push esi
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_48aec2
        public_48aeb8 : nop
        mov dword ptr ds : [edi+0x364], 0x41A00000
        public_48aec2 : nop
        call public_42d680
        fadd dword ptr ds : [edi+0x364]
        fst dword ptr ds : [edi+0x364]
        fcomp dword ptr ds : [public_5d2688]
        fnstsw ax
        test ah, 0x41
        jne public_48af08
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48aef9
        public_48aee7 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48aee7
        public_48aef9 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_48af08 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x48adf0)
    }
}

#undef public_48ae15
#undef public_48ae35
#undef public_48ae40
#undef public_48ae52
#undef public_48ae64
#undef public_48aeb8
#undef public_48aec2
#undef public_48aee7
#undef public_48aef9
#undef public_48af08
