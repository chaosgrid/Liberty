#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378380);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637c990);
CLANG_FORWARD_PROC_SYMBOL(public_637d060);
CLANG_FORWARD_PROC_SYMBOL(public_637d470);
CLANG_FORWARD_PROC_SYMBOL(public_637f470);
CLANG_FORWARD_PROC_SYMBOL(public_6385410);
CLANG_FORWARD_PROC_SYMBOL(public_638a940);
CLANG_FORWARD_PROC_SYMBOL(public_638aa10);

#define public_637862c _public_637862c
#define public_6378651 _public_6378651
#define public_63786ca _public_63786ca
#define public_63786da _public_63786da
#define public_63786e8 _public_63786e8
#define public_63786f0 _public_63786f0
#define public_63786fd _public_63786fd
#define public_637871b _public_637871b
#define public_6378722 _public_6378722
#define public_637877d _public_637877d
#define public_637879d _public_637879d
#define public_63787aa _public_63787aa
#define public_63787bd _public_63787bd
#define public_63787d7 _public_63787d7
#define public_63787da _public_63787da
#define public_63787f8 _public_63787f8
#define public_63787fc _public_63787fc

PROC_DECLARE(0x6378600, internal_6378600, public_6378600);
extern "C" NAKED register_t __cdecl internal_6378600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b7fc]
        test eax, eax
        push esi
        je public_63787f8
        mov eax, dword ptr ds : [public_658b91c]
        test eax, eax
        je public_637862c
/*FIXUP push offset public_63f3410 @0x6378617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3410
        call public_6356960
        add esp, 4
        push 1
        call dword ptr ds : [public_6399294]
        public_637862c : nop
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        mov dword ptr ds : [public_658b91c], 1
        jne public_6378651
        mov ecx, dword ptr ds : [public_658b860]
        mov eax, 1
        sub eax, ecx
        mov dword ptr ds : [public_658b860], eax
        public_6378651 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push 0
        push ebx
        push 0
        push edi
/*FIXUP push offset public_63ee94c @0x6378661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        add esp, 0x14
/*FIXUP push offset public_658b268 @0x637866e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x6378673*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
/*FIXUP push offset public_63f33f4 @0x6378678*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f33f4
        call public_6356960
        add esp, 0xC
/*FIXUP push offset public_658b468 @0x6378685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
/*FIXUP push offset public_63f3260 @0x637868a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3260
/*FIXUP push offset public_63f33d4 @0x637868f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f33d4
        call public_6356960
        mov eax, dword ptr ds : [public_658b870]
        add esp, 0xC
        test eax, eax
        jl public_63786fd
        push eax
/*FIXUP push offset public_63f33b0 @0x63786a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f33b0
        call public_6356960
        mov eax, dword ptr ds : [public_658bf58]
        add esp, 8
        test eax, eax
        je public_63786ca
        push eax
/*FIXUP push offset public_63f3398 @0x63786bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3398
        call public_6356960
        add esp, 8
        public_63786ca : nop
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        je public_63786da
/*FIXUP push offset public_63f336c @0x63786d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f336c
        jmp public_63786e8
        public_63786da : nop
        mov eax, dword ptr ds : [public_658b8c0]
        test eax, eax
        je public_63786f0
/*FIXUP push offset public_63f3348 @0x63786e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3348
        public_63786e8 : nop
        call public_6356960
        add esp, 4
/*FIXUP public_63786f0 : nop
        push offset public_63edccc @0x63786f0*/
  FIXUP public_63786f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        public_63786fd : nop
        mov eax, dword ptr ds : [public_658b05c]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x10]
        je public_6378722
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        jne public_637871b
        test edi, edi
        jne public_6378722
        test ebx, ebx
        jne public_6378722
        public_637871b : nop
        call public_6385410
        jmp public_637879d
        public_6378722 : nop
        cmp esi, 2
        je public_637877d
        mov ecx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658bf38]
        inc ecx
        cmp eax, ecx
        jle public_637877d
/*FIXUP push offset public_63f3334 @0x6378737*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3334
        call public_6356960
        mov edx, dword ptr ds : [public_658b7fc]
        push edx
        call public_637f470
        mov eax, dword ptr ds : [public_658b190]
        add esp, 8
        test eax, eax
        je public_637877d
        call public_637c990
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f3324 @0x6378763*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3324
        push eax
        call public_637d060
        mov ecx, dword ptr ds : [public_658b7fc]
        push ecx
        call public_6378380
        add esp, 0xC
        public_637877d : nop
        mov eax, dword ptr ds : [public_658b114]
        test eax, eax
        je public_637879d
        mov edx, dword ptr ds : [public_658c714]
        mov eax, dword ptr ds : [public_658b7fc]
        push 0
        push edx
        push eax
        call public_637d470
        add esp, 0xC
        public_637879d : nop
        test esi, esi
        pop edi
        pop ebx
        jne public_63787aa
        mov esi, 5
        jmp public_63787da
        public_63787aa : nop
        cmp esi, 2
        jne public_63787bd
        mov ecx, dword ptr ds : [public_658b7fc]
        push ecx
        call public_638aa10
        jmp public_63787d7
        public_63787bd : nop
        cmp esi, 3
        jne public_63787da
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_63787da
        mov edx, dword ptr ds : [public_658b7fc]
        push edx
        call public_638a940
        public_63787d7 : nop
        add esp, 4
        public_63787da : nop
        mov eax, dword ptr ds : [public_658b8ac]
        test eax, eax
        je public_63787fc
/*FIXUP push offset public_63f32f0 @0x63787e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f32f0
        call public_6356960
        add esp, 4
        push 1
        call dword ptr ds : [public_6399294]
        public_63787f8 : nop
        mov esi, dword ptr ss : [esp+8]
        public_63787fc : nop
        push esi
/*FIXUP push offset public_658b724 @0x63787fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b724
        mov dword ptr ds : [public_658b8ac], 1
        call dword ptr ds : [public_63992b0]
        UNREACHABLE_TRAP(0x6378600)
    }
}

#undef public_637862c
#undef public_6378651
#undef public_63786ca
#undef public_63786da
#undef public_63786e8
#undef public_63786f0
#undef public_63786fd
#undef public_637871b
#undef public_6378722
#undef public_637877d
#undef public_637879d
#undef public_63787aa
#undef public_63787bd
#undef public_63787d7
#undef public_63787da
#undef public_63787f8
#undef public_63787fc
