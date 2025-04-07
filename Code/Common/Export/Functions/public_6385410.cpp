#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6371fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6372680);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6378380);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637c970);
CLANG_FORWARD_PROC_SYMBOL(public_637c990);
CLANG_FORWARD_PROC_SYMBOL(public_637d060);
CLANG_FORWARD_PROC_SYMBOL(public_637d470);
CLANG_FORWARD_PROC_SYMBOL(public_637f470);
CLANG_FORWARD_PROC_SYMBOL(public_63831f0);
CLANG_FORWARD_PROC_SYMBOL(public_6385410);
CLANG_FORWARD_PROC_SYMBOL(public_63865b0);
CLANG_FORWARD_PROC_SYMBOL(public_638a480);

#define public_6385439 _public_6385439
#define public_6385451 _public_6385451
#define public_6385485 _public_6385485
#define public_6385493 _public_6385493
#define public_63854a5 _public_63854a5
#define public_63854b5 _public_63854b5
#define public_63854bd _public_63854bd
#define public_63854c3 _public_63854c3
#define public_638551e _public_638551e
#define public_6385535 _public_6385535
#define public_6385550 _public_6385550
#define public_6385567 _public_6385567
#define public_63855c4 _public_63855c4
#define public_63855ff _public_63855ff

PROC_DECLARE(0x6385410, internal_6385410, public_6385410);
extern "C" NAKED register_t __cdecl internal_6385410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b990]
        push edi
        push eax
        call public_636ec10
        mov edi, eax
        mov eax, dword ptr ds : [public_658b228]
        add esp, 4
        test eax, eax
        je public_6385439
        push 1
        call public_6371fe0
        add esp, 4
        call public_6374610
        public_6385439 : nop
        mov eax, dword ptr ds : [public_658b244]
        test eax, eax
        je public_6385451
        mov ecx, dword ptr ds : [public_658b810]
        push ecx
        call public_63831f0
        add esp, 4
        public_6385451 : nop
        mov edx, dword ptr ds : [public_658b810]
        push edx
        call public_6372680
        mov eax, dword ptr ds : [public_658b07c]
        add esp, 4
        test eax, eax
        jne public_6385485
        mov eax, dword ptr ds : [public_658b088]
        test eax, eax
        jne public_6385485
        fld qword ptr ds : [public_658b090]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6385493
        public_6385485 : nop
        mov eax, dword ptr ds : [public_658b810]
        push eax
        call public_63865b0
        add esp, 4
        public_6385493 : nop
        mov eax, dword ptr ds : [public_658b194]
        test eax, eax
        je public_63854a5
        mov ecx, dword ptr ds : [public_658b7fc]
        push ecx
        jmp public_63854b5
        public_63854a5 : nop
        mov eax, dword ptr ds : [public_658b118]
        test eax, eax
        jne public_63854bd
        mov edx, dword ptr ds : [public_658b7f8]
        push edx
        public_63854b5 : nop
        call public_637f470
        add esp, 4
        public_63854bd : nop
        push esi
        mov esi, offset public_658b118
        public_63854c3 : nop
        mov eax, dword ptr ds : [public_658b810]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_658b7f8]
        push 0
        push 0
        push eax
        push ecx
        push edx
        call public_638a480
        add esi, 4
        add esp, 0x14
        cmp esi, offset public_658b188
        jl public_63854c3
        call public_637c970
        mov eax, dword ptr ds : [public_658b114]
        test eax, eax
        pop esi
        je public_6385535
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        jne public_6385535
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        je public_638551e
        mov eax, dword ptr ds : [public_658b1d4]
        test eax, eax
        je public_6385535
        public_638551e : nop
        mov eax, dword ptr ds : [public_658c714]
        mov ecx, dword ptr ds : [public_658b7fc]
        push 0
        push eax
        push ecx
        call public_637d470
        add esp, 0xC
        public_6385535 : nop
        mov eax, dword ptr ds : [public_658b220]
        test eax, eax
        je public_6385567
        mov eax, dword ptr ds : [public_658bed0]
        test eax, eax
        jg public_6385550
        mov eax, dword ptr ds : [public_658bf00]
        test eax, eax
        jle public_6385567
        public_6385550 : nop
        mov edx, dword ptr ds : [public_658c718]
        mov eax, dword ptr ds : [public_658b7fc]
        push 0
        push edx
        push eax
        call public_637d470
        add esp, 0xC
        public_6385567 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_63855c4
        call public_637c990
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63997b0 @0x638557b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push ecx
        call public_637d060
        mov edx, dword ptr ds : [public_658b7fc]
        push edx
        call public_6378380
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b804]
        add esp, 0xC
        lea eax, ds:[eax*4+4]
        lea ecx, ds:[eax+4]
        push ecx
        push eax
        push edx
        push 0x58
        push 0x18
        push 0x10
        push 0x18
        push 0xC
/*FIXUP push offset public_63f7904 @0x63855b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7904
        call public_6356960
        add esp, 0x24
        public_63855c4 : nop
        mov eax, dword ptr ds : [public_658b990]
        push eax
        call public_636ec10
        add esp, 4
        cmp eax, edi
        pop edi
        je public_63855ff
        mov ecx, dword ptr ds : [public_658b990]
        push ecx
        call public_636ec10
        add esp, 4
        push eax
/*FIXUP push offset public_63f78b8 @0x63855e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f78b8
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_63855ff : nop
        ret 
        UNREACHABLE_TRAP(0x6385410)
    }
}

#undef public_6385439
#undef public_6385451
#undef public_6385485
#undef public_6385493
#undef public_63854a5
#undef public_63854b5
#undef public_63854bd
#undef public_63854c3
#undef public_638551e
#undef public_6385535
#undef public_6385550
#undef public_6385567
#undef public_63855c4
#undef public_63855ff
