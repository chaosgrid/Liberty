#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661db70);

#define public_661db8c _public_661db8c
#define public_661dbaf _public_661dbaf
#define public_661dbd0 _public_661dbd0
#define public_661dbe0 _public_661dbe0
#define public_661dc12 _public_661dc12
#define public_661dc3d _public_661dc3d
#define public_661dc4e _public_661dc4e
#define public_661dc5d _public_661dc5d
#define public_661dc6b _public_661dc6b
#define public_661dc7a _public_661dc7a
#define public_661dc96 _public_661dc96
#define public_661dc98 _public_661dc98
#define public_661dcaa _public_661dcaa
#define public_661dcae _public_661dcae
#define public_661dcb6 _public_661dcb6
#define public_661dcda _public_661dcda
#define public_661dce9 _public_661dce9
#define public_661dcf4 _public_661dcf4
#define public_661dcfb _public_661dcfb
#define public_661dd2d _public_661dd2d
#define public_661dd39 _public_661dd39
#define public_661dd47 _public_661dd47
#define public_661dd4e _public_661dd4e
#define public_661dd55 _public_661dd55
#define public_661dd5e _public_661dd5e
#define public_661dd65 _public_661dd65
#define public_661dd6c _public_661dd6c
#define public_661dd74 _public_661dd74
#define public_661dd8d _public_661dd8d
#define public_661dda3 _public_661dda3
#define public_661ddb5 _public_661ddb5
#define public_661ddec _public_661ddec
#define public_661de00 _public_661de00
#define public_661de2b _public_661de2b
#define public_661de50 _public_661de50
#define public_661de74 _public_661de74
#define public_661deb5 _public_661deb5
#define public_661dee6 _public_661dee6
#define public_661df72 _public_661df72
#define public_661df91 _public_661df91
#define public_661e04e _public_661e04e
#define public_661e05b _public_661e05b
#define public_661e12e _public_661e12e
#define public_661e152 _public_661e152
#define public_661e15e _public_661e15e
#define public_661e16d _public_661e16d
#define public_661e192 _public_661e192

PROC_DECLARE(0x661db70, internal_661db70, public_661db70);
extern "C" NAKED register_t __cdecl internal_661db70()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+0x24], ebp
        mov ecx, dword ptr ss : [ebp+0xC]
        test cl, 0xF0
        jne public_661db8c
        test ch, 1
        je public_661e192
        public_661db8c : nop
        test cl, 9
        jne public_661e16d
        fld dword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6629238]
        mov byte ptr ss : [esp+0xF], 0
        fnstsw ax
        test ah, 5
        jp public_661dbaf
        mov byte ptr ss : [esp+0xF], 1
        public_661dbaf : nop
        xor al, al
        xor dl, dl
        test cl, 2
        mov byte ptr ss : [esp+0xB], 0
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], dl
        je public_661dbd0
        mov al, 1
        mov byte ptr ss : [esp+0xB], 1
        mov byte ptr ss : [esp+0x11], al
        public_661dbd0 : nop
        test cl, 0x10
        je public_661dbe0
        mov dl, 1
        mov byte ptr ss : [esp+0xB], 1
        mov byte ptr ss : [esp+0x12], dl
        public_661dbe0 : nop
        test al, al
        je public_661dc12
        test dl, dl
        je public_661dc12
/*FIXUP push offset public_662a410 @0x661dbe8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a410
        push 0x15F
        mov eax, 0x100000
/*FIXUP push offset public_662a3c0 @0x661dbf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a3c0
/*FIXUP push offset public_662a1e8 @0x661dbfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_661dc12 : nop
        xor bl, bl
        xor dl, dl
        test cl, 4
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x13], dl
        mov byte ptr ss : [esp+0xE], dl
        mov byte ptr ss : [esp+0xC], dl
        mov byte ptr ss : [esp+0xD], dl
        je public_661dc3d
        mov bl, 1
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0x10], bl
        public_661dc3d : nop
        test cl, 0x20
        je public_661dc4e
        mov bl, 1
        mov dl, bl
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0x13], dl
        public_661dc4e : nop
        test cl, 0x40
        je public_661dc5d
        mov bl, 1
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0xE], bl
        public_661dc5d : nop
        test cl, cl
        jns public_661dc6b
        mov bl, 1
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0xC], bl
        public_661dc6b : nop
        test ch, 1
        je public_661dc7a
        mov bl, 1
        mov byte ptr ss : [esp+0xA], bl
        mov byte ptr ss : [esp+0xD], bl
        public_661dc7a : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        jne public_661dc96
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        jne public_661dc96
        mov al, byte ptr ss : [esp+0xD]
        test al, al
        jne public_661dc96
        xor al, al
        jmp public_661dc98
        public_661dc96 : nop
        mov al, 1
        public_661dc98 : nop
        mov cl, byte ptr ss : [esp+0x10]
        test cl, cl
        je public_661dcaa
        test dl, dl
        jne public_661de00
        jmp public_661dcae
        public_661dcaa : nop
        test dl, dl
        je public_661dcb6
        public_661dcae : nop
        test al, al
        jne public_661de00
        public_661dcb6 : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        mov al, byte ptr ss : [esp+0xC]
        je public_661ddec
        test al, al
        jne public_661de00
        mov al, byte ptr ss : [esp+0xD]
        test al, al
        jne public_661de00
        public_661dcda : nop
        mov al, byte ptr ss : [esp+0xF]
        xor ecx, ecx
        test al, al
        je public_661dce9
        mov ecx, 1
        public_661dce9 : nop
        mov al, byte ptr ss : [esp+0xB]
        test al, al
        je public_661dcf4
        add ecx, 3
        public_661dcf4 : nop
        test bl, bl
        je public_661dcfb
        add ecx, 4
        public_661dcfb : nop
        mov eax, dword ptr ss : [ebp+4]
        imul eax, ecx
        shl eax, 2
        push eax
        call dword ptr ds : [public_662903c]
        mov edx, dword ptr ss : [ebp+0xC]
        mov cl, byte ptr ss : [esp+0xF]
        add esp, 4
        and edx, 0xFFFFFE0F
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [ebp+0xC], edx
        test cl, cl
        mov eax, edx
        je public_661dd2d
        or al, 2
        mov dword ptr ss : [ebp+0xC], eax
        public_661dd2d : nop
        test bl, bl
        je public_661dd39
        mov eax, dword ptr ss : [ebp+0xC]
        or al, 4
        mov dword ptr ss : [ebp+0xC], eax
        public_661dd39 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        xor ecx, ecx
        test al, 1
        je public_661dd47
        mov ecx, 4
        public_661dd47 : nop
        test al, 2
        je public_661dd4e
        add ecx, 0xC
        public_661dd4e : nop
        test al, 4
        je public_661dd55
        add ecx, 0x10
        public_661dd55 : nop
        test al, 8
        je public_661dd5e
        mov ecx, 4
        public_661dd5e : nop
        test al, 0x40
        je public_661dd65
        add ecx, 6
        public_661dd65 : nop
        test al, al
        jns public_661dd6c
        add ecx, 6
        public_661dd6c : nop
        test ah, 1
        je public_661dd74
        add ecx, 8
        public_661dd74 : nop
        fld dword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6629238]
        mov dword ptr ss : [ebp+0x14], ecx
        fnstsw ax
        test ah, 5
        jp public_661dd8d
        add ecx, 4
        mov dword ptr ss : [ebp+0x14], ecx
        public_661dd8d : nop
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        xor ebx, ebx
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test eax, eax
        jbe public_661e15e
        public_661dda3 : nop
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_661ddb5
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edx
        add esi, 4
        add edi, 4
        public_661ddb5 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_661de74
        mov al, byte ptr ss : [esp+0x19]
        test al, al
        je public_661de2b
        mov eax, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ds : [esi], eax
        add esi, 4
        mov ecx, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ds : [esi], ecx
        add esi, 4
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edx
        add esi, 4
        add edi, 4
        jmp public_661de74
        public_661ddec : nop
        test al, al
        je public_661dcda
        mov al, byte ptr ss : [esp+0xD]
        test al, al
        je public_661dcda
        public_661de00 : nop
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a38c @0x661de06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a38c
        push 0x199
        mov eax, 0x100000
/*FIXUP push offset public_662a3c0 @0x661de15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a3c0
/*FIXUP push offset public_662a1e8 @0x661de1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_661de2b : nop
        mov al, byte ptr ss : [esp+0x1A]
        test al, al
        je public_661de50
        mov dword ptr ds : [esi], 0
        add esi, 4
        mov dword ptr ds : [esi], 0
        add esi, 4
        mov dword ptr ds : [esi], 0
        add esi, 4
        jmp public_661de74
/*FIXUP public_661de50 : nop
        push offset public_662a370 @0x661de50*/
  FIXUP public_661de50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a370
        push 0x1F0
        mov eax, 0x100000
/*FIXUP push offset public_662a3c0 @0x661de5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a3c0
/*FIXUP push offset public_662a1e8 @0x661de64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_661de74 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_661e152
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_661deb5
        mov ecx, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ds : [esi], ecx
        add esi, 4
        mov edx, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ds : [esi], edx
        add esi, 4
        mov eax, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ds : [esi], eax
        add esi, 4
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        add edi, 4
        jmp public_661e152
        public_661deb5 : nop
        mov al, byte ptr ss : [esp+0x1B]
        test al, al
        je public_661dee6
        mov dword ptr ds : [esi], 0x3F800000
        add esi, 4
        mov dword ptr ds : [esi], 0
        add esi, 4
        mov dword ptr ds : [esi], 0
        add esi, 4
        mov dword ptr ds : [esi], 0
        add esi, 4
        jmp public_661e152
        public_661dee6 : nop
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        je public_661df91
        mov cx, word ptr ds : [edi]
        mov dx, word ptr ds : [edi+2]
        movsx ecx, cx
        lea eax, ds:[edi+2]
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        movsx edx, dx
        fmul dword ptr ds : [public_662955c]
        add eax, 2
        mov dword ptr ss : [esp+0x24], edx
        fild dword ptr ss : [esp+0x24]
        lea edi, ds:[eax+2]
        movsx eax, word ptr ds : [eax]
        fmul dword ptr ds : [public_662955c]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_662955c]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_66291e0]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_66294f8]
        fnstsw ax
        test ah, 5
        jp public_661df72
        fstp st(0)
        fld dword ptr ds : [public_66294f8]
        fsub dword ptr ss : [esp+0x24]
        fsqrt 
        public_661df72 : nop
        fstp dword ptr ds : [esi]
        add esi, 4
        mov ecx, dword ptr ss : [esp+0x1C]
        fxch 
        fstp dword ptr ds : [esi]
        add esi, 4
        fstp dword ptr ds : [esi]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        add esi, 4
        jmp public_661e152
        public_661df91 : nop
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_661e05b
        mov cx, word ptr ds : [edi]
        mov dx, word ptr ds : [edi+2]
        movsx ecx, cx
        lea eax, ds:[edi+2]
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        movsx edx, dx
        fmul dword ptr ds : [public_662955c]
        add eax, 2
        mov dword ptr ss : [esp+0x24], edx
        fild dword ptr ss : [esp+0x24]
        lea edi, ds:[eax+2]
        movsx eax, word ptr ds : [eax]
        fmul dword ptr ds : [public_662955c]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_662955c]
        fst dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcom dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x4100
        jne public_661e04e
        fsqrt 
        fld dword ptr ds : [public_66294ec]
        fmul st, st(1)
        fmul qword ptr ds : [public_6629500]
        fsin 
        fst dword ptr ss : [esp+0x20]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fsubr qword ptr ds : [public_6629220]
        fsqrt 
        fld dword ptr ss : [esp+0x24]
        fmulp st(3), st
        fld dword ptr ss : [esp+0x24]
        fmulp st(2), st
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_661df72
        public_661e04e : nop
        fstp st(0)
        fld dword ptr ds : [public_66294f8]
        jmp public_661df72
        public_661e05b : nop
        mov al, byte ptr ss : [esp+0x15]
        test al, al
        je public_661e12e
        mov cx, word ptr ds : [edi]
        mov dx, word ptr ds : [edi+2]
        movsx ecx, cx
        lea eax, ds:[edi+2]
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        mov bp, word ptr ds : [eax+2]
        add eax, 2
        movsx edx, dx
        fmul dword ptr ds : [public_662955c]
        mov dword ptr ss : [esp+0x24], edx
        add eax, 2
        fild dword ptr ss : [esp+0x24]
        movsx ecx, bp
        fmul dword ptr ds : [public_662955c]
        movsx edx, word ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x24]
        add esi, 4
        mov ebp, dword ptr ss : [esp+0x2C]
        add esi, 4
        lea edi, ds:[eax+2]
        fmul dword ptr ds : [public_662955c]
        add esi, 4
        add esi, 4
        fstp dword ptr ss : [esp+0x24]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_662955c]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsubr dword ptr ds : [public_6629558]
        fmul dword ptr ds : [public_6629510]
        fst dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fstp dword ptr ds : [esi-0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ds : [esi-0xC]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [esi-8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [esi-4]
        jmp public_661e152
/*FIXUP public_661e12e : nop
        push offset public_662a350 @0x661e12e*/
  FIXUP public_661e12e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a350
        push 0x28E
        mov eax, 0x100000
/*FIXUP push offset public_662a3c0 @0x661e13d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a3c0
/*FIXUP push offset public_662a1e8 @0x661e142*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_661e152 : nop
        mov eax, dword ptr ss : [ebp+4]
        inc ebx
        cmp ebx, eax
        jb public_661dda3
        public_661e15e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov dword ptr ss : [ebp+0x10], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_661e16d : nop
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a314 @0x661e173*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a314
        push 0x13C
        mov eax, 0x100000
/*FIXUP push offset public_662a3c0 @0x661e182*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a3c0
/*FIXUP push offset public_662a1e8 @0x661e187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_661e192 : nop
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x661db70)
    }
}

#undef public_661db8c
#undef public_661dbaf
#undef public_661dbd0
#undef public_661dbe0
#undef public_661dc12
#undef public_661dc3d
#undef public_661dc4e
#undef public_661dc5d
#undef public_661dc6b
#undef public_661dc7a
#undef public_661dc96
#undef public_661dc98
#undef public_661dcaa
#undef public_661dcae
#undef public_661dcb6
#undef public_661dcda
#undef public_661dce9
#undef public_661dcf4
#undef public_661dcfb
#undef public_661dd2d
#undef public_661dd39
#undef public_661dd47
#undef public_661dd4e
#undef public_661dd55
#undef public_661dd5e
#undef public_661dd65
#undef public_661dd6c
#undef public_661dd74
#undef public_661dd8d
#undef public_661dda3
#undef public_661ddb5
#undef public_661ddec
#undef public_661de00
#undef public_661de2b
#undef public_661de50
#undef public_661de74
#undef public_661deb5
#undef public_661dee6
#undef public_661df72
#undef public_661df91
#undef public_661e04e
#undef public_661e05b
#undef public_661e12e
#undef public_661e152
#undef public_661e15e
#undef public_661e16d
#undef public_661e192
