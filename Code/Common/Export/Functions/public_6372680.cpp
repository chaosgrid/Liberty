#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63723c0);
CLANG_FORWARD_PROC_SYMBOL(public_6372680);
CLANG_FORWARD_PROC_SYMBOL(public_63735c0);
CLANG_FORWARD_PROC_SYMBOL(public_6383460);

#define public_63726cf _public_63726cf
#define public_63726ee _public_63726ee
#define public_63726f7 _public_63726f7
#define public_6372708 _public_6372708
#define public_637270e _public_637270e
#define public_637271d _public_637271d
#define public_6372723 _public_6372723
#define public_637276b _public_637276b
#define public_6372772 _public_6372772
#define public_6372785 _public_6372785
#define public_63727da _public_63727da
#define public_63727e1 _public_63727e1
#define public_6372827 _public_6372827
#define public_637284e _public_637284e
#define public_6372874 _public_6372874

PROC_DECLARE(0x6372680, internal_6372680, public_6372680);
extern "C" NAKED register_t __cdecl internal_6372680()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov edx, dword ptr ds : [public_658b06c]
        push ebx
        push esi
        xor ebx, ebx
        test edx, edx
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0x7FEFFFFF
        jne public_63726cf
        mov eax, dword ptr ds : [public_658b068]
        test eax, eax
        jne public_63726cf
        mov eax, dword ptr ds : [public_658b060]
        test eax, eax
        jne public_63726cf
        mov eax, dword ptr ds : [public_658b1f0]
        test eax, eax
        je public_6372874
        public_63726cf : nop
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        jne public_63726ee
        mov eax, dword ptr ds : [public_658b810]
        push 0
        push eax
        call public_63723c0
        mov edx, dword ptr ds : [public_658b06c]
        add esp, 8
        public_63726ee : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_637270e
        mov eax, esi
        public_63726f7 : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_637270e
        test dword ptr ds : [eax+0x50], 0x40000
        je public_6372708
        inc ebx
        public_6372708 : nop
        mov eax, ecx
        test eax, eax
        jne public_63726f7
        public_637270e : nop
        test edx, edx
        jl public_637271d
        jle public_6372772
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        je public_6372772
        public_637271d : nop
        test esi, esi
        je public_6372772
        mov edi, esi
        public_6372723 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6372772
        test dword ptr ds : [edi+0x50], 0x40000
        je public_637276b
        mov ecx, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [public_658b070]
        push ecx
        push edx
        call public_63735c0
        mov edx, dword ptr ds : [public_658b06c]
        add esp, 8
        neg eax
        sbb eax, eax
        xor ecx, ecx
        neg eax
        test edx, edx
        setg cl
        xor eax, ecx
        je public_637276b
        dec ebx
        je public_6372827
        and dword ptr ds : [edi+0x50], 0xFFFBFFFF
        public_637276b : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6372723
        public_6372772 : nop
        mov eax, dword ptr ds : [public_658b1f0]
        test eax, eax
        mov edi, ebx
        je public_637284e
        test esi, esi
        je public_63727e1
        public_6372785 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63727e1
        test dword ptr ds : [esi+0x50], 0x40000
        je public_63727da
        mov edx, dword ptr ds : [esi+0x18]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        call public_6383460
        add esp, 8
        test eax, eax
        jne public_63727da
        mov ecx, dword ptr ds : [esi+0x50]
        and ecx, 0xFFFBFFFF
        mov dword ptr ds : [esi+0x50], ecx
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ss : [esp+0x10]
        dec ebx
        fnstsw ax
        test ah, 1
        je public_63727da
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], esi
        public_63727da : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6372785
        public_63727e1 : nop
        test ebx, ebx
        jne public_637284e
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_637284e
        or dword ptr ds : [eax+0x50], 0x40000
        mov ecx, dword ptr ds : [public_658b078]
        test ecx, ecx
        je public_6372874
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f06d4 @0x6372811*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f06d4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6372827 : nop
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [public_658b070]
        push edx
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f0684 @0x637283a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0684
        call public_6356960
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637284e : nop
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        mov dword ptr ds : [public_658b850], ebx
        je public_6372874
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
        push ebx
/*FIXUP push offset public_63f0648 @0x6372865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0648
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6372874 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6372680)
    }
}

#undef public_63726cf
#undef public_63726ee
#undef public_63726f7
#undef public_6372708
#undef public_637270e
#undef public_637271d
#undef public_6372723
#undef public_637276b
#undef public_6372772
#undef public_6372785
#undef public_63727da
#undef public_63727e1
#undef public_6372827
#undef public_637284e
#undef public_6372874
