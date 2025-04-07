#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636f500);
CLANG_FORWARD_PROC_SYMBOL(public_6370970);
CLANG_FORWARD_PROC_SYMBOL(public_6372a30);
CLANG_FORWARD_PROC_SYMBOL(public_6373b50);
CLANG_FORWARD_PROC_SYMBOL(public_6374470);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637d510);
CLANG_FORWARD_PROC_SYMBOL(public_637dc10);
CLANG_FORWARD_PROC_SYMBOL(public_637de20);
CLANG_FORWARD_PROC_SYMBOL(public_637dff0);
CLANG_FORWARD_PROC_SYMBOL(public_637f220);
CLANG_FORWARD_PROC_SYMBOL(public_638c8e0);
CLANG_FORWARD_PROC_SYMBOL(public_638cf40);

#define public_637d54e _public_637d54e
#define public_637d553 _public_637d553
#define public_637d59d _public_637d59d
#define public_637d5d7 _public_637d5d7
#define public_637d5f4 _public_637d5f4
#define public_637d629 _public_637d629
#define public_637d659 _public_637d659
#define public_637d66f _public_637d66f
#define public_637d698 _public_637d698
#define public_637d6d1 _public_637d6d1
#define public_637d6fc _public_637d6fc
#define public_637d701 _public_637d701
#define public_637d718 _public_637d718
#define public_637d753 _public_637d753
#define public_637d781 _public_637d781

PROC_DECLARE(0x637d510, internal_637d510, public_637d510);
extern "C" NAKED register_t __cdecl internal_637d510()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        mov eax, dword ptr ds : [public_658b1d4]
        test eax, eax
        push esi
        mov esi, 1
        push edi
        mov dword ptr ds : [public_658b860], esi
        jne public_637d54e
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_637d54e
        call public_6372a30
        call public_637de20
        jmp public_637d553
        public_637d54e : nop
        call public_637dc10
        public_637d553 : nop
        mov eax, dword ptr ds : [public_658b1f8]
        test eax, eax
        mov edi, dword ptr ds : [public_63991e8]
        jne public_637d701
        mov eax, dword ptr ds : [public_658b1f4]
        test eax, eax
        jne public_637d701
        mov eax, dword ptr ds : [public_658b8e8]
        test eax, eax
        mov eax, dword ptr ds : [public_658b1fc]
        je public_637d5d7
        test eax, eax
        jne public_637d59d
        mov ecx, dword ptr ds : [public_658b0a0]
        test ecx, ecx
        je public_637d59d
        push esi
        call public_638cf40
        mov eax, dword ptr ds : [public_658b1fc]
        add esp, 4
        public_637d59d : nop
        mov ecx, dword ptr ds : [public_658b8e8]
        test ecx, ecx
        je public_637d5d7
        test eax, eax
        jne public_637d5d7
        mov ecx, dword ptr ds : [public_658b8ec]
        test ecx, ecx
        jne public_637d5d7
        cmp dword ptr ds : [public_658b078], 2
        jl public_637d701
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f535c @0x637d5c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f535c
        push eax
        call edi
        add esp, 8
        jmp public_637d701
        public_637d5d7 : nop
        mov ecx, dword ptr ds : [public_658b0a0]
        test ecx, ecx
        jne public_637d629
        cmp dword ptr ds : [public_658b24c], 5
        jle public_637d5f4
        mov ecx, dword ptr ds : [public_658b0e8]
        test ecx, ecx
        jne public_637d629
        public_637d5f4 : nop
        mov ecx, dword ptr ds : [public_658b0e4]
        test ecx, ecx
        jne public_637d66f
        test eax, eax
        je public_637d698
        mov ecx, dword ptr ds : [public_658b044]
        mov edx, dword ptr ds : [public_658b040]
        mov eax, dword ptr ds : [public_658b0b4]
        push esi
        push ecx
        mov ecx, dword ptr ds : [public_658b0b0]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63f533c @0x637d622*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f533c
        jmp public_637d659
        public_637d629 : nop
        mov ecx, dword ptr ds : [public_658b0e4]
        xor edx, edx
        test ecx, ecx
        mov ecx, dword ptr ds : [public_658b040]
        setne dl
        dec edx
        and edx, eax
        mov eax, dword ptr ds : [public_658b044]
        push edx
        mov edx, dword ptr ds : [public_658b0b4]
        push eax
        mov eax, dword ptr ds : [public_658b0b0]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f5328 @0x637d654*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5328
        public_637d659 : nop
        call public_638c8e0
        mov eax, dword ptr ds : [public_658b0e4]
        add esp, 0x18
        test eax, eax
        je public_637d698
        mov eax, dword ptr ds : [public_658b1fc]
        public_637d66f : nop
        mov ecx, dword ptr ds : [public_658b04c]
        mov edx, dword ptr ds : [public_658b048]
        push eax
        mov eax, dword ptr ds : [public_658b0bc]
        push ecx
        mov ecx, dword ptr ds : [public_658b0b8]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63f5314 @0x637d68b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5314
        call public_638c8e0
        add esp, 0x18
        public_637d698 : nop
        mov edx, dword ptr ds : [public_658b820]
        cmp edx, dword ptr ds : [public_658b810]
        jne public_637d6d1
        lea eax, ss:[esp+0xC]
        push eax
        push 0
        mov dword ptr ds : [public_658b8a4], esi
        call public_637f220
        mov dword ptr ds : [public_658b8a4], 0
        call public_636f500
        push 0
        call public_6374470
        add esp, 0xC
        public_637d6d1 : nop
        mov eax, dword ptr ds : [public_658b238]
        test eax, eax
        je public_637d701
        mov eax, dword ptr ds : [public_658b1cc]
        test eax, eax
        je public_637d6fc
        push 0
        push 0
        call public_637dff0
        add esp, 8
/*FIXUP push offset public_63f52f4 @0x637d6ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f52f4
        call public_6356960
        add esp, 4
        public_637d6fc : nop
        call public_6370970
        public_637d701 : nop
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_637d718
        mov eax, dword ptr ds : [public_658b880]
        test eax, eax
        jne public_637d718
        call public_6373b50
        public_637d718 : nop
        mov ecx, dword ptr ds : [public_658b990]
        push ecx
        call public_636ec10
        add esp, 4
        test eax, eax
        je public_637d753
        mov edx, dword ptr ds : [public_658b990]
        push edx
        call public_636ec10
        add esp, 4
        push eax
/*FIXUP push offset public_63f52b4 @0x637d73b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f52b4
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_637d753 : nop
        mov ecx, dword ptr ds : [public_658b860]
        mov eax, esi
        sub eax, ecx
        mov dword ptr ds : [public_658b860], eax
        cmp dword ptr ds : [public_658b078], esi
        mov dword ptr ds : [public_658b8cc], esi
        jl public_637d781
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5294 @0x637d776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5294
        push ecx
        call edi
        add esp, 8
        public_637d781 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637d510)
    }
}

#undef public_637d54e
#undef public_637d553
#undef public_637d59d
#undef public_637d5d7
#undef public_637d5f4
#undef public_637d629
#undef public_637d659
#undef public_637d66f
#undef public_637d698
#undef public_637d6d1
#undef public_637d6fc
#undef public_637d701
#undef public_637d718
#undef public_637d753
#undef public_637d781
