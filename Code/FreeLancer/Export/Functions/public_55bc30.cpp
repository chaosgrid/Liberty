#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55bc30);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_55bc4e _public_55bc4e
#define public_55bc6d _public_55bc6d
#define public_55bc90 _public_55bc90
#define public_55bcaf _public_55bcaf
#define public_55bcd6 _public_55bcd6
#define public_55bcf5 _public_55bcf5
#define public_55bd19 _public_55bd19
#define public_55bd2a _public_55bd2a
#define public_55bd36 _public_55bd36
#define public_55bd42 _public_55bd42
#define public_55bd5e _public_55bd5e
#define public_55bd63 _public_55bd63

PROC_DECLARE(0x55bc30, internal_55bc30, public_55bc30);
extern "C" NAKED register_t __cdecl internal_55bc30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[edx-0xC]
        cmp eax, 0x45
        ja public_55bd63
/*FIXUP movzx eax, byte ptr ds : [eax+public_55bd98] @0x55bc40*/
/*FIXUP jmp dword ptr ds : [eax*4+public_55bd6c] @0x55bc47*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000ca29
  JMPTB mov eax, 0
  JMPTB public_4c0000000000ca29 : nop
        je public_55bcf5
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000ca25
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca25 : nop
        je public_55bd63
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000ca21
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca21 : nop
        je public_55bd63
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000ca1d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca1d : nop
        je public_55bd63
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000ca19
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca19 : nop
        je public_55bd63
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000ca15
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca15 : nop
        je public_55bd63
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000ca11
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca11 : nop
        je public_55bd63
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000ca0d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca0d : nop
        je public_55bd63
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000ca09
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca09 : nop
        je public_55bd63
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000ca05
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca05 : nop
        je public_55bd63
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000ca01
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000ca01 : nop
        je public_55bd63
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000c9fd
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9fd : nop
        je public_55bd63
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000c9f9
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9f9 : nop
        je public_55bd63
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000c9f5
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9f5 : nop
        je public_55bd63
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000c9f1
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9f1 : nop
        je public_55bd63
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000c9ed
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9ed : nop
        je public_55bd63
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000c9e9
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9e9 : nop
        je public_55bd63
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000c9e5
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9e5 : nop
        je public_55bd63
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000c9e1
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9e1 : nop
        je public_55bd63
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000c9dd
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9dd : nop
        je public_55bd63
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000c9d9
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9d9 : nop
        je public_55bd63
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000c9d5
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9d5 : nop
        je public_55bd63
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000c9d1
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9d1 : nop
        je public_55bd63
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000c9cd
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9cd : nop
        je public_55bd63
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000c9c9
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9c9 : nop
        je public_55bd63
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000c9c5
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9c5 : nop
        je public_55bd63
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000c9c1
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9c1 : nop
        je public_55bd63
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000c9bd
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9bd : nop
        je public_55bd63
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000c9b9
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9b9 : nop
        je public_55bd63
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000c9b5
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9b5 : nop
        je public_55bd63
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000c9b1
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9b1 : nop
        je public_55bd63
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000c9ad
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c9ad : nop
        je public_55bd63
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000c9a9
  JMPTB mov eax, 1
  JMPTB public_4c0000000000c9a9 : nop
        je public_55bd2a
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000c9a5
  JMPTB mov eax, 2
  JMPTB public_4c0000000000c9a5 : nop
        je public_55bd36
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000c9a1
  JMPTB mov eax, 3
  JMPTB public_4c0000000000c9a1 : nop
        je public_55bd19
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000c99d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c99d : nop
        je public_55bd63
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000c999
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c999 : nop
        je public_55bd63
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000c995
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c995 : nop
        je public_55bd63
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000c991
  JMPTB mov eax, 4
  JMPTB public_4c0000000000c991 : nop
        je public_55bd42
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000c98d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000c98d : nop
        je public_55bcd6
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000c989
  JMPTB mov eax, 6
  JMPTB public_4c0000000000c989 : nop
        je public_55bcaf
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000c985
  JMPTB mov eax, 7
  JMPTB public_4c0000000000c985 : nop
        je public_55bc90
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000c981
  JMPTB mov eax, 8
  JMPTB public_4c0000000000c981 : nop
        je public_55bc6d
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000c97d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c97d : nop
        je public_55bd63
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000c979
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c979 : nop
        je public_55bd63
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000c975
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c975 : nop
        je public_55bd63
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000c971
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c971 : nop
        je public_55bd63
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000c96d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c96d : nop
        je public_55bd63
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000c969
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c969 : nop
        je public_55bd63
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000c965
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c965 : nop
        je public_55bd63
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000c961
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c961 : nop
        je public_55bd63
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000c95d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c95d : nop
        je public_55bd63
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000c959
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c959 : nop
        je public_55bd63
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000c955
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c955 : nop
        je public_55bd63
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000c951
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c951 : nop
        je public_55bd63
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000c94d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c94d : nop
        je public_55bd63
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000c949
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c949 : nop
        je public_55bd63
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000c945
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c945 : nop
        je public_55bd63
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000c941
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c941 : nop
        je public_55bd63
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000c93d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c93d : nop
        je public_55bd63
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000c939
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c939 : nop
        je public_55bd63
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000c935
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c935 : nop
        je public_55bd63
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000c931
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c931 : nop
        je public_55bd63
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000c92d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c92d : nop
        je public_55bd63
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000c929
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c929 : nop
        je public_55bd63
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000c925
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c925 : nop
        je public_55bd63
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000c921
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c921 : nop
        je public_55bd63
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000c91d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c91d : nop
        je public_55bd63
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000c919
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000c919 : nop
        je public_55bd63
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000c915
  JMPTB mov eax, 9
  JMPTB public_4c0000000000c915 : nop
        je public_55bc4e
  JMPTB int 3
        public_55bc4e : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov byte ptr ds : [ecx+0x333], 0
        je public_55bd5e
        mov byte ptr ds : [ecx+0x333], 1
        xor eax, eax
        ret 0xC
        public_55bc6d : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, 1
        cmp edx, eax
        mov byte ptr ds : [ecx+0x332], 0
        jne public_55bd5e
        mov byte ptr ds : [ecx+0x332], al
        xor eax, eax
        ret 0xC
        public_55bc90 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov byte ptr ds : [ecx+0x337], 0
        je public_55bd5e
        mov byte ptr ds : [ecx+0x337], 1
        xor eax, eax
        ret 0xC
        public_55bcaf : nop
        mov al, byte ptr ds : [ecx+0x331]
        mov edx, dword ptr ss : [esp+8]
        and al, 0xEF
        test edx, edx
        mov byte ptr ds : [ecx+0x331], al
        je public_55bd5e
        or al, 0x10
        mov byte ptr ds : [ecx+0x331], al
        xor eax, eax
        ret 0xC
        public_55bcd6 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x370], eax
        cmp dword ptr ss : [esp+0xC], 1
        sete dl
        mov byte ptr ds : [ecx+0x336], dl
        xor eax, eax
        ret 0xC
        public_55bcf5 : nop
        mov edx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ecx+0x330]
        test edx, edx
        setne dl
        shl dl, 6
        xor dl, al
        and dl, 0x40
        xor dl, al
        mov byte ptr ds : [ecx+0x330], dl
        xor eax, eax
        ret 0xC
        public_55bd19 : nop
        mov eax, dword ptr ds : [ecx+0x34C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_55bd2a : nop
        or byte ptr ds : [ecx+0x330], 2
        xor eax, eax
        ret 0xC
        public_55bd36 : nop
        and byte ptr ds : [ecx+0x330], 0xFD
        xor eax, eax
        ret 0xC
        public_55bd42 : nop
        mov edx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ecx+0x331]
        test edx, edx
        setne dl
        xor dl, al
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ecx+0x331], dl
        public_55bd5e : nop
        xor eax, eax
        ret 0xC
        public_55bd63 : nop
        mov dword ptr ss : [esp+4], edx
        jmp public_5a13c0
        UNREACHABLE_TRAP(0x55bc30)
        ASM_EXPORT_ENTRY_SINGLE(0x55bd63, public_55bd63)
    }
}

#undef public_55bc4e
#undef public_55bc6d
#undef public_55bc90
#undef public_55bcaf
#undef public_55bcd6
#undef public_55bcf5
#undef public_55bd19
#undef public_55bd2a
#undef public_55bd36
#undef public_55bd42
#undef public_55bd5e
#undef public_55bd63

#pragma init_seg(compiler)
extern "C" void const* const public_55bd63 = __AsmFindLabelExport(&internal_55bc30, 0x55bd63);
