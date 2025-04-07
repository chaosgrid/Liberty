#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62b57e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e6d40);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62e6d81 _public_62e6d81
#define public_62e6da5 _public_62e6da5
#define public_62e6da7 _public_62e6da7
#define public_62e6dd1 _public_62e6dd1
#define public_62e6ea6 _public_62e6ea6
#define public_62e6eb0 _public_62e6eb0
#define public_62e6eb2 _public_62e6eb2
#define public_62e6eb7 _public_62e6eb7
#define public_62e6ee7 _public_62e6ee7
#define public_62e6efd _public_62e6efd
#define public_62e6fe5 _public_62e6fe5
#define public_62e6ff7 _public_62e6ff7

PROC_DECLARE(0x62e6d40, internal_62e6d40, public_62e6d40);
extern "C" NAKED register_t __cdecl internal_62e6d40()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebx, ecx
        lea ecx, ds:[ebx+0xE8]
        push 0
        call public_6280b40
        mov eax, dword ptr ds : [ebx+0xE4]
        test eax, eax
        mov byte ptr ss : [esp+0xB], 0
        mov dword ptr ss : [esp+0xC], 0x7F7FFFFF
        je public_62e6fe5
        mov eax, dword ptr ds : [ebx+0xE0]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_62e6fe5
        push esi
        push edi
        public_62e6d81 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        lea ecx, ss:[ebp+8]
        je public_62e6eb7
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e6eb7
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_62e6da5
        lea edi, ds:[ecx-8]
        jmp public_62e6da7
        public_62e6da5 : nop
        xor edi, edi
        public_62e6da7 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62e6dd1
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e6dd1 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e6eb2
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ebx+4]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fcom dword ptr ds : [ecx+0x17C0]
        fnstsw ax
        test ah, 5
        jp public_62e6eb0
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_62e6eb0
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ds:[ebx+0xE8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ecx]
        add edi, 8
        cmp edi, eax
        je public_62e6ea6
        push edi
        call public_6341610
        public_62e6ea6 : nop
        mov ebp, dword ptr ss : [ebp]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_62e6ee7
        public_62e6eb0 : nop
        fstp st(0)
        public_62e6eb2 : nop
        mov ebp, dword ptr ss : [ebp]
        jmp public_62e6ee7
        public_62e6eb7 : nop
        mov edx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [ebp]
        mov dword ptr ds : [edx], esi
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        push 0
        mov dword ptr ds : [eax+4], edx
        call public_62b57e0
        push ebp
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+0xE4]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0xE4], eax
        mov ebp, esi
        public_62e6ee7 : nop
        mov eax, dword ptr ds : [ebx+0xE4]
        test eax, eax
        je public_62e6efd
        cmp ebp, dword ptr ds : [ebx+0xE0]
        jne public_62e6d81
        public_62e6efd : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        pop edi
        pop esi
        je public_62e6fe5
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_62e1680
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        call public_62e1630
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 0x18
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fdivr dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [ebx+0xF4]
        fnstsw ax
        test ah, 5
        jp public_62e6ff7
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e6ff7
        pop ebp
        fstp dword ptr ds : [ebx+0xF4]
        pop ebx
        add esp, 0x3C
        ret 4
        public_62e6fe5 : nop
        pop ebp
        mov dword ptr ds : [ebx+0xF4], 0x7F7FFFFF
        pop ebx
        add esp, 0x3C
        ret 4
        public_62e6ff7 : nop
        pop ebp
        fstp st(0)
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x62e6d40)
    }
}

#undef public_62e6d81
#undef public_62e6da5
#undef public_62e6da7
#undef public_62e6dd1
#undef public_62e6ea6
#undef public_62e6eb0
#undef public_62e6eb2
#undef public_62e6eb7
#undef public_62e6ee7
#undef public_62e6efd
#undef public_62e6fe5
#undef public_62e6ff7
