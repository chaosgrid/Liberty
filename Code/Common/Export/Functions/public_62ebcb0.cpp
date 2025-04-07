#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62ebcb0);

#define public_62ebcde _public_62ebcde
#define public_62ebce1 _public_62ebce1
#define public_62ebd09 _public_62ebd09
#define public_62ebd37 _public_62ebd37
#define public_62ebd61 _public_62ebd61
#define public_62ebd90 _public_62ebd90
#define public_62ebddd _public_62ebddd
#define public_62ebe16 _public_62ebe16
#define public_62ebe18 _public_62ebe18
#define public_62ebe71 _public_62ebe71
#define public_62ebec7 _public_62ebec7
#define public_62ebec9 _public_62ebec9
#define public_62ebf17 _public_62ebf17
#define public_62ebf1d _public_62ebf1d
#define public_62ebf37 _public_62ebf37

PROC_DECLARE(0x62ebcb0, internal_62ebcb0, public_62ebcb0);
extern "C" NAKED register_t __cdecl internal_62ebcb0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xBD]
        xor ebx, ebx
        cmp al, bl
        je public_62ebd09
        cmp byte ptr ds : [esi+0xC5], bl
        jne public_62ebd09
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_62ebcde
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ebcde
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_62ebce1
        public_62ebcde : nop
        mov eax, dword ptr ds : [esi+0xC]
        public_62ebce1 : nop
        cmp eax, ebx
        je public_62ebd09
        lea ecx, ds:[eax-8]
        cmp ecx, ebx
        je public_62ebd09
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xB]
        push edx
        mov byte ptr ss : [esp+0xF], bl
        call dword ptr ds : [eax+0x134]
        cmp byte ptr ss : [esp+0xB], bl
        jne public_62ebd09
        mov byte ptr ds : [esi+0xBD], bl
        public_62ebd09 : nop
        mov dl, byte ptr ds : [esi+0xC3]
        cmp dl, bl
        je public_62ebd61
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        fadd dword ptr ds : [esi]
        fst dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x17D0]
        fadd dword ptr ds : [eax+0x17CC]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62ebd37
        mov dword ptr ds : [esi], ebx
        public_62ebd37 : nop
        cmp dl, bl
        je public_62ebd61
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x1429]
        add eax, 0x1364
        cmp cl, bl
        jne public_62ebd61
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        je public_62ebd61
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ebd61
        mov byte ptr ds : [esi+0xC0], bl
        public_62ebd61 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp byte ptr ds : [ecx+0xEC], bl
        je public_62ebd90
        cmp dl, bl
        je public_62ebd90
        cmp byte ptr ds : [ecx+0x1429], bl
        jne public_62ebd90
        mov eax, dword ptr ds : [ecx+0x1370]
        cmp eax, ebx
        je public_62ebd90
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ebd90
        mov byte ptr ds : [esi+0xC0], 1
        public_62ebd90 : nop
        fld dword ptr ds : [ecx+0x128]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ebddd
        mov eax, dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x128]
        fcomp dword ptr ds : [eax+0x17E4]
        fnstsw ax
        test ah, 0x41
        jp public_62ebddd
        cmp dl, bl
        je public_62ebddd
        cmp byte ptr ds : [ecx+0x1429], bl
        jne public_62ebddd
        mov eax, dword ptr ds : [ecx+0x1370]
        cmp eax, ebx
        je public_62ebddd
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ebddd
        mov byte ptr ds : [esi+0xC0], 1
        public_62ebddd : nop
        cmp byte ptr ds : [ecx+0xFC], bl
        je public_62ebe71
        cmp byte ptr ds : [esi+0xC4], bl
        jne public_62ebf1d
        mov byte ptr ds : [esi+0xC4], 1
        mov edx, dword ptr ds : [ecx+0x17D8]
        mov dword ptr ss : [esp+0xC], ebx
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], edx
        je public_62ebe16
        add ecx, 0xFFFFFFF8
        jmp public_62ebe18
        public_62ebe16 : nop
        xor ecx, ecx
        public_62ebe18 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_62ebf1d
        push ebx
        push 1
        push eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        call public_62d4520
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ebf1d
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push 2
        push edx
        call public_62d4520
        jmp public_62ebf1d
        public_62ebe71 : nop
        fld dword ptr ds : [ecx+0x128]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ebf17
        mov edx, dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x128]
        fcomp dword ptr ds : [edx+0x17E8]
        fnstsw ax
        test ah, 0x41
        jp public_62ebf17
        cmp byte ptr ds : [esi+0xC4], bl
        jne public_62ebf1d
        mov byte ptr ds : [esi+0xC4], 1
        mov eax, dword ptr ds : [ecx+0x17E8]
        mov dword ptr ss : [esp+0xC], ebx
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_62ebec7
        add ecx, 0xFFFFFFF8
        jmp public_62ebec9
        public_62ebec7 : nop
        xor ecx, ecx
        public_62ebec9 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_62ebf1d
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+4]
        push ebx
        push 1
        push eax
        call public_62d4520
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ebf1d
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+4]
        push edx
        push 2
        push eax
        call public_62d4520
        jmp public_62ebf1d
        public_62ebf17 : nop
        mov byte ptr ds : [esi+0xC4], bl
        public_62ebf1d : nop
        cmp byte ptr ds : [esi+0xC0], bl
        je public_62ebf37
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_62ebf37 : nop
        mov dword ptr ds : [esi+4], ebx
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62ebcb0)
    }
}

#undef public_62ebcde
#undef public_62ebce1
#undef public_62ebd09
#undef public_62ebd37
#undef public_62ebd61
#undef public_62ebd90
#undef public_62ebddd
#undef public_62ebe16
#undef public_62ebe18
#undef public_62ebe71
#undef public_62ebec7
#undef public_62ebec9
#undef public_62ebf17
#undef public_62ebf1d
#undef public_62ebf37
