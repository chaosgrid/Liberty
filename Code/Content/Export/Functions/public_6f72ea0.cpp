#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f72ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f72f00 _public_6f72f00
#define public_6f72f79 _public_6f72f79
#define public_6f72f7e _public_6f72f7e
#define public_6f72f8f _public_6f72f8f
#define public_6f73012 _public_6f73012
#define public_6f73050 _public_6f73050
#define public_6f7305d _public_6f7305d
#define public_6f73072 _public_6f73072
#define public_6f73081 _public_6f73081
#define public_6f73090 _public_6f73090
#define public_6f7309b _public_6f7309b
#define public_6f7309f _public_6f7309f
#define public_6f730b4 _public_6f730b4

PROC_DECLARE(0x6f72ea0, internal_6f72ea0, public_6f72ea0);
extern "C" NAKED register_t __cdecl internal_6f72ea0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+8]
        mov ebp, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push ecx
        push eax
        push eax
        mov dword ptr ss : [esp+0x20], ebp
        call public_6f6a640
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+8], edi
        fld dword ptr ds : [ecx]
        mov ebx, dword ptr ss : [ebp+0xBC]
        fld st(0)
        mov eax, dword ptr ss : [ebp+0xC0]
        fmul st, st(1)
        cmp ebx, eax
        mov dword ptr ss : [esp+0x30], ebx
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        je public_6f730b4
        nop 
        lea esp, ss:[esp]
        public_6f72f00 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_6f7309f
        lea eax, ss:[esp+0x18]
        push eax
        call public_6eb70f0
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jp public_6f7309f
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f73012
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f72f79
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        mov ebx, eax
        ja public_6f72f7e
        public_6f72f79 : nop
        mov ebx, 1
        public_6f72f7e : nop
        mov ecx, esi
        call public_6fa3db0
        add eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jns public_6f72f8f
        xor eax, eax
        public_6f72f8f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_6f38a50
        mov edx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6fa3db0
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7309f
        public_6f73012 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f7305d
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f7309b
        nop 
        public_6f73050 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f73050
        jmp public_6f7309b
        public_6f7305d : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f73081
        public_6f73072 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f73072
        public_6f73081 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f7309b
        lea ebx, ds:[ebx]
        public_6f73090 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f73090
        public_6f7309b : nop
        add dword ptr ds : [esi+8], 4
        public_6f7309f : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        add ebx, 4
        cmp ebx, eax
        mov dword ptr ss : [esp+0x30], ebx
        jne public_6f72f00
        public_6f730b4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6f72ea0)
    }
}

#undef public_6f72f00
#undef public_6f72f79
#undef public_6f72f7e
#undef public_6f72f8f
#undef public_6f73012
#undef public_6f73050
#undef public_6f7305d
#undef public_6f73072
#undef public_6f73081
#undef public_6f73090
#undef public_6f7309b
#undef public_6f7309f
#undef public_6f730b4
