#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6382040);
CLANG_FORWARD_PROC_SYMBOL(public_6383530);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_6384ce0);

#define public_63835ae _public_63835ae
#define public_6383600 _public_6383600
#define public_6383650 _public_6383650
#define public_6383652 _public_6383652
#define public_6383666 _public_6383666
#define public_638368f _public_638368f
#define public_63836c6 _public_63836c6
#define public_638370f _public_638370f
#define public_638374d _public_638374d
#define public_6383771 _public_6383771
#define public_63837d2 _public_63837d2

PROC_DECLARE(0x6383530, internal_6383530, public_6383530);
extern "C" NAKED register_t __cdecl internal_6383530()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_658b260]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ds : [public_63991e8]
        push edi
        mov edi, 1
        jne public_6383600
        mov eax, dword ptr ds : [public_658b258]
        mov ecx, dword ptr ds : [public_658b25c]
        mov dword ptr ds : [public_658b260], eax
        mov eax, dword ptr ds : [public_658b24c]
        imul eax, dword ptr ds : [public_658b254]
        shl eax, 3
        push eax
        mov dword ptr ds : [public_658b264], ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_658b258], eax
        jne public_63835ae
        mov edx, dword ptr ds : [public_658b254]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f6f9c @0x6383598*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6f9c
        push eax
        call esi
        push 0
        push 0
        push 4
        call public_6378600
        add esp, 0x18
        public_63835ae : nop
        fld qword ptr ds : [public_658b878]
        mov dword ptr ds : [public_658b25c], edi
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        je public_6383666
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b254]
        mov eax, dword ptr ds : [public_658b260]
        push ecx
        push edx
        push eax
        call public_6382040
        fstp qword ptr ds : [public_658b878]
/*FIXUP push offset public_658b878 @0x63835ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b878
        push 0
/*FIXUP push offset public_63f1938 @0x63835f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1938
        call public_6377cf0
        add esp, 0x18
        jmp public_6383666
        public_6383600 : nop
        mov eax, dword ptr ds : [public_658b1d4]
        test eax, eax
        jne public_6383652
        cmp dword ptr ds : [public_658b868], 2
        jle public_6383652
        fld qword ptr ds : [public_658b6c0]
        fmul qword ptr ds : [public_63a5a30]
        fld qword ptr ds : [public_658b878]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6383650
        fld qword ptr ds : [public_658b878]
        fmul qword ptr ds : [public_63a5a28]
        fst qword ptr ds : [public_658b878]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6383650
        fstp qword ptr ds : [public_658b878]
        jmp public_6383652
        public_6383650 : nop
        fstp st(0)
/*FIXUP public_6383652 : nop
        push offset public_658b878 @0x6383652*/
  FIXUP public_6383652 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b878
        push 0
/*FIXUP push offset public_63f1938 @0x6383659*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1938
        call public_6377cf0
        add esp, 0xC
        public_6383666 : nop
        cmp dword ptr ds : [public_658b868], edi
        jle public_63836c6
        fld qword ptr ds : [public_658b6c0]
        fmul qword ptr ds : [public_63a5a20]
        fcom qword ptr ds : [public_63a5708]
        fnstsw ax
        test ah, 1
        je public_638368f
        fstp st(0)
        fld qword ptr ds : [public_63a5708]
        public_638368f : nop
        fld qword ptr ds : [public_658b878]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_63836c6
        mov ecx, dword ptr ds : [public_658b87c]
        mov edx, dword ptr ds : [public_658b878]
        push ecx
        push edx
/*FIXUP push offset public_63f6f04 @0x63836ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6f04
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_63836c6 : nop
        call public_6384610
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_63f6ef4 @0x63836d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6ef4
        call public_6377cf0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0xC
        test eax, eax
        je public_638370f
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_658b87c]
        mov eax, dword ptr ds : [public_658b878]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f6ec0 @0x6383704*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6ec0
        push ecx
        call esi
        add esp, 0x14
        public_638370f : nop
        mov eax, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [public_658b878]
        imul eax, dword ptr ds : [public_658b254]
        fmul qword ptr ds : [public_63a5958]
        fstp qword ptr ss : [esp+0x18]
        fld qword ptr ds : [public_658b878]
        fchs 
        fstp qword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [public_658b260]
        mov esi, dword ptr ds : [public_658b258]
        mov edx, eax
        dec eax
        test edx, edx
        je public_6383771
        lea ebx, ds:[eax+1]
        public_638374d : nop
        call public_6384610
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        add esi, 8
        add edi, 8
        dec ebx
        fmul qword ptr ss : [esp+0x18]
        fadd qword ptr ss : [esp+0x20]
        fadd qword ptr ds : [edi-8]
        fstp qword ptr ds : [esi-8]
        jne public_638374d
        public_6383771 : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_63837d2
        mov eax, dword ptr ds : [public_658b258]
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b24c]
        push eax
        push ecx
        push edx
        mov dword ptr ds : [public_658b938], 0xFFFFFFFF
        mov dword ptr ds : [public_658b93c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b930], 0xFFFFFFFF
        mov dword ptr ds : [public_658b934], 0x7FEFFFFF
        mov dword ptr ds : [public_658b928], 0xFFFFFFFF
        mov dword ptr ds : [public_658b92c], 0x7FEFFFFF
        call public_6384ce0
        add esp, 0xC
        public_63837d2 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6383530)
    }
}

#undef public_63835ae
#undef public_6383600
#undef public_6383650
#undef public_6383652
#undef public_6383666
#undef public_638368f
#undef public_63836c6
#undef public_638370f
#undef public_638374d
#undef public_6383771
#undef public_63837d2
