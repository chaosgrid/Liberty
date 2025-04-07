#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004130);
CLANG_FORWARD_PROC_SYMBOL(public_10004d20);
CLANG_FORWARD_PROC_SYMBOL(public_10004d60);
CLANG_FORWARD_PROC_SYMBOL(public_10005480);
CLANG_FORWARD_PROC_SYMBOL(public_10006480);
CLANG_FORWARD_PROC_SYMBOL(public_10006530);
CLANG_FORWARD_PROC_SYMBOL(public_100066c0);
CLANG_FORWARD_PROC_SYMBOL(public_100066f0);

#define public_10004169 _public_10004169
#define public_1000416e _public_1000416e
#define public_10004179 _public_10004179
#define public_1000417b _public_1000417b
#define public_10004192 _public_10004192
#define public_10004197 _public_10004197
#define public_100041b5 _public_100041b5
#define public_100041b9 _public_100041b9
#define public_100041c4 _public_100041c4
#define public_100041d0 _public_100041d0
#define public_10004205 _public_10004205
#define public_10004224 _public_10004224
#define public_10004242 _public_10004242
#define public_10004297 _public_10004297
#define public_100042ac _public_100042ac
#define public_100042b1 _public_100042b1
#define public_100042e6 _public_100042e6
#define public_1000431a _public_1000431a
#define public_1000434e _public_1000434e
#define public_10004352 _public_10004352
#define public_1000435a _public_1000435a
#define public_1000438b _public_1000438b
#define public_10004390 _public_10004390
#define public_100043bb _public_100043bb
#define public_100043c7 _public_100043c7
#define public_100043cb _public_100043cb
#define public_100043d3 _public_100043d3
#define public_100043e8 _public_100043e8
#define public_100043ee _public_100043ee
#define public_1000443c _public_1000443c
#define public_1000444d _public_1000444d
#define public_10004452 _public_10004452
#define public_10004483 _public_10004483
#define public_100044e4 _public_100044e4
#define public_100044f4 _public_100044f4
#define public_10004500 _public_10004500
#define public_10004531 _public_10004531
#define public_10004569 _public_10004569
#define public_10004580 _public_10004580
#define public_100045a1 _public_100045a1
#define public_100045d9 _public_100045d9
#define public_100045f9 _public_100045f9
#define public_10004600 _public_10004600
#define public_10004610 _public_10004610
#define public_10004643 _public_10004643
#define public_1000467f _public_1000467f
#define public_1000468e _public_1000468e
#define public_10004695 _public_10004695
#define public_100046c0 _public_100046c0
#define public_100046f4 _public_100046f4
#define public_10004762 _public_10004762
#define public_10004764 _public_10004764
#define public_10004779 _public_10004779
#define public_10004797 _public_10004797
#define public_10004831 _public_10004831
#define public_100048b2 _public_100048b2
#define public_100048b9 _public_100048b9
#define public_100048ce _public_100048ce
#define public_100048e6 _public_100048e6
#define public_10004925 _public_10004925
#define public_10004941 _public_10004941
#define public_10004955 _public_10004955
#define public_10004990 _public_10004990
#define public_10004997 _public_10004997
#define public_100049ab _public_100049ab
#define public_100049e0 _public_100049e0
#define public_10004a3e _public_10004a3e
#define public_10004a5f _public_10004a5f
#define public_10004a8b _public_10004a8b
#define public_10004a9e _public_10004a9e
#define public_10004af2 _public_10004af2
#define public_10004b0d _public_10004b0d
#define public_10004b4c _public_10004b4c
#define public_10004b88 _public_10004b88
#define public_10004b8e _public_10004b8e
#define public_10004bd4 _public_10004bd4
#define public_10004bda _public_10004bda
#define public_10004c16 _public_10004c16

PROC_DECLARE(0x10004130, internal_10004130, public_10004130);
extern "C" NAKED register_t __cdecl internal_10004130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ebx+0x20]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [ebx+0x30]
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], eax
        jae public_10004169
        sub ecx, eax
        dec ecx
        jmp public_1000416e
        public_10004169 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        sub ecx, eax
        public_1000416e : nop
        mov edx, dword ptr ds : [ebx]
        cmp edx, 9
        mov dword ptr ss : [esp+0x18], ecx
        jbe public_100041b9
        public_10004179 : nop
        push 0xFFFFFFFE
        public_1000417b : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ds : [esi]
        mov eax, edi
        sub eax, edx
        public_10004192 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, eax
        public_10004197 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], ecx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_100041b5 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_100041b9 : nop
        mov eax, dword ptr ss : [esp+0x48]
/*FIXUP jmp dword ptr ds : [edx*4+public_10004c54] @0x100041bd*/
  JMPTB cmp edx, 0
  JMPTB je public_100041c4
  JMPTB cmp edx, 1
  JMPTB je public_100042ac
  JMPTB cmp edx, 2
  JMPTB je public_1000431a
  JMPTB cmp edx, 3
  JMPTB je public_1000444d
  JMPTB cmp edx, 4
  JMPTB je public_100044e4
  JMPTB cmp edx, 5
  JMPTB je public_100045d9
  JMPTB cmp edx, 6
  JMPTB je public_10004831
  JMPTB cmp edx, 7
  JMPTB je public_10004b8e
  JMPTB cmp edx, 8
  JMPTB je public_10004bda
  JMPTB cmp edx, 9
  JMPTB je public_10004c16
  JMPTB int 3
        public_100041c4 : nop
        cmp ebp, 3
        jae public_10004205
        lea esp, ss:[esp]
        public_100041d0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_100048e6
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, 3
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x1C], edi
        jb public_100041d0
        public_10004205 : nop
        mov ecx, eax
        and ecx, 7
        mov edx, ecx
        and edx, 1
        shr ecx, 1
        cmp ecx, 3
        mov dword ptr ds : [ebx+0x18], edx
        ja public_100048ce
/*FIXUP jmp dword ptr ds : [ecx*4+public_10004c7c] @0x1000421d*/
  JMPTB cmp ecx, 0
  JMPTB je public_10004224
  JMPTB cmp ecx, 1
  JMPTB je public_10004242
  JMPTB cmp ecx, 2
  JMPTB je public_10004297
  JMPTB cmp ecx, 3
  JMPTB je public_10004925
  JMPTB int 3
        public_10004224 : nop
        sub ebp, 3
        mov ecx, ebp
        and ecx, 7
        shr eax, 3
        shr eax, cl
        sub ebp, ecx
        mov dword ptr ds : [ebx], 1
        mov dword ptr ss : [esp+0x48], eax
        jmp public_100048ce
        public_10004242 : nop
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_100066c0
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        push ecx
        call public_10004d20
        add esp, 0x28
        test eax, eax
        mov dword ptr ds : [ebx+4], eax
        je public_10004b4c
        shr dword ptr ss : [esp+0x48], 3
        sub ebp, 3
        mov dword ptr ds : [ebx], 6
        jmp public_100048ce
        public_10004297 : nop
        shr eax, 3
        mov dword ptr ss : [esp+0x48], eax
        sub ebp, 3
        mov dword ptr ds : [ebx], 3
        jmp public_100048ce
        public_100042ac : nop
        cmp ebp, 0x20
        jae public_100042e6
        public_100042b1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_10004a5f
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, 0x20
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x1C], edi
        jb public_100042b1
        public_100042e6 : nop
        mov ecx, eax
        not eax
        and ecx, 0xFFFF
        shr eax, 0x10
        cmp eax, ecx
        jne public_10004941
        xor ebp, ebp
        mov eax, ecx
        cmp eax, ebp
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [esp+0x48], ebp
        je public_1000443c
        mov eax, 2
        mov dword ptr ds : [ebx], eax
        jmp public_100048ce
        public_1000431a : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_10004a3e
        test ecx, ecx
        jne public_100043d3
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ss : [esp+0x14], edx
        jne public_1000435a
        mov eax, dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ds : [ebx+0x28]
        cmp ecx, eax
        je public_1000435a
        mov dword ptr ss : [esp+0x14], ecx
        jae public_1000434e
        sub eax, ecx
        dec eax
        mov ecx, eax
        jmp public_10004352
        public_1000434e : nop
        sub edx, ecx
        mov ecx, edx
        public_10004352 : nop
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], ecx
        jne public_100043d3
        public_1000435a : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [ebx+0x34]
        add esp, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], ecx
        jae public_1000438b
        sub ecx, eax
        dec ecx
        jmp public_10004390
        public_1000438b : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        sub ecx, eax
        public_10004390 : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x34], edx
        jne public_100043cb
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [esp+0x20]
        cmp eax, edx
        je public_100043c7
        mov dword ptr ss : [esp+0x14], eax
        jae public_100043bb
        sub edx, eax
        dec edx
        mov ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_100043cb
        public_100043bb : nop
        mov ecx, dword ptr ss : [esp+0x34]
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_100043cb
        public_100043c7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_100043cb : nop
        test ecx, ecx
        je public_10004955
        public_100043d3 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, edx
        mov dword ptr ss : [esp+0x50], 0
        jbe public_100043e8
        mov eax, edx
        public_100043e8 : nop
        cmp eax, ecx
        jbe public_100043ee
        mov eax, ecx
        public_100043ee : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ebx+4]
        sub edi, eax
        add esi, eax
        sub edx, eax
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ds : [ebx+4], ecx
        jne public_100048ce
        public_1000443c : nop
        mov eax, dword ptr ds : [ebx+0x18]
        neg eax
        sbb eax, eax
        and eax, 7
        mov dword ptr ds : [ebx], eax
        jmp public_100048ce
        public_1000444d : nop
        cmp ebp, 0xE
        jae public_10004483
        public_10004452 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_10004a5f
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, 0xE
        mov dword ptr ss : [esp+0x48], eax
        jb public_10004452
        public_10004483 : nop
        and eax, 0x3FFF
        mov ecx, eax
        and ecx, 0x1F
        cmp ecx, 0x1D
        mov dword ptr ds : [ebx+4], eax
        ja public_10004997
        shr eax, 5
        and eax, 0x1F
        cmp eax, 0x1D
        ja public_10004997
        lea eax, ds:[eax+ecx+0x102]
        mov ecx, dword ptr ds : [esi+0x28]
        push 4
        push eax
        push ecx
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        je public_10004990
        mov ecx, dword ptr ss : [esp+0x48]
        shr ecx, 0xE
        mov dword ptr ss : [esp+0x48], ecx
        sub ebp, 0xE
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx], 4
        mov eax, ecx
        public_100044e4 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        shr edx, 0xA
        add edx, 4
        cmp ecx, edx
        jae public_10004569
        public_100044f4 : nop
        cmp ebp, 3
        jae public_10004531
        lea esp, ss:[esp]
        public_10004500 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_10004a5f
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, 3
        mov dword ptr ss : [esp+0x48], eax
        jb public_10004500
        public_10004531 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx*4+public_1000b158]
        mov ecx, dword ptr ds : [ebx+0xC]
        and eax, 7
        mov dword ptr ds : [ecx+edx*4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x48]
        inc edx
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        shr edx, 0xA
        shr eax, 3
        add edx, 4
        sub ebp, 3
        cmp ecx, edx
        mov dword ptr ss : [esp+0x48], eax
        jb public_100044f4
        public_10004569 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, 0x13
        cmp ecx, eax
        jae public_100045a1
        jmp public_10004580
        lea esp, ss:[esp]
        mov edi, edi
        public_10004580 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx*4+public_1000b158]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ecx+edx*4], 0
        mov edx, dword ptr ds : [ebx+8]
        inc edx
        mov ecx, edx
        cmp ecx, eax
        mov dword ptr ds : [ebx+8], edx
        jb public_10004580
        public_100045a1 : nop
        mov edx, dword ptr ds : [ebx+0x24]
        push esi
        push edx
        mov edx, dword ptr ds : [ebx+0xC]
        lea ecx, ds:[ebx+0x14]
        lea eax, ds:[ebx+0x10]
        push ecx
        push eax
        push edx
        mov dword ptr ds : [eax], 7
        call public_10006480
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_100049e0
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx], 5
        public_100045d9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, ecx
        shr edx, 5
        and edx, 0x1F
        and ecx, 0x1F
        lea ecx, ds:[edx+ecx+0x102]
        cmp dword ptr ds : [ebx+8], ecx
        jae public_10004797
        jmp public_10004600
        public_100045f9 : nop
        mov eax, dword ptr ss : [esp+0x48]
        lea ecx, ds:[ecx]
        public_10004600 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ebp, ecx
        jae public_10004643
        jmp public_10004610
        lea esp, ss:[esp]
        public_10004610 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_10004a3e
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr ds : [ebx+0x10]
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x48], eax
        jb public_10004610
        public_10004643 : nop
        mov ecx, dword ptr ds : [ecx*4+public_1000e120]
        mov edx, dword ptr ds : [ebx+0x14]
        and ecx, eax
        lea edx, ds:[edx+ecx*8]
        movzx ecx, byte ptr ds : [edx+1]
        mov edx, dword ptr ds : [edx+4]
        cmp edx, 0x10
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x38], edx
        jae public_1000467f
        shr eax, cl
        sub ebp, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx+eax*4], edx
        inc dword ptr ds : [ebx+8]
        jmp public_10004779
        public_1000467f : nop
        cmp edx, 0x12
        jne public_1000468e
        mov dword ptr ss : [esp+0x20], 7
        jmp public_10004695
        public_1000468e : nop
        lea ecx, ds:[edx-0xE]
        mov dword ptr ss : [esp+0x20], ecx
        public_10004695 : nop
        xor ecx, ecx
        cmp edx, 0x12
        mov edx, dword ptr ss : [esp+0x20]
        sete cl
        lea ecx, ds:[ecx*8+3]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, edx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x34], ecx
        jae public_100046f4
        lea ebx, ds:[ebx]
        public_100046c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_10004a5f
        mov edx, ecx
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        mov ecx, ebp
        shl edx, cl
        mov ecx, dword ptr ss : [esp+0x34]
        add ebp, 8
        mov dword ptr ss : [esp+0x50], 0
        or eax, edx
        inc edi
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x48], eax
        jb public_100046c0
        public_100046f4 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        shr eax, cl
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx*4+public_1000e120]
        mov ecx, dword ptr ss : [esp+0x1C]
        and edx, eax
        add ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        shr eax, cl
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov eax, dword ptr ds : [ebx+4]
        mov edx, eax
        shr edx, 5
        and edx, 0x1F
        and eax, 0x1F
        lea eax, ds:[edx+eax+0x102]
        mov edx, dword ptr ss : [esp+0x1C]
        sub ebp, ecx
        mov ecx, dword ptr ds : [ebx+8]
        add edx, ecx
        cmp edx, eax
        ja public_10004a9e
        cmp dword ptr ss : [esp+0x38], 0x10
        jne public_10004762
        cmp ecx, 1
        jb public_10004a9e
        mov eax, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [eax+ecx*4-4]
        jmp public_10004764
        public_10004762 : nop
        xor eax, eax
        public_10004764 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edx+ecx*4], eax
        mov edx, dword ptr ss : [esp+0x1C]
        inc ecx
        dec edx
        mov dword ptr ss : [esp+0x1C], edx
        jne public_10004764
        mov dword ptr ds : [ebx+8], ecx
        public_10004779 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, eax
        shr ecx, 5
        and eax, 0x1F
        and ecx, 0x1F
        lea edx, ds:[ecx+eax+0x102]
        cmp dword ptr ds : [ebx+8], edx
        jb public_100045f9
        public_10004797 : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [ebx+0xC]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        shr ecx, 5
        and ecx, 0x1F
        push edx
        inc ecx
        and eax, 0x1F
        push ecx
        add eax, 0x101
        push eax
        mov dword ptr ds : [ebx+0x14], 0
        mov dword ptr ss : [esp+0x40], 9
        mov dword ptr ss : [esp+0x44], 6
        call public_10006530
        add esp, 0x24
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_10004af2
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        push edx
        call public_10004d20
        add esp, 0x14
        test eax, eax
        je public_10004b4c
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push ecx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        mov dword ptr ds : [ebx], 6
        public_10004831 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, edi
        sub ecx, ebp
        add edx, ecx
        push eax
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], edx
        call public_10004d60
        add esp, 0xC
        cmp eax, 1
        jne public_10004a8b
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x58], 0
        call public_10005480
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [ebx+0x30]
        add esp, 8
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], ecx
        jae public_100048b2
        mov edx, ecx
        sub eax, edx
        dec eax
        jmp public_100048b9
        public_100048b2 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        sub eax, dword ptr ss : [esp+0x14]
        public_100048b9 : nop
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        jne public_10004b88
        mov dword ptr ds : [ebx], 0
        public_100048ce : nop
        mov edx, dword ptr ds : [ebx]
        cmp edx, 9
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x4C]
        jbe public_100041b5
        jmp public_10004179
        public_100048e6 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+8]
        mov edx, edi
        sub edx, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        add eax, edx
        push ecx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004925 : nop
        mov eax, dword ptr ss : [esp+0x48]
        shr eax, 3
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_1000b204
        mov dword ptr ds : [ebx+0x20], eax
        add ebp, 0xFFFFFFFD
        jmp public_100049ab
        public_10004941 : nop
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_1000b1e4
        push 0xFFFFFFFD
        jmp public_1000417b
        public_10004955 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, ebp
        add edx, ecx
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004990 : nop
        push 0xFFFFFFFC
        jmp public_1000417b
        public_10004997 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_1000b1c0
        mov dword ptr ds : [ebx+0x20], edx
        public_100049ab : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x1C], ebp
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFD
        add eax, ecx
        push esi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], edx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_100049e0 : nop
        cmp dword ptr ss : [esp+0x18], 0xFFFFFFFD
        jne public_10004b0d
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [esi+0x28]
        push ecx
        push edx
        call dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [ebx+0x1C], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, edi
        sub edx, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        add eax, edx
        push ecx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004a3e : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov edx, dword ptr ds : [esi]
        mov eax, edi
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+4], 0
        push edx
        jmp public_10004192
        public_10004a5f : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x1C], ebp
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        add eax, ecx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x34], edx
        public_10004a8b : nop
        push eax
        push esi
        push ebx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004a9e : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [esi+0x28]
        push ecx
        push edx
        call dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_1000b1a4
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x1C], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, edi
        sub edx, ecx
        add eax, edx
        push 0xFFFFFFFD
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004af2 : nop
        cmp dword ptr ss : [esp+0x18], 0xFFFFFFFD
        jne public_10004b0d
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [esi+0x28]
        push ecx
        push edx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        mov dword ptr ds : [ebx], 9
        public_10004b0d : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x1C], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, edi
        sub edx, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, edx
        push ecx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004b4c : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFC
        add eax, ecx
        push esi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], edx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004b88 : nop
        mov dword ptr ds : [ebx], 7
        public_10004b8e : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edx, dword ptr ds : [ebx+0x30]
        add esp, 0xC
        cmp edx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_10004bd4
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, edi
        sub edx, ebp
        add ecx, edx
        push eax
        jmp public_10004197
        public_10004bd4 : nop
        mov dword ptr ds : [ebx], 8
        public_10004bda : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x1C], ebp
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        push 1
        add eax, ecx
        push esi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], edx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_10004c16 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x1C], ebp
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, edi
        sub edx, ecx
        add eax, edx
        push 0xFFFFFFFD
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x10004130)
        ASM_EXPORT_ENTRY_FIRST(0x100041c4, public_100041c4)
        ASM_EXPORT_ENTRY(0x10004224, public_10004224)
        ASM_EXPORT_ENTRY(0x10004242, public_10004242)
        ASM_EXPORT_ENTRY(0x10004297, public_10004297)
        ASM_EXPORT_ENTRY(0x100042ac, public_100042ac)
        ASM_EXPORT_ENTRY(0x1000431a, public_1000431a)
        ASM_EXPORT_ENTRY(0x1000444d, public_1000444d)
        ASM_EXPORT_ENTRY(0x100044e4, public_100044e4)
        ASM_EXPORT_ENTRY(0x100045d9, public_100045d9)
        ASM_EXPORT_ENTRY(0x10004831, public_10004831)
        ASM_EXPORT_ENTRY(0x10004925, public_10004925)
        ASM_EXPORT_ENTRY(0x10004b8e, public_10004b8e)
        ASM_EXPORT_ENTRY(0x10004bda, public_10004bda)
        ASM_EXPORT_ENTRY_LAST(0x10004c16, public_10004c16)
    }
}

#undef public_10004169
#undef public_1000416e
#undef public_10004179
#undef public_1000417b
#undef public_10004192
#undef public_10004197
#undef public_100041b5
#undef public_100041b9
#undef public_100041c4
#undef public_100041d0
#undef public_10004205
#undef public_10004224
#undef public_10004242
#undef public_10004297
#undef public_100042ac
#undef public_100042b1
#undef public_100042e6
#undef public_1000431a
#undef public_1000434e
#undef public_10004352
#undef public_1000435a
#undef public_1000438b
#undef public_10004390
#undef public_100043bb
#undef public_100043c7
#undef public_100043cb
#undef public_100043d3
#undef public_100043e8
#undef public_100043ee
#undef public_1000443c
#undef public_1000444d
#undef public_10004452
#undef public_10004483
#undef public_100044e4
#undef public_100044f4
#undef public_10004500
#undef public_10004531
#undef public_10004569
#undef public_10004580
#undef public_100045a1
#undef public_100045d9
#undef public_100045f9
#undef public_10004600
#undef public_10004610
#undef public_10004643
#undef public_1000467f
#undef public_1000468e
#undef public_10004695
#undef public_100046c0
#undef public_100046f4
#undef public_10004762
#undef public_10004764
#undef public_10004779
#undef public_10004797
#undef public_10004831
#undef public_100048b2
#undef public_100048b9
#undef public_100048ce
#undef public_100048e6
#undef public_10004925
#undef public_10004941
#undef public_10004955
#undef public_10004990
#undef public_10004997
#undef public_100049ab
#undef public_100049e0
#undef public_10004a3e
#undef public_10004a5f
#undef public_10004a8b
#undef public_10004a9e
#undef public_10004af2
#undef public_10004b0d
#undef public_10004b4c
#undef public_10004b88
#undef public_10004b8e
#undef public_10004bd4
#undef public_10004bda
#undef public_10004c16

#pragma init_seg(compiler)
extern "C" void const* const public_100041c4 = __AsmFindLabelExport(&internal_10004130, 0x100041c4);
extern "C" void const* const public_10004224 = __AsmFindLabelExport(&internal_10004130, 0x10004224);
extern "C" void const* const public_10004242 = __AsmFindLabelExport(&internal_10004130, 0x10004242);
extern "C" void const* const public_10004297 = __AsmFindLabelExport(&internal_10004130, 0x10004297);
extern "C" void const* const public_100042ac = __AsmFindLabelExport(&internal_10004130, 0x100042ac);
extern "C" void const* const public_1000431a = __AsmFindLabelExport(&internal_10004130, 0x1000431a);
extern "C" void const* const public_1000444d = __AsmFindLabelExport(&internal_10004130, 0x1000444d);
extern "C" void const* const public_100044e4 = __AsmFindLabelExport(&internal_10004130, 0x100044e4);
extern "C" void const* const public_100045d9 = __AsmFindLabelExport(&internal_10004130, 0x100045d9);
extern "C" void const* const public_10004831 = __AsmFindLabelExport(&internal_10004130, 0x10004831);
extern "C" void const* const public_10004925 = __AsmFindLabelExport(&internal_10004130, 0x10004925);
extern "C" void const* const public_10004b8e = __AsmFindLabelExport(&internal_10004130, 0x10004b8e);
extern "C" void const* const public_10004bda = __AsmFindLabelExport(&internal_10004130, 0x10004bda);
extern "C" void const* const public_10004c16 = __AsmFindLabelExport(&internal_10004130, 0x10004c16);
