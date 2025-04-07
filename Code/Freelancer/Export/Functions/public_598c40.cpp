#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);

#define public_598d54 _public_598d54
#define public_598d5f _public_598d5f
#define public_598da5 _public_598da5
#define public_598dd9 _public_598dd9
#define public_598dde _public_598dde
#define public_598e4b _public_598e4b
#define public_598e56 _public_598e56
#define public_598e9c _public_598e9c
#define public_598ed0 _public_598ed0
#define public_598ed5 _public_598ed5
#define public_598ff0 _public_598ff0
#define public_599033 _public_599033
#define public_599035 _public_599035
#define public_599081 _public_599081

PROC_DECLARE(0x598c40, internal_598c40, public_598c40);
extern "C" NAKED register_t __cdecl internal_598c40()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+0x3C]
        push edi
        push 0
        call public_422690
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [esi+0xD0]
        test al, al
        je public_598dde
        lea edx, ds:[esi+0xE4]
        push edx
        call public_421ba0
        push 8
        call public_421670
        mov eax, dword ptr ds : [esi+0xD4]
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [esi+0x7C]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x98]
        add esp, 0x20
        test ecx, ecx
        jne public_598d54
        xor eax, eax
        jmp public_598d5f
        public_598d54 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_598d5f : nop
        mov ecx, dword ptr ds : [esi+0xD4]
        mov edx, dword ptr ds : [esi+0x7C]
        inc ecx
        cmp ecx, eax
        push 0
        jae public_598da5
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+ecx*4]
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0xD4]
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        add esp, 0x18
        jmp public_598dd9
        public_598da5 : nop
        fld dword ptr ds : [esi+0x80]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [esi+0xA8]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        public_598dd9 : nop
        call public_421690
        public_598dde : nop
        mov al, byte ptr ds : [esi+0xD8]
        test al, al
        je public_598ed5
        lea edx, ds:[esi+0xE8]
        push edx
        call public_421ba0
        push 8
        call public_421670
        mov eax, dword ptr ds : [esi+0xDC]
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0xDC]
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [esi+0x7C]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x98]
        add esp, 0x20
        test ecx, ecx
        jne public_598e4b
        xor eax, eax
        jmp public_598e56
        public_598e4b : nop
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_598e56 : nop
        mov ecx, dword ptr ds : [esi+0xDC]
        mov edx, dword ptr ds : [esi+0x7C]
        inc ecx
        cmp ecx, eax
        push 0
        jae public_598e9c
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+ecx*4]
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0xDC]
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        add esp, 0x18
        jmp public_598ed0
        public_598e9c : nop
        fld dword ptr ds : [esi+0x80]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [esi+0xA8]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        public_598ed0 : nop
        call public_421690
        public_598ed5 : nop
        mov ecx, esi
        call public_59e5c0
        push edi
        push 0
        call public_422690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea edx, ds:[esi+0xE0]
        push edx
        call public_421ba0
        push 7
        call public_421670
        push 0
        push 0
        push 0
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x7C]
        push 0
        push 0
        push eax
        call public_421cc0
        fld dword ptr ds : [esi+0x80]
        add esp, 0x20
        fchs 
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        fld dword ptr ds : [esi+0x80]
        add esp, 0xC
        push 0
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push 0
        call public_421cc0
        call public_421690
        push 2
        call public_421670
        add esp, 0x10
        xor edi, edi
        nop 
        lea esp, ss:[esp]
        public_598ff0 : nop
        mov ecx, dword ptr ds : [esi+0x98]
        test ecx, ecx
        je public_599033
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_599033
        mov edx, ecx
        mov eax, dword ptr ds : [edx+edi*4]
        push 0
        push eax
        push 0
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [esi+0x7C]
        push 0
        push edx
        push eax
        call public_421cc0
        add esp, 0x18
        inc edi
        jmp public_598ff0
        public_599033 : nop
        xor edi, edi
        public_599035 : nop
        mov ecx, dword ptr ds : [esi+0xA8]
        test ecx, ecx
        je public_599081
        mov eax, dword ptr ds : [esi+0xAC]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_599081
        mov edx, dword ptr ds : [ecx+edi*4]
        push 0
        push 0
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [esi+0xA8]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax+edi*4]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        inc edi
        jmp public_599035
        public_599081 : nop
        pop edi
        pop esi
        jmp public_421690
        UNREACHABLE_TRAP(0x598c40)
    }
}

#undef public_598d54
#undef public_598d5f
#undef public_598da5
#undef public_598dd9
#undef public_598dde
#undef public_598e4b
#undef public_598e56
#undef public_598e9c
#undef public_598ed0
#undef public_598ed5
#undef public_598ff0
#undef public_599033
#undef public_599035
#undef public_599081
