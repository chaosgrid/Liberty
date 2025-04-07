#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3f1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f2e0);

#define public_6d3f319 _public_6d3f319
#define public_6d3f321 _public_6d3f321
#define public_6d3f351 _public_6d3f351
#define public_6d3f356 _public_6d3f356
#define public_6d3f35f _public_6d3f35f
#define public_6d3f366 _public_6d3f366
#define public_6d3f377 _public_6d3f377
#define public_6d3f383 _public_6d3f383
#define public_6d3f393 _public_6d3f393
#define public_6d3f3a7 _public_6d3f3a7
#define public_6d3f3bb _public_6d3f3bb
#define public_6d3f3c1 _public_6d3f3c1
#define public_6d3f3d7 _public_6d3f3d7
#define public_6d3f408 _public_6d3f408
#define public_6d3f40f _public_6d3f40f

PROC_DECLARE(0x6d3f2e0, internal_6d3f2e0, public_6d3f2e0);
extern "C" NAKED register_t __cdecl internal_6d3f2e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        push eax
        call public_6d3f1d0
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        xor edx, edx
        mov dx, ax
        add esp, 8
        add edx, 0xFFFFFFD0
        cmp edx, 0x48
        ja public_6d3f356
/*FIXUP movzx edx, byte ptr ds : [edx+public_6d3f42c] @0x6d3f30b*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d3f418] @0x6d3f312*/
  JMPTB cmp edx, 0
  JMPTB jne public_4c00000000003ece
  JMPTB mov edx, 0
  JMPTB public_4c00000000003ece : nop
        je public_6d3f319
  JMPTB cmp edx, 1
  JMPTB jne public_4c00000000003eca
  JMPTB mov edx, 0
  JMPTB public_4c00000000003eca : nop
        je public_6d3f319
  JMPTB cmp edx, 2
  JMPTB jne public_4c00000000003ec6
  JMPTB mov edx, 0
  JMPTB public_4c00000000003ec6 : nop
        je public_6d3f319
  JMPTB cmp edx, 3
  JMPTB jne public_4c00000000003ec2
  JMPTB mov edx, 0
  JMPTB public_4c00000000003ec2 : nop
        je public_6d3f319
  JMPTB cmp edx, 4
  JMPTB jne public_4c00000000003ebe
  JMPTB mov edx, 0
  JMPTB public_4c00000000003ebe : nop
        je public_6d3f319
  JMPTB cmp edx, 5
  JMPTB jne public_4c00000000003eba
  JMPTB mov edx, 0
  JMPTB public_4c00000000003eba : nop
        je public_6d3f319
  JMPTB cmp edx, 6
  JMPTB jne public_4c00000000003eb6
  JMPTB mov edx, 0
  JMPTB public_4c00000000003eb6 : nop
        je public_6d3f319
  JMPTB cmp edx, 7
  JMPTB jne public_4c00000000003eb2
  JMPTB mov edx, 0
  JMPTB public_4c00000000003eb2 : nop
        je public_6d3f319
  JMPTB cmp edx, 8
  JMPTB jne public_4c00000000003eae
  JMPTB mov edx, 4
  JMPTB public_4c00000000003eae : nop
        je public_6d3f356
  JMPTB cmp edx, 9
  JMPTB jne public_4c00000000003eaa
  JMPTB mov edx, 4
  JMPTB public_4c00000000003eaa : nop
        je public_6d3f356
  JMPTB cmp edx, 0xA
  JMPTB jne public_4c00000000003ea6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003ea6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0xB
  JMPTB jne public_4c00000000003ea2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003ea2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0xC
  JMPTB jne public_4c00000000003e9e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e9e : nop
        je public_6d3f356
  JMPTB cmp edx, 0xD
  JMPTB jne public_4c00000000003e9a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e9a : nop
        je public_6d3f356
  JMPTB cmp edx, 0xE
  JMPTB jne public_4c00000000003e96
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e96 : nop
        je public_6d3f356
  JMPTB cmp edx, 0xF
  JMPTB jne public_4c00000000003e92
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e92 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x10
  JMPTB jne public_4c00000000003e8e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e8e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x11
  JMPTB jne public_4c00000000003e8a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e8a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x12
  JMPTB jne public_4c00000000003e86
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e86 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x13
  JMPTB jne public_4c00000000003e82
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e82 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x14
  JMPTB jne public_4c00000000003e7e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e7e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x15
  JMPTB jne public_4c00000000003e7a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e7a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x16
  JMPTB jne public_4c00000000003e76
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e76 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x17
  JMPTB jne public_4c00000000003e72
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e72 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x18
  JMPTB jne public_4c00000000003e6e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e6e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x19
  JMPTB jne public_4c00000000003e6a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e6a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1A
  JMPTB jne public_4c00000000003e66
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e66 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1B
  JMPTB jne public_4c00000000003e62
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e62 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1C
  JMPTB jne public_4c00000000003e5e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e5e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1D
  JMPTB jne public_4c00000000003e5a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e5a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1E
  JMPTB jne public_4c00000000003e56
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e56 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x1F
  JMPTB jne public_4c00000000003e52
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e52 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x20
  JMPTB jne public_4c00000000003e4e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e4e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x21
  JMPTB jne public_4c00000000003e4a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e4a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x22
  JMPTB jne public_4c00000000003e46
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e46 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x23
  JMPTB jne public_4c00000000003e42
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e42 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x24
  JMPTB jne public_4c00000000003e3e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e3e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x25
  JMPTB jne public_4c00000000003e3a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e3a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x26
  JMPTB jne public_4c00000000003e36
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e36 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x27
  JMPTB jne public_4c00000000003e32
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e32 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x28
  JMPTB jne public_4c00000000003e2e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e2e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x29
  JMPTB jne public_4c00000000003e2a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e2a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2A
  JMPTB jne public_4c00000000003e26
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e26 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2B
  JMPTB jne public_4c00000000003e22
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e22 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2C
  JMPTB jne public_4c00000000003e1e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e1e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2D
  JMPTB jne public_4c00000000003e1a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e1a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2E
  JMPTB jne public_4c00000000003e16
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e16 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x2F
  JMPTB jne public_4c00000000003e12
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e12 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x30
  JMPTB jne public_4c00000000003e0e
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e0e : nop
        je public_6d3f356
  JMPTB cmp edx, 0x31
  JMPTB jne public_4c00000000003e0a
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e0a : nop
        je public_6d3f356
  JMPTB cmp edx, 0x32
  JMPTB jne public_4c00000000003e06
  JMPTB mov edx, 4
  JMPTB public_4c00000000003e06 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x33
  JMPTB jne public_4c00000000003e02
  JMPTB mov edx, 1
  JMPTB public_4c00000000003e02 : nop
        je public_6d3f3d7
  JMPTB cmp edx, 0x34
  JMPTB jne public_4c00000000003dfe
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dfe : nop
        je public_6d3f356
  JMPTB cmp edx, 0x35
  JMPTB jne public_4c00000000003dfa
  JMPTB mov edx, 2
  JMPTB public_4c00000000003dfa : nop
        je public_6d3f351
  JMPTB cmp edx, 0x36
  JMPTB jne public_4c00000000003df6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003df6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x37
  JMPTB jne public_4c00000000003df2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003df2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x38
  JMPTB jne public_4c00000000003dee
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dee : nop
        je public_6d3f356
  JMPTB cmp edx, 0x39
  JMPTB jne public_4c00000000003dea
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dea : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3A
  JMPTB jne public_4c00000000003de6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003de6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3B
  JMPTB jne public_4c00000000003de2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003de2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3C
  JMPTB jne public_4c00000000003dde
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dde : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3D
  JMPTB jne public_4c00000000003dda
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dda : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3E
  JMPTB jne public_4c00000000003dd6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dd6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x3F
  JMPTB jne public_4c00000000003dd2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dd2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x40
  JMPTB jne public_4c00000000003dce
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dce : nop
        je public_6d3f356
  JMPTB cmp edx, 0x41
  JMPTB jne public_4c00000000003dca
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dca : nop
        je public_6d3f356
  JMPTB cmp edx, 0x42
  JMPTB jne public_4c00000000003dc6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dc6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x43
  JMPTB jne public_4c00000000003dc2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dc2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x44
  JMPTB jne public_4c00000000003dbe
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dbe : nop
        je public_6d3f356
  JMPTB cmp edx, 0x45
  JMPTB jne public_4c00000000003dba
  JMPTB mov edx, 4
  JMPTB public_4c00000000003dba : nop
        je public_6d3f356
  JMPTB cmp edx, 0x46
  JMPTB jne public_4c00000000003db6
  JMPTB mov edx, 4
  JMPTB public_4c00000000003db6 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x47
  JMPTB jne public_4c00000000003db2
  JMPTB mov edx, 4
  JMPTB public_4c00000000003db2 : nop
        je public_6d3f356
  JMPTB cmp edx, 0x48
  JMPTB jne public_4c00000000003dae
  JMPTB mov edx, 3
  JMPTB public_4c00000000003dae : nop
        je public_6d3f35f
  JMPTB int 3
        public_6d3f319 : nop
        add ecx, 2
        lea edi, ds:[eax-0x30]
        mov dword ptr ds : [esi], ecx
        public_6d3f321 : nop
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        cmp ax, 0x30
        jb public_6d3f40f
        cmp ax, 0x37
        ja public_6d3f40f
        lea edi, ds:[eax+edi*8-0x30]
        lea eax, ds:[ecx+2]
        push ebx
        push eax
        mov dword ptr ds : [esi], eax
        call public_6d3f1d0
        add esp, 8
        jmp public_6d3f321
        public_6d3f351 : nop
        mov eax, 0x1B
        public_6d3f356 : nop
        add ecx, 2
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebx
        ret 
        public_6d3f35f : nop
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        xor edi, edi
        public_6d3f366 : nop
        mov ecx, dword ptr ds : [esi]
        mov ax, word ptr ds : [ecx]
        cmp ax, 0x30
        jb public_6d3f377
        cmp ax, 0x39
        jbe public_6d3f393
        public_6d3f377 : nop
        cmp ax, 0x61
        jb public_6d3f383
        cmp ax, 0x66
        jbe public_6d3f393
        public_6d3f383 : nop
        cmp ax, 0x41
        jb public_6d3f40f
        cmp ax, 0x46
        ja public_6d3f40f
        public_6d3f393 : nop
        cmp ax, 0x61
        jb public_6d3f3a7
        cmp ax, 0x66
        ja public_6d3f3a7
        movzx eax, ax
        sub eax, 0x57
        jmp public_6d3f3c1
        public_6d3f3a7 : nop
        cmp ax, 0x41
        jb public_6d3f3bb
        cmp ax, 0x46
        ja public_6d3f3bb
        movzx eax, ax
        sub eax, 0x37
        jmp public_6d3f3c1
        public_6d3f3bb : nop
        movzx eax, ax
        sub eax, 0x30
        public_6d3f3c1 : nop
        shl edi, 4
        add edi, eax
        lea eax, ds:[ecx+2]
        push ebx
        push eax
        mov dword ptr ds : [esi], eax
        call public_6d3f1d0
        add esp, 8
        jmp public_6d3f366
        public_6d3f3d7 : nop
        lea eax, ds:[ecx+2]
        push ebx
        push eax
        mov dword ptr ds : [esi], eax
        call public_6d3f1d0
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        add ecx, 2
        add esp, 8
        cmp ax, 0x61
        mov dword ptr ds : [esi], ecx
        jb public_6d3f408
        cmp ax, 0x7A
        ja public_6d3f408
        push eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 4
        public_6d3f408 : nop
        pop edi
        pop esi
        xor eax, 0x40
        pop ebx
        ret 
        public_6d3f40f : nop
        mov ax, di
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d3f2e0)
        ASM_EXPORT_ENTRY_FIRST(0x6d3f319, public_6d3f319)
        ASM_EXPORT_ENTRY(0x6d3f351, public_6d3f351)
        ASM_EXPORT_ENTRY(0x6d3f356, public_6d3f356)
        ASM_EXPORT_ENTRY(0x6d3f35f, public_6d3f35f)
        ASM_EXPORT_ENTRY_LAST(0x6d3f3d7, public_6d3f3d7)
    }
}

#undef public_6d3f319
#undef public_6d3f321
#undef public_6d3f351
#undef public_6d3f356
#undef public_6d3f35f
#undef public_6d3f366
#undef public_6d3f377
#undef public_6d3f383
#undef public_6d3f393
#undef public_6d3f3a7
#undef public_6d3f3bb
#undef public_6d3f3c1
#undef public_6d3f3d7
#undef public_6d3f408
#undef public_6d3f40f

#pragma init_seg(compiler)
extern "C" void const* const public_6d3f319 = __AsmFindLabelExport(&internal_6d3f2e0, 0x6d3f319);
extern "C" void const* const public_6d3f351 = __AsmFindLabelExport(&internal_6d3f2e0, 0x6d3f351);
extern "C" void const* const public_6d3f356 = __AsmFindLabelExport(&internal_6d3f2e0, 0x6d3f356);
extern "C" void const* const public_6d3f35f = __AsmFindLabelExport(&internal_6d3f2e0, 0x6d3f35f);
extern "C" void const* const public_6d3f3d7 = __AsmFindLabelExport(&internal_6d3f2e0, 0x6d3f3d7);
