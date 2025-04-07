#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004d60);
CLANG_FORWARD_PROC_SYMBOL(public_100054a0);
CLANG_FORWARD_PROC_SYMBOL(public_100066f0);

#define public_10004d98 _public_10004d98
#define public_10004d9d _public_10004d9d
#define public_10004db0 _public_10004db0
#define public_10004db7 _public_10004db7
#define public_10004e37 _public_10004e37
#define public_10004e3c _public_10004e3c
#define public_10004e5f _public_10004e5f
#define public_10004e76 _public_10004e76
#define public_10004e90 _public_10004e90
#define public_10004ec7 _public_10004ec7
#define public_10004f18 _public_10004f18
#define public_10004f3f _public_10004f3f
#define public_10004f62 _public_10004f62
#define public_10004f71 _public_10004f71
#define public_10004fa8 _public_10004fa8
#define public_10004fdf _public_10004fdf
#define public_10004fe3 _public_10004fe3
#define public_10004ff0 _public_10004ff0
#define public_10005027 _public_10005027
#define public_1000507c _public_1000507c
#define public_10005084 _public_10005084
#define public_100050a5 _public_100050a5
#define public_100050b4 _public_100050b4
#define public_100050eb _public_100050eb
#define public_10005113 _public_10005113
#define public_10005136 _public_10005136
#define public_10005140 _public_10005140
#define public_1000514b _public_1000514b
#define public_10005160 _public_10005160
#define public_10005188 _public_10005188
#define public_1000518e _public_1000518e
#define public_10005192 _public_10005192
#define public_100051bb _public_100051bb
#define public_100051c0 _public_100051c0
#define public_100051e5 _public_100051e5
#define public_100051ed _public_100051ed
#define public_100051f1 _public_100051f1
#define public_100051f9 _public_100051f9
#define public_10005224 _public_10005224
#define public_1000523a _public_1000523a
#define public_10005262 _public_10005262
#define public_10005268 _public_10005268
#define public_1000526c _public_1000526c
#define public_10005295 _public_10005295
#define public_1000529a _public_1000529a
#define public_100052bf _public_100052bf
#define public_100052c7 _public_100052c7
#define public_100052cb _public_100052cb
#define public_100052d3 _public_100052d3
#define public_100052ee _public_100052ee
#define public_100052f4 _public_100052f4
#define public_10005303 _public_10005303
#define public_10005305 _public_10005305
#define public_10005324 _public_10005324
#define public_1000533b _public_1000533b
#define public_1000534c _public_1000534c
#define public_10005361 _public_10005361
#define public_1000539c _public_1000539c
#define public_100053c5 _public_100053c5
#define public_100053d7 _public_100053d7
#define public_10005413 _public_10005413
#define public_1000541d _public_1000541d
#define public_10005424 _public_10005424

PROC_DECLARE(0x10004d60, internal_10004d60, public_10004d60);
extern "C" NAKED register_t __cdecl internal_10004d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi+0x34]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jae public_10004d98
        sub eax, edx
        dec eax
        jmp public_10004d9d
        public_10004d98 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, edx
        public_10004d9d : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, 9
        mov dword ptr ss : [esp+0x14], eax
        ja public_10005303
        lea esp, ss:[esp]
/*FIXUP public_10004db0 : nop
        jmp dword ptr ds : [ecx*4+public_1000544c] @0x10004db0*/
  JMPTB public_10004db0 : nop
        cmp ecx, 0
  JMPTB je public_10004db7
  JMPTB cmp ecx, 1
  JMPTB je public_10004e76
  JMPTB cmp ecx, 2
  JMPTB je public_10004f62
  JMPTB cmp ecx, 3
  JMPTB je public_10004fdf
  JMPTB cmp ecx, 4
  JMPTB je public_100050a5
  JMPTB cmp ecx, 5
  JMPTB je public_10005113
  JMPTB cmp ecx, 6
  JMPTB je public_1000523a
  JMPTB cmp ecx, 7
  JMPTB je public_100053c5
  JMPTB cmp ecx, 8
  JMPTB je public_1000541d
  JMPTB cmp ecx, 9
  JMPTB je public_10005424
  JMPTB int 3
        public_10004db7 : nop
        cmp eax, 0x102
        jb public_10004e5f
        cmp dword ptr ss : [esp+0x2C], 0xA
        jb public_10004e5f
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ebp
        sub eax, ebx
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi], ebp
        push edi
        mov dword ptr ds : [esi+0x34], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0x14]
        push esi
        push ecx
        movzx ecx, byte ptr ds : [eax+0x11]
        push edx
        movzx edx, byte ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_100054a0
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [esi+0x34]
        add esp, 0x18
        cmp edx, ecx
        mov dword ptr ss : [esp+0x30], eax
        jae public_10004e37
        sub ecx, edx
        dec ecx
        jmp public_10004e3c
        public_10004e37 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        sub ecx, edx
        public_10004e3c : nop
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_10004e5f
        xor ecx, ecx
        cmp eax, 1
        mov eax, dword ptr ss : [esp+0x10]
        setne cl
        lea ecx, ds:[ecx+ecx+7]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_100052f4
        public_10004e5f : nop
        mov eax, dword ptr ss : [esp+0x10]
        movzx ecx, byte ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], 1
        public_10004e76 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_10004ec7
        jmp public_10004e90
        lea esp, ss:[esp]
        mov edi, edi
        public_10004e90 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_10005361
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        movzx eax, byte ptr ss : [ebp]
        mov ecx, ebx
        shl eax, cl
        mov ecx, dword ptr ss : [esp+0x28]
        add ebx, 8
        mov dword ptr ss : [esp+0x30], 0
        or ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ecx
        jb public_10004e90
        public_10004ec7 : nop
        mov ecx, dword ptr ds : [eax*4+public_1000e120]
        and ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+8]
        lea eax, ds:[eax+ecx*8]
        movzx ecx, byte ptr ds : [eax+1]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x28]
        shr eax, cl
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], eax
        movzx eax, byte ptr ds : [ecx+1]
        sub ebx, eax
        movzx eax, byte ptr ds : [ecx]
        test eax, eax
        jne public_10004f18
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], 6
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_100052f4
        public_10004f18 : nop
        test al, 0x10
        je public_10004f3f
        mov ecx, dword ptr ss : [esp+0x10]
        and eax, 0xF
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], 2
        jmp public_100052f4
        public_10004f3f : nop
        test al, 0x40
        je public_10005084
        test al, 0x20
        mov eax, dword ptr ss : [esp+0x10]
        je public_1000533b
        mov dword ptr ds : [eax], 7
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_100052f4
        public_10004f62 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_10004fa8
        public_10004f71 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_10005361
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        movzx eax, byte ptr ss : [ebp]
        mov ecx, ebx
        shl eax, cl
        mov ecx, dword ptr ss : [esp+0x28]
        add ebx, 8
        mov dword ptr ss : [esp+0x30], 0
        or ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ecx
        jb public_10004f71
        public_10004fa8 : nop
        mov ecx, dword ptr ds : [eax*4+public_1000e120]
        and ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        shr dword ptr ss : [esp+0x28], cl
        mov eax, ecx
        sub ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        movzx ecx, byte ptr ds : [eax+0x11]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], 3
        jmp public_10004fe3
        public_10004fdf : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_10004fe3 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_10005027
        mov edi, edi
        public_10004ff0 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_10005361
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        movzx eax, byte ptr ss : [ebp]
        mov ecx, ebx
        shl eax, cl
        mov ecx, dword ptr ss : [esp+0x28]
        add ebx, 8
        mov dword ptr ss : [esp+0x30], 0
        or ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ecx
        jb public_10004ff0
        public_10005027 : nop
        mov ecx, dword ptr ds : [eax*4+public_1000e120]
        and ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+8]
        lea eax, ds:[eax+ecx*8]
        movzx ecx, byte ptr ds : [eax+1]
        mov dword ptr ss : [esp+0x18], eax
        shr dword ptr ss : [esp+0x28], cl
        mov eax, dword ptr ss : [esp+0x18]
        movzx ecx, byte ptr ds : [eax+1]
        movzx eax, byte ptr ds : [eax]
        sub ebx, ecx
        test al, 0x10
        je public_1000507c
        mov ecx, dword ptr ss : [esp+0x10]
        and eax, 0xF
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], 4
        jmp public_100052f4
        public_1000507c : nop
        test al, 0x40
        jne public_1000534c
        public_10005084 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[eax+ecx*8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_100052f4
        public_100050a5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_100050eb
        public_100050b4 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_10005361
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        movzx eax, byte ptr ss : [ebp]
        mov ecx, ebx
        shl eax, cl
        mov ecx, dword ptr ss : [esp+0x28]
        add ebx, 8
        mov dword ptr ss : [esp+0x30], 0
        or ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ecx
        jb public_100050b4
        public_100050eb : nop
        mov ecx, dword ptr ds : [eax*4+public_1000e120]
        and ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        shr dword ptr ss : [esp+0x28], cl
        mov eax, ecx
        sub ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 5
        public_10005113 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, edx
        sub eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [esi+0x28]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_1000514b
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        jmp public_10005140
        public_10005136 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_10005140 : nop
        add ecx, eax
        cmp ecx, dword ptr ds : [esi+0x28]
        jb public_10005136
        mov dword ptr ss : [esp+0x1C], ecx
        public_1000514b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x14]
        je public_100052ee
        mov edi, edi
        public_10005160 : nop
        test eax, eax
        jne public_100051f9
        mov eax, dword ptr ds : [esi+0x2C]
        cmp edx, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_10005192
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x28]
        cmp eax, ecx
        je public_10005192
        mov edx, ecx
        cmp edx, eax
        jae public_10005188
        sub eax, edx
        dec eax
        jmp public_1000518e
        public_10005188 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edx
        public_1000518e : nop
        test eax, eax
        jne public_100051f9
        public_10005192 : nop
        mov dword ptr ds : [esi+0x34], edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push edi
        push esi
        call public_100066f0
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 0xC
        cmp edx, eax
        mov dword ptr ss : [esp+0x20], eax
        jae public_100051bb
        sub eax, edx
        dec eax
        jmp public_100051c0
        public_100051bb : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, edx
        public_100051c0 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_100051f1
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_100051ed
        mov edx, ecx
        cmp edx, eax
        jae public_100051e5
        sub eax, edx
        dec eax
        jmp public_100051f1
        public_100051e5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edx
        jmp public_100051f1
        public_100051ed : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_100051f1 : nop
        test eax, eax
        je public_1000539c
        public_100051f9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [ecx]
        mov byte ptr ds : [edx], cl
        mov ecx, dword ptr ss : [esp+0x1C]
        inc edx
        inc ecx
        dec eax
        cmp ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_10005224
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x1C], ecx
        public_10005224 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        dec dword ptr ds : [ecx+4]
        cmp dword ptr ds : [ecx+4], 0
        jne public_10005160
        jmp public_100052ee
        public_1000523a : nop
        test eax, eax
        jne public_100052d3
        mov eax, dword ptr ds : [esi+0x2C]
        cmp edx, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_1000526c
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x28]
        cmp eax, ecx
        je public_1000526c
        mov edx, ecx
        cmp edx, eax
        jae public_10005262
        sub eax, edx
        dec eax
        jmp public_10005268
        public_10005262 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edx
        public_10005268 : nop
        test eax, eax
        jne public_100052d3
        public_1000526c : nop
        mov dword ptr ds : [esi+0x34], edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push edi
        push esi
        call public_100066f0
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 0xC
        cmp edx, eax
        mov dword ptr ss : [esp+0x20], eax
        jae public_10005295
        sub eax, edx
        dec eax
        jmp public_1000529a
        public_10005295 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, edx
        public_1000529a : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_100052cb
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_100052c7
        mov edx, ecx
        cmp edx, eax
        jae public_100052bf
        sub eax, edx
        dec eax
        jmp public_100052cb
        public_100052bf : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, edx
        jmp public_100052cb
        public_100052c7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_100052cb : nop
        test eax, eax
        je public_1000539c
        public_100052d3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [ecx+8]
        mov byte ptr ds : [edx], cl
        mov ecx, dword ptr ss : [esp+0x10]
        inc edx
        dec eax
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x14], eax
        public_100052ee : nop
        mov dword ptr ds : [ecx], 0
        public_100052f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, 9
        jbe public_10004db0
        public_10005303 : nop
        push 0xFFFFFFFE
        public_10005305 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [edi+8]
        mov ecx, ebp
        sub ecx, ebx
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        public_10005324 : nop
        push edi
        mov dword ptr ds : [edi], ebp
        push esi
        mov dword ptr ds : [esi+0x34], edx
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_1000533b : nop
        mov dword ptr ds : [eax], 9
        mov dword ptr ds : [edi+0x18], offset public_1000b230
        push 0xFFFFFFFD
        jmp public_10005305
        public_1000534c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 9
        mov dword ptr ds : [edi+0x18], offset public_1000b218
        push 0xFFFFFFFD
        jmp public_10005305
        public_10005361 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, ebp
        sub ecx, ebx
        add eax, ecx
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [esi+0x34], edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push edi
        push esi
        call public_100066f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_1000539c : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ebp
        sub eax, ebx
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        jmp public_10005324
        public_100053c5 : nop
        cmp ebx, 7
        jbe public_100053d7
        mov ecx, dword ptr ss : [esp+0x2C]
        sub ebx, 8
        inc ecx
        mov dword ptr ss : [esp+0x2C], ecx
        dec ebp
        public_100053d7 : nop
        mov dword ptr ds : [esi+0x34], edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push edi
        push esi
        call public_100066f0
        mov edx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 0xC
        cmp ecx, edx
        je public_10005413
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], ecx
        mov ecx, ebp
        sub ecx, ebx
        add dword ptr ds : [edi+8], ecx
        push eax
        jmp public_10005324
        public_10005413 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 8
        public_1000541d : nop
        push 1
        jmp public_10005305
        public_10005424 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ebp
        sub eax, ebx
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        push 0xFFFFFFFD
        jmp public_10005324
        UNREACHABLE_TRAP(0x10004d60)
        ASM_EXPORT_ENTRY_FIRST(0x10004db7, public_10004db7)
        ASM_EXPORT_ENTRY(0x10004e76, public_10004e76)
        ASM_EXPORT_ENTRY(0x10004f62, public_10004f62)
        ASM_EXPORT_ENTRY(0x10004fdf, public_10004fdf)
        ASM_EXPORT_ENTRY(0x100050a5, public_100050a5)
        ASM_EXPORT_ENTRY(0x10005113, public_10005113)
        ASM_EXPORT_ENTRY(0x1000523a, public_1000523a)
        ASM_EXPORT_ENTRY(0x100053c5, public_100053c5)
        ASM_EXPORT_ENTRY(0x1000541d, public_1000541d)
        ASM_EXPORT_ENTRY_LAST(0x10005424, public_10005424)
    }
}

#undef public_10004d98
#undef public_10004d9d
#undef public_10004db0
#undef public_10004db7
#undef public_10004e37
#undef public_10004e3c
#undef public_10004e5f
#undef public_10004e76
#undef public_10004e90
#undef public_10004ec7
#undef public_10004f18
#undef public_10004f3f
#undef public_10004f62
#undef public_10004f71
#undef public_10004fa8
#undef public_10004fdf
#undef public_10004fe3
#undef public_10004ff0
#undef public_10005027
#undef public_1000507c
#undef public_10005084
#undef public_100050a5
#undef public_100050b4
#undef public_100050eb
#undef public_10005113
#undef public_10005136
#undef public_10005140
#undef public_1000514b
#undef public_10005160
#undef public_10005188
#undef public_1000518e
#undef public_10005192
#undef public_100051bb
#undef public_100051c0
#undef public_100051e5
#undef public_100051ed
#undef public_100051f1
#undef public_100051f9
#undef public_10005224
#undef public_1000523a
#undef public_10005262
#undef public_10005268
#undef public_1000526c
#undef public_10005295
#undef public_1000529a
#undef public_100052bf
#undef public_100052c7
#undef public_100052cb
#undef public_100052d3
#undef public_100052ee
#undef public_100052f4
#undef public_10005303
#undef public_10005305
#undef public_10005324
#undef public_1000533b
#undef public_1000534c
#undef public_10005361
#undef public_1000539c
#undef public_100053c5
#undef public_100053d7
#undef public_10005413
#undef public_1000541d
#undef public_10005424

#pragma init_seg(compiler)
extern "C" void const* const public_10004db7 = __AsmFindLabelExport(&internal_10004d60, 0x10004db7);
extern "C" void const* const public_10004e76 = __AsmFindLabelExport(&internal_10004d60, 0x10004e76);
extern "C" void const* const public_10004f62 = __AsmFindLabelExport(&internal_10004d60, 0x10004f62);
extern "C" void const* const public_10004fdf = __AsmFindLabelExport(&internal_10004d60, 0x10004fdf);
extern "C" void const* const public_100050a5 = __AsmFindLabelExport(&internal_10004d60, 0x100050a5);
extern "C" void const* const public_10005113 = __AsmFindLabelExport(&internal_10004d60, 0x10005113);
extern "C" void const* const public_1000523a = __AsmFindLabelExport(&internal_10004d60, 0x1000523a);
extern "C" void const* const public_100053c5 = __AsmFindLabelExport(&internal_10004d60, 0x100053c5);
extern "C" void const* const public_1000541d = __AsmFindLabelExport(&internal_10004d60, 0x1000541d);
extern "C" void const* const public_10005424 = __AsmFindLabelExport(&internal_10004d60, 0x10005424);
