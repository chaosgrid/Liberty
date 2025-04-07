#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a0ec);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab97);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c8f4);

#define public_6d5a127 _public_6d5a127
#define public_6d5a131 _public_6d5a131
#define public_6d5a138 _public_6d5a138
#define public_6d5a1b1 _public_6d5a1b1
#define public_6d5a1b6 _public_6d5a1b6
#define public_6d5a1d3 _public_6d5a1d3
#define public_6d5a1e8 _public_6d5a1e8
#define public_6d5a20e _public_6d5a20e
#define public_6d5a252 _public_6d5a252
#define public_6d5a271 _public_6d5a271
#define public_6d5a284 _public_6d5a284
#define public_6d5a298 _public_6d5a298
#define public_6d5a2be _public_6d5a2be
#define public_6d5a2f3 _public_6d5a2f3
#define public_6d5a319 _public_6d5a319
#define public_6d5a360 _public_6d5a360
#define public_6d5a371 _public_6d5a371
#define public_6d5a374 _public_6d5a374
#define public_6d5a37c _public_6d5a37c
#define public_6d5a3a2 _public_6d5a3a2
#define public_6d5a3c8 _public_6d5a3c8
#define public_6d5a3e6 _public_6d5a3e6
#define public_6d5a3ed _public_6d5a3ed
#define public_6d5a3f0 _public_6d5a3f0
#define public_6d5a421 _public_6d5a421
#define public_6d5a426 _public_6d5a426
#define public_6d5a42a _public_6d5a42a
#define public_6d5a44f _public_6d5a44f
#define public_6d5a454 _public_6d5a454
#define public_6d5a476 _public_6d5a476
#define public_6d5a47d _public_6d5a47d
#define public_6d5a480 _public_6d5a480
#define public_6d5a488 _public_6d5a488
#define public_6d5a4a9 _public_6d5a4a9
#define public_6d5a4b1 _public_6d5a4b1
#define public_6d5a4b9 _public_6d5a4b9
#define public_6d5a4e0 _public_6d5a4e0
#define public_6d5a4e5 _public_6d5a4e5
#define public_6d5a4e9 _public_6d5a4e9
#define public_6d5a50e _public_6d5a50e
#define public_6d5a513 _public_6d5a513
#define public_6d5a535 _public_6d5a535
#define public_6d5a53c _public_6d5a53c
#define public_6d5a53f _public_6d5a53f
#define public_6d5a547 _public_6d5a547
#define public_6d5a555 _public_6d5a555
#define public_6d5a558 _public_6d5a558
#define public_6d5a565 _public_6d5a565
#define public_6d5a577 _public_6d5a577
#define public_6d5a583 _public_6d5a583
#define public_6d5a595 _public_6d5a595
#define public_6d5a5a2 _public_6d5a5a2
#define public_6d5a5a6 _public_6d5a5a6
#define public_6d5a5b5 _public_6d5a5b5
#define public_6d5a5ca _public_6d5a5ca
#define public_6d5a5cf _public_6d5a5cf
#define public_6d5a5df _public_6d5a5df
#define public_6d5a61b _public_6d5a61b
#define public_6d5a621 _public_6d5a621

PROC_DECLARE(0x6d5a0ec, internal_6d5a0ec, public_6d5a0ec);
extern "C" NAKED register_t __cdecl internal_6d5a0ec()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi+0x34]
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [edi+0x30]
        cmp edx, eax
        jae public_6d5a127
        sub eax, edx
        dec eax
        jmp public_6d5a555
        public_6d5a127 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, edx
        jmp public_6d5a555
/*FIXUP public_6d5a131 : nop
        jmp dword ptr ds : [ecx*4+public_6d5a628] @0x6d5a131*/
  JMPTB public_6d5a131 : nop
        cmp ecx, 0
  JMPTB je public_6d5a138
  JMPTB cmp ecx, 1
  JMPTB je public_6d5a20e
  JMPTB cmp ecx, 2
  JMPTB je public_6d5a2be
  JMPTB cmp ecx, 3
  JMPTB je public_6d5a319
  JMPTB cmp ecx, 4
  JMPTB je public_6d5a3a2
  JMPTB cmp ecx, 5
  JMPTB je public_6d5a3c8
  JMPTB cmp ecx, 6
  JMPTB je public_6d5a4b9
  JMPTB cmp ecx, 7
  JMPTB je public_6d5a5cf
  JMPTB cmp ecx, 8
  JMPTB je public_6d5a621
  JMPTB cmp ecx, 9
  JMPTB je public_6d5a5a2
  JMPTB int 3
        public_6d5a138 : nop
        cmp eax, 0x102
        jb public_6d5a1d3
        cmp dword ptr ss : [ebp-8], 0xA
        jb public_6d5a1d3
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, eax
        sub ecx, dword ptr ds : [esi]
        push esi
        add dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edi+0x34], edx
        movzx eax, byte ptr ds : [ebx+0x11]
        push edi
        push dword ptr ds : [ebx+0x18]
        push dword ptr ds : [ebx+0x14]
        push eax
        movzx eax, byte ptr ds : [ebx+0x10]
        push eax
        call public_6d5c8f4
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 0x18
        cmp edx, eax
        jae public_6d5a1b1
        sub eax, edx
        dec eax
        jmp public_6d5a1b6
        public_6d5a1b1 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, edx
        public_6d5a1b6 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        mov dword ptr ss : [ebp-0xC], eax
        je public_6d5a1d3
        xor eax, eax
        cmp dword ptr ss : [ebp+0x10], 1
        setne al
        lea eax, ds:[eax+eax+7]
        mov dword ptr ds : [ebx], eax
        jmp public_6d5a374
        public_6d5a1d3 : nop
        movzx eax, byte ptr ds : [ebx+0x10]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 1
        jmp public_6d5a20e
        public_6d5a1e8 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d5a5b5
        mov eax, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp+0xC], eax
        inc dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+8], 8
        public_6d5a20e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d5a1e8
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        and eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ds:[ecx+eax*8]
        movzx ecx, byte ptr ds : [eax+1]
        shr dword ptr ss : [ebp+0xC], cl
        mov dword ptr ss : [ebp-0x14], eax
        movzx eax, byte ptr ds : [eax+1]
        sub dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x14]
        movzx ecx, byte ptr ds : [eax]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x18], ecx
        jne public_6d5a252
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx], 6
        jmp public_6d5a371
        public_6d5a252 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        test cl, 0x10
        je public_6d5a271
        and ecx, 0xF
        mov dword ptr ds : [ebx+8], ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 2
        jmp public_6d5a374
        public_6d5a271 : nop
        test cl, 0x40
        jne public_6d5a284
        mov dword ptr ds : [ebx+0xC], ecx
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[eax+ecx*8]
        jmp public_6d5a371
        public_6d5a284 : nop
        test cl, 0x20
        je public_6d5a595
        mov dword ptr ds : [ebx], 7
        jmp public_6d5a374
        public_6d5a298 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d5a5b5
        mov eax, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp+0xC], eax
        inc dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+8], 8
        public_6d5a2be : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d5a298
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        and eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        add dword ptr ds : [ebx+4], eax
        shr dword ptr ss : [ebp+0xC], cl
        mov eax, ecx
        sub dword ptr ss : [ebp+8], eax
        movzx eax, byte ptr ds : [ebx+0x11]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 3
        jmp public_6d5a319
        public_6d5a2f3 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d5a5b5
        mov eax, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp+0xC], eax
        inc dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+8], 8
        public_6d5a319 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d5a2f3
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        and eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ds:[ecx+eax*8]
        movzx ecx, byte ptr ds : [eax+1]
        shr dword ptr ss : [ebp+0xC], cl
        mov dword ptr ss : [ebp-0x14], eax
        movzx eax, byte ptr ds : [eax+1]
        sub dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        movzx eax, byte ptr ds : [ecx]
        test al, 0x10
        je public_6d5a360
        and eax, 0xF
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx], 4
        jmp public_6d5a374
        public_6d5a360 : nop
        test al, 0x40
        jne public_6d5a5a6
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ecx+4]
        lea eax, ds:[ecx+eax*8]
        public_6d5a371 : nop
        mov dword ptr ds : [ebx+8], eax
        public_6d5a374 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        jmp public_6d5a558
        public_6d5a37c : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d5a5b5
        mov eax, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp+0xC], eax
        inc dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+8], 8
        public_6d5a3a2 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d5a37c
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        and eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        add dword ptr ds : [ebx+0xC], eax
        shr dword ptr ss : [ebp+0xC], cl
        mov eax, ecx
        sub dword ptr ss : [ebp+8], eax
        mov dword ptr ds : [ebx], 5
        public_6d5a3c8 : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, edx
        sub ecx, eax
        mov eax, dword ptr ds : [ebx+0xC]
        cmp ecx, eax
        jae public_6d5a3e6
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, dword ptr ds : [edi+0x28]
        sub eax, dword ptr ds : [ebx+0xC]
        add eax, edx
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d5a3ed
        public_6d5a3e6 : nop
        mov ecx, edx
        sub ecx, eax
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d5a3ed : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d5a3f0 : nop
        cmp dword ptr ds : [ebx+4], 0
        je public_6d5a4b1
        test eax, eax
        jne public_6d5a488
        mov eax, dword ptr ds : [edi+0x2C]
        cmp edx, eax
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d5a42a
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x28]
        cmp eax, ecx
        je public_6d5a42a
        mov edx, ecx
        cmp edx, eax
        jae public_6d5a421
        sub eax, edx
        dec eax
        jmp public_6d5a426
        public_6d5a421 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, edx
        public_6d5a426 : nop
        test eax, eax
        jne public_6d5a488
        public_6d5a42a : nop
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x34], edx
        push esi
        push edi
        call public_6d5ab97
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 0xC
        cmp edx, eax
        mov dword ptr ss : [ebp-0x18], eax
        jae public_6d5a44f
        sub eax, edx
        dec eax
        jmp public_6d5a454
        public_6d5a44f : nop
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, edx
        public_6d5a454 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        cmp edx, ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x10], ecx
        jne public_6d5a480
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, ecx
        je public_6d5a47d
        mov edx, ecx
        cmp edx, eax
        jae public_6d5a476
        sub eax, edx
        dec eax
        jmp public_6d5a480
        public_6d5a476 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, edx
        jmp public_6d5a480
        public_6d5a47d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d5a480 : nop
        test eax, eax
        je public_6d5a5ca
        public_6d5a488 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ss : [ebp+0x10], 0
        mov cl, byte ptr ds : [ecx]
        mov byte ptr ds : [edx], cl
        inc edx
        inc dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        dec eax
        cmp ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d5a4a9
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d5a4a9 : nop
        dec dword ptr ds : [ebx+4]
        jmp public_6d5a3f0
        public_6d5a4b1 : nop
        and dword ptr ds : [ebx], 0
        jmp public_6d5a558
        public_6d5a4b9 : nop
        test eax, eax
        jne public_6d5a547
        mov eax, dword ptr ds : [edi+0x2C]
        cmp edx, eax
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d5a4e9
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x28]
        cmp eax, ecx
        je public_6d5a4e9
        mov edx, ecx
        cmp edx, eax
        jae public_6d5a4e0
        sub eax, edx
        dec eax
        jmp public_6d5a4e5
        public_6d5a4e0 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, edx
        public_6d5a4e5 : nop
        test eax, eax
        jne public_6d5a547
        public_6d5a4e9 : nop
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x34], edx
        push esi
        push edi
        call public_6d5ab97
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 0xC
        cmp edx, eax
        mov dword ptr ss : [ebp-0x18], eax
        jae public_6d5a50e
        sub eax, edx
        dec eax
        jmp public_6d5a513
        public_6d5a50e : nop
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, edx
        public_6d5a513 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        cmp edx, ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x10], ecx
        jne public_6d5a53f
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, ecx
        je public_6d5a53c
        mov edx, ecx
        cmp edx, eax
        jae public_6d5a535
        sub eax, edx
        dec eax
        jmp public_6d5a53f
        public_6d5a535 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, edx
        jmp public_6d5a53f
        public_6d5a53c : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d5a53f : nop
        test eax, eax
        je public_6d5a5ca
        public_6d5a547 : nop
        and dword ptr ss : [ebp+0x10], 0
        mov cl, byte ptr ds : [ebx+8]
        mov byte ptr ds : [edx], cl
        inc edx
        dec eax
        and dword ptr ds : [ebx], 0
        public_6d5a555 : nop
        mov dword ptr ss : [ebp-0xC], eax
        public_6d5a558 : nop
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, 9
        jbe public_6d5a131
        push 0xFFFFFFFE
        public_6d5a565 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], eax
        public_6d5a577 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, eax
        sub ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], eax
        add dword ptr ds : [esi+8], ecx
        public_6d5a583 : nop
        push esi
        push edi
        mov dword ptr ds : [edi+0x34], edx
        call public_6d5ab97
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6d5a595 : nop
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62338
        public_6d5a5a2 : nop
        push 0xFFFFFFFD
        jmp public_6d5a565
        public_6d5a5a6 : nop
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62320
        jmp public_6d5a5a2
        public_6d5a5b5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+0x1C], eax
        and dword ptr ds : [esi+4], 0
        jmp public_6d5a577
        public_6d5a5ca : nop
        push dword ptr ss : [ebp+0x10]
        jmp public_6d5a565
        public_6d5a5cf : nop
        cmp dword ptr ss : [ebp+8], 7
        jbe public_6d5a5df
        sub dword ptr ss : [ebp+8], 8
        inc dword ptr ss : [ebp-8]
        dec dword ptr ss : [ebp-4]
        public_6d5a5df : nop
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x34], edx
        push esi
        push edi
        call public_6d5ab97
        mov edx, dword ptr ds : [edi+0x34]
        add esp, 0xC
        cmp dword ptr ds : [edi+0x30], edx
        je public_6d5a61b
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x20], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+0x1C], ecx
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov ebx, ecx
        sub ebx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], ecx
        add dword ptr ds : [esi+8], ebx
        push eax
        jmp public_6d5a583
        public_6d5a61b : nop
        mov dword ptr ds : [ebx], 8
        public_6d5a621 : nop
        push 1
        jmp public_6d5a565
        UNREACHABLE_TRAP(0x6d5a0ec)
        ASM_EXPORT_ENTRY_FIRST(0x6d5a138, public_6d5a138)
        ASM_EXPORT_ENTRY(0x6d5a20e, public_6d5a20e)
        ASM_EXPORT_ENTRY(0x6d5a2be, public_6d5a2be)
        ASM_EXPORT_ENTRY(0x6d5a319, public_6d5a319)
        ASM_EXPORT_ENTRY(0x6d5a3a2, public_6d5a3a2)
        ASM_EXPORT_ENTRY(0x6d5a3c8, public_6d5a3c8)
        ASM_EXPORT_ENTRY(0x6d5a4b9, public_6d5a4b9)
        ASM_EXPORT_ENTRY(0x6d5a5a2, public_6d5a5a2)
        ASM_EXPORT_ENTRY(0x6d5a5cf, public_6d5a5cf)
        ASM_EXPORT_ENTRY_LAST(0x6d5a621, public_6d5a621)
    }
}

#undef public_6d5a127
#undef public_6d5a131
#undef public_6d5a138
#undef public_6d5a1b1
#undef public_6d5a1b6
#undef public_6d5a1d3
#undef public_6d5a1e8
#undef public_6d5a20e
#undef public_6d5a252
#undef public_6d5a271
#undef public_6d5a284
#undef public_6d5a298
#undef public_6d5a2be
#undef public_6d5a2f3
#undef public_6d5a319
#undef public_6d5a360
#undef public_6d5a371
#undef public_6d5a374
#undef public_6d5a37c
#undef public_6d5a3a2
#undef public_6d5a3c8
#undef public_6d5a3e6
#undef public_6d5a3ed
#undef public_6d5a3f0
#undef public_6d5a421
#undef public_6d5a426
#undef public_6d5a42a
#undef public_6d5a44f
#undef public_6d5a454
#undef public_6d5a476
#undef public_6d5a47d
#undef public_6d5a480
#undef public_6d5a488
#undef public_6d5a4a9
#undef public_6d5a4b1
#undef public_6d5a4b9
#undef public_6d5a4e0
#undef public_6d5a4e5
#undef public_6d5a4e9
#undef public_6d5a50e
#undef public_6d5a513
#undef public_6d5a535
#undef public_6d5a53c
#undef public_6d5a53f
#undef public_6d5a547
#undef public_6d5a555
#undef public_6d5a558
#undef public_6d5a565
#undef public_6d5a577
#undef public_6d5a583
#undef public_6d5a595
#undef public_6d5a5a2
#undef public_6d5a5a6
#undef public_6d5a5b5
#undef public_6d5a5ca
#undef public_6d5a5cf
#undef public_6d5a5df
#undef public_6d5a61b
#undef public_6d5a621

#pragma init_seg(compiler)
extern "C" void const* const public_6d5a138 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a138);
extern "C" void const* const public_6d5a20e = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a20e);
extern "C" void const* const public_6d5a2be = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a2be);
extern "C" void const* const public_6d5a319 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a319);
extern "C" void const* const public_6d5a3a2 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a3a2);
extern "C" void const* const public_6d5a3c8 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a3c8);
extern "C" void const* const public_6d5a4b9 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a4b9);
extern "C" void const* const public_6d5a5a2 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a5a2);
extern "C" void const* const public_6d5a5cf = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a5cf);
extern "C" void const* const public_6d5a621 = __AsmFindLabelExport(&internal_6d5a0ec, 0x6d5a621);
