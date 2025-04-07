#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f47590);
CLANG_FORWARD_PROC_SYMBOL(public_6f594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5bb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f5beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f63a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f67440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf923);

#define public_6f5bee2 _public_6f5bee2
#define public_6f5bef2 _public_6f5bef2
#define public_6f5befc _public_6f5befc
#define public_6f5bf10 _public_6f5bf10
#define public_6f5bf3b _public_6f5bf3b
#define public_6f5bf45 _public_6f5bf45
#define public_6f5bf86 _public_6f5bf86
#define public_6f5c033 _public_6f5c033
#define public_6f5c0e9 _public_6f5c0e9
#define public_6f5c0ec _public_6f5c0ec
#define public_6f5c12e _public_6f5c12e
#define public_6f5c140 _public_6f5c140
#define public_6f5c177 _public_6f5c177
#define public_6f5c18a _public_6f5c18a
#define public_6f5c19f _public_6f5c19f
#define public_6f5c1f0 _public_6f5c1f0
#define public_6f5c1f7 _public_6f5c1f7
#define public_6f5c214 _public_6f5c214
#define public_6f5c2d3 _public_6f5c2d3
#define public_6f5c2d6 _public_6f5c2d6
#define public_6f5c314 _public_6f5c314
#define public_6f5c321 _public_6f5c321
#define public_6f5c358 _public_6f5c358
#define public_6f5c36b _public_6f5c36b
#define public_6f5c37b _public_6f5c37b
#define public_6f5c3ae _public_6f5c3ae
#define public_6f5c3b0 _public_6f5c3b0

PROC_DECLARE(0x6f5beb0, internal_6f5beb0, public_6f5beb0);
extern "C" NAKED register_t __cdecl internal_6f5beb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf923 @0x6f5beb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf923
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+4]
        xor esi, esi
        cmp edi, eax
        je public_6f5befc
        public_6f5bee2 : nop
        mov ecx, dword ptr ds : [edi]
        add ecx, 0x18
        call public_6ef9dc0
        cmp eax, esi
        jbe public_6f5bef2
        mov esi, eax
        public_6f5bef2 : nop
        mov eax, dword ptr ss : [ebp+8]
        add edi, 4
        cmp edi, eax
        jne public_6f5bee2
        public_6f5befc : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f5bf45
        nop 
        lea esp, ss:[esp]
        public_6f5bf10 : nop
        mov ecx, dword ptr ds : [edi]
        add ecx, 0x18
        call public_6ef9dc0
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 0
        fild qword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6fbbb38]
        call public_6fa9130
        cmp eax, esi
        jbe public_6f5bf3b
        mov esi, eax
        public_6f5bf3b : nop
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6f5bf10
        public_6f5bf45 : nop
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [public_6fb36a0]
        xor edi, edi
        test al, al
        jne public_6f5bf86
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xD0]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_6fcf2fc @0x6f5bf69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf2fc
        push ecx
        push edx
        mov dword ptr ss : [esp+0x2C], 0
        call public_6f67440
        add esp, 0x14
        sub esi, eax
        mov dword ptr ss : [esp+0x24], esi
        public_6f5bf86 : nop
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x54], al
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0xC8], edi
        mov byte ptr ss : [esp+0x44], cl
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], edi
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        push ebx
        push ebp
        mov byte ptr ss : [esp+0xD8], 1
        call public_6f5bb40
        call public_6efec10
        fstp dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0xE8]
        lea ecx, ss:[esp+0x2F]
        push ecx
        lea edx, ss:[esp+0x27]
        push edx
        add eax, 0x24
/*FIXUP push offset public_6fd0e54 @0x6f5bfeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        push eax
        mov dword ptr ss : [esp+0x40], edi
        mov byte ptr ss : [esp+0x3F], 0
        mov byte ptr ss : [esp+0x33], 1
        call public_6f616e0
        add esp, 0x20
        test al, al
        je public_6f5c3b0
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        mov edi, dword ptr ss : [esp+0xD4]
        je public_6f5c1f7
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f5c1f7
        xor ebx, ebx
        public_6f5c033 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6f5c1f0
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae public_6f5c1f0
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, dword ptr ss : [esp+0x24]
        jge public_6f5c1f0
        mov esi, dword ptr ds : [ecx+ebx*4]
/*FIXUP push offset public_6fd0e54 @0x6f5c05f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ss : [esp+0x44], 0
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x48], 0
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0xE8]
        sub esp, 0x30
        mov dword ptr ss : [esp+0x7C], 0
        mov ecx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esp
        mov dword ptr ss : [esp+0x68], esp
        push edx
        add esi, 0x18
        call public_6f594c0
        mov eax, dword ptr ds : [public_6fd0e64]
        push edi
        push eax
        push 0
        push 1
        lea ecx, ss:[esp+0xB4]
        call public_6f63a80
        mov ecx, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [ecx+ebx*4]
        mov byte ptr ss : [esp+0xC8], 2
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f5c0e9
        fld dword ptr ds : [public_6fb5e84]
        jmp public_6f5c0ec
        public_6f5c0e9 : nop
        fld dword ptr ds : [ecx+ebx*4]
        public_6f5c0ec : nop
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f5c19f
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 5
        jp public_6f5c12e
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_6f5c12e : nop
        fld dword ptr ss : [esp+0x14]
        call public_6fa9130
        mov dword ptr ss : [esp+0x30], eax
        nop 
        lea esp, ss:[esp]
        public_6f5c140 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x2C], ecx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, esi
        call public_6ef9a60
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, eax
        add ecx, ebp
        test edi, edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f5c177
        push 0
        mov ecx, edi
        call public_6f47590
        public_6f5c177 : nop
        test ebp, ebp
        je public_6f5c18a
        fild dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f5c140
        public_6f5c18a : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0xDC]
        add eax, edx
        mov dword ptr ss : [esp+0x20], eax
        public_6f5c19f : nop
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xB4]
        push eax
        push ecx
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0xD0], 1
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0xB4]
        push edx
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0xB4], eax
        mov dword ptr ss : [esp+0xB8], eax
        mov dword ptr ss : [esp+0xBC], eax
        inc ebx
        jmp public_6f5c033
        public_6f5c1f0 : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        public_6f5c1f7 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6f5c3ae
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f5c3ae
        xor ebx, ebx
        public_6f5c214 : nop
        mov eax, dword ptr ss : [esp+0xE0]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6f5c3ae
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae public_6f5c3ae
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ss : [esp+0x24]
        jge public_6f5c3ae
        mov esi, dword ptr ds : [ecx+ebx*4]
/*FIXUP push offset public_6fd0e54 @0x6f5c247*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ss : [esp+0x44], 0
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x48], 0
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0xE8]
        sub esp, 0x30
        mov dword ptr ss : [esp+0x7C], 0
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esp
        mov dword ptr ss : [esp+0x68], esp
        push eax
        add esi, 0x18
        call public_6f594c0
        mov ecx, dword ptr ds : [public_6fd0e64]
        push edi
        push ecx
        xor ebp, ebp
        push ebp
        push 1
        lea ecx, ss:[esp+0xB4]
        call public_6f63a80
        mov ecx, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+ebx*4]
        mov byte ptr ss : [esp+0xC8], 3
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f5c2d3
        fld dword ptr ds : [public_6fb5e84]
        jmp public_6f5c2d6
        public_6f5c2d3 : nop
        fld dword ptr ds : [ecx+ebx*4]
        public_6f5c2d6 : nop
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ebp
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f5c37b
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 5
        jp public_6f5c314
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_6f5c314 : nop
        fld dword ptr ss : [esp+0x14]
        call public_6fa9130
        mov dword ptr ss : [esp+0x28], eax
        public_6f5c321 : nop
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, esi
        call public_6ef9a60
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, eax
        add ecx, ebp
        test edi, edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f5c358
        push 0
        mov ecx, edi
        call public_6f47590
        public_6f5c358 : nop
        test ebp, ebp
        je public_6f5c36b
        fild dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f5c321
        public_6f5c36b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        xor ebp, ebp
        public_6f5c37b : nop
        mov ecx, dword ptr ss : [esp+0xB4]
        push ecx
        mov byte ptr ss : [esp+0xCC], 1
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0xB4], ebp
        mov dword ptr ss : [esp+0xB8], ebp
        mov dword ptr ss : [esp+0xBC], ebp
        inc ebx
        jmp public_6f5c214
        public_6f5c3ae : nop
        xor edi, edi
        public_6f5c3b0 : nop
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x58], edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xC8]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xBC
        ret 0x14
        UNREACHABLE_TRAP(0x6f5beb0)
    }
}

#undef public_6f5bee2
#undef public_6f5bef2
#undef public_6f5befc
#undef public_6f5bf10
#undef public_6f5bf3b
#undef public_6f5bf45
#undef public_6f5bf86
#undef public_6f5c033
#undef public_6f5c0e9
#undef public_6f5c0ec
#undef public_6f5c12e
#undef public_6f5c140
#undef public_6f5c177
#undef public_6f5c18a
#undef public_6f5c19f
#undef public_6f5c1f0
#undef public_6f5c1f7
#undef public_6f5c214
#undef public_6f5c2d3
#undef public_6f5c2d6
#undef public_6f5c314
#undef public_6f5c321
#undef public_6f5c358
#undef public_6f5c36b
#undef public_6f5c37b
#undef public_6f5c3ae
#undef public_6f5c3b0
