#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4cc8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_45ace0 _public_45ace0
#define public_45acf2 _public_45acf2
#define public_45ad08 _public_45ad08
#define public_45ad30 _public_45ad30
#define public_45ad4d _public_45ad4d
#define public_45ad84 _public_45ad84
#define public_45ad90 _public_45ad90
#define public_45ada2 _public_45ada2
#define public_45adb8 _public_45adb8
#define public_45ae07 _public_45ae07
#define public_45ae25 _public_45ae25
#define public_45ae2c _public_45ae2c
#define public_45ae63 _public_45ae63
#define public_45ae75 _public_45ae75

PROC_DECLARE(0x45acc0, internal_45acc0, public_45acc0);
extern "C" NAKED register_t __cdecl internal_45acc0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_45a470
        test al, al
        je public_45ad08
        test esi, esi
        je public_45ae25
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_45acf2
        public_45ace0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_45ace0
        public_45acf2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_45ad08 : nop
        mov al, byte ptr ds : [esi+0x338]
        test al, al
        je public_45ad4d
        call public_41a3e0
        test al, al
        je public_45ad30
        mov esi, dword ptr ds : [esi+0x32C]
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFC
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_45ad30 : nop
        fld dword ptr ds : [esi+0x334]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_45ad4d
        mov eax, dword ptr ds : [esi+0x32C]
        or byte ptr ds : [eax+0x6C], 3
        public_45ad4d : nop
        fld dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [esi+0x32C]
        fcomp dword ptr ds : [public_5c7474]
        mov bl, byte ptr ds : [eax+0x6C]
        shr bl, 1
        and bl, 1
        fnstsw ax
        test ah, 0x41
        jp public_45adb8
        test bl, bl
        je public_45adb8
        mov eax, dword ptr ds : [public_672400]
        test eax, eax
        jne public_45ad84
        call public_4cc8d0
        test al, al
        je public_45adb8
        public_45ad84 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_45ada2
        nop 
        lea esp, ss:[esp]
        public_45ad90 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_45ad90
        public_45ada2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_45adb8 : nop
        mov ecx, esi
        call public_5a17b0
        mov edi, dword ptr ds : [esi+0x32C]
        test byte ptr ds : [edi+0x6C], 2
        jne public_45ae2c
        mov eax, dword ptr ds : [public_672400]
        test eax, eax
        jne public_45ae07
        call public_4cc8d0
        test al, al
        jne public_45ae07
        fld dword ptr ds : [esi+0x334]
        fstp qword ptr ss : [esp+0xC]
        call public_42d680
        fsubr qword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x334]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_45ae07
        or byte ptr ds : [edi+0x6C], 3
        public_45ae07 : nop
        test bl, bl
        jne public_45ae25
        mov ecx, dword ptr ds : [esi+0x32C]
        test byte ptr ds : [ecx+0x6C], 2
        je public_45ae25
        mov edx, dword ptr ds : [ecx]
        push 0x3C
        push 1
        push 0x50
        call dword ptr ds : [edx+0xA8]
        public_45ae25 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_45ae2c : nop
        mov al, byte ptr ds : [edi+0x362]
        test al, al
        jne public_45ae07
        fld dword ptr ds : [esi+0x330]
        fstp qword ptr ss : [esp+0xC]
        call public_42d680
        fsubr qword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x330]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_45ae07
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_45ae75
        public_45ae63 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_45ae63
        public_45ae75 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x45acc0)
    }
}

#undef public_45ace0
#undef public_45acf2
#undef public_45ad08
#undef public_45ad30
#undef public_45ad4d
#undef public_45ad84
#undef public_45ad90
#undef public_45ada2
#undef public_45adb8
#undef public_45ae07
#undef public_45ae25
#undef public_45ae2c
#undef public_45ae63
#undef public_45ae75
