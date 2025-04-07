#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc970);
CLANG_FORWARD_JUMP_SYMBOL(public_6700d88);

#define public_66fc1c6 _public_66fc1c6
#define public_66fc1c9 _public_66fc1c9
#define public_66fc1de _public_66fc1de
#define public_66fc210 _public_66fc210
#define public_66fc251 _public_66fc251
#define public_66fc258 _public_66fc258
#define public_66fc324 _public_66fc324
#define public_66fc338 _public_66fc338
#define public_66fc345 _public_66fc345
#define public_66fc358 _public_66fc358
#define public_66fc369 _public_66fc369
#define public_66fc372 _public_66fc372
#define public_66fc385 _public_66fc385
#define public_66fc398 _public_66fc398
#define public_66fc39d _public_66fc39d
#define public_66fc3a2 _public_66fc3a2
#define public_66fc3a7 _public_66fc3a7
#define public_66fc3aa _public_66fc3aa
#define public_66fc3b2 _public_66fc3b2
#define public_66fc3d4 _public_66fc3d4
#define public_66fc3e4 _public_66fc3e4
#define public_66fc3f1 _public_66fc3f1
#define public_66fc400 _public_66fc400
#define public_66fc420 _public_66fc420
#define public_66fc758 _public_66fc758
#define public_66fc78a _public_66fc78a
#define public_66fc794 _public_66fc794
#define public_66fc79a _public_66fc79a
#define public_66fc7b8 _public_66fc7b8
#define public_66fc7ce _public_66fc7ce

PROC_DECLARE(0x66fc150, internal_66fc150, public_66fc150);
extern "C" NAKED register_t __cdecl internal_66fc150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700d88 @0x66fc158*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700d88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_66fc1c6
        cmp dword ptr ss : [esp+0x7C], edi
        je public_66fc1c6
        cmp dword ptr ss : [esp+0x84], edi
        je public_66fc1c6
        call public_66fc970
        cmp eax, edi
        je public_66fc1c6
        mov dword ptr ss : [esp+0x70], edi
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6702828 @0x66fc19e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702828
        push edx
        push eax
        mov dword ptr ss : [esp+0x74], edi
        call dword ptr ds : [ecx+0x78]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x70]
        jge public_66fc1de
        cmp eax, edi
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_66fc1c6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fc1c6 : nop
        or eax, 0xFFFFFFFF
        public_66fc1c9 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 0x20
        public_66fc1de : nop
        mov ebp, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [ebp+0x80]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, edi
        je public_66fc210
        mov eax, dword ptr ss : [esp+0x70]
        push 1
        push edi
        mov dword ptr ss : [ebp+0x80], edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, edi
        jl public_66fc7b8
        public_66fc210 : nop
        mov ebx, dword ptr ss : [ebp+0x80]
        mov eax, dword ptr ss : [esp+0x70]
        inc ebx
        push 0x180
        mov dword ptr ss : [ebp+0x80], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFF8
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        jne public_66fc258
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x70]
        cmp eax, edi
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_66fc251
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fc251 : nop
        xor eax, eax
        jmp public_66fc1c9
        public_66fc258 : nop
        push 0x180
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push 0x100
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push 0x100
        push eax
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x90]
        push edx
        push 0x80
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x80]
        push edx
        push 0x80
        push eax
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx+ecx*2]
        shl ecx, 1
        push ecx
        push 0x42
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, edi
        jl public_66fc794
        mov ebx, dword ptr ss : [esp+0x50]
        mov ecx, 0xC
        mov esi, ebx
        and esi, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], edi
        jne public_66fc324
        mov dword ptr ss : [esp+0x14], 0x1C
        jmp public_66fc345
        public_66fc324 : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_66fc338
        mov dword ptr ss : [esp+0x14], 0x10
        jmp public_66fc345
        public_66fc338 : nop
        mov eax, ebx
        and eax, 2
        cmp al, 2
        jne public_66fc345
        mov dword ptr ss : [esp+0x14], ecx
        public_66fc345 : nop
        mov eax, ebx
        and eax, 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], eax
        je public_66fc358
        mov dword ptr ss : [esp+0x20], ecx
        public_66fc358 : nop
        test bl, 0x40
        mov dword ptr ss : [esp+0x10], edi
        je public_66fc369
        mov dword ptr ss : [esp+0x10], 4
        public_66fc369 : nop
        test bl, bl
        jns public_66fc372
        add dword ptr ss : [esp+0x10], 4
        public_66fc372 : nop
        mov eax, ebx
        shr eax, 8
        xor edx, edx
        and eax, 0xF
        jle public_66fc3b2
        mov ecx, 0x10
        mov edi, eax
        public_66fc385 : nop
        mov eax, ebx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_66fc3aa
/*FIXUP jmp dword ptr ds : [eax*4+public_66fc7d8] @0x66fc391*/
  JMPTB cmp eax, 0
  JMPTB je public_66fc39d
  JMPTB cmp eax, 1
  JMPTB je public_66fc3a2
  JMPTB cmp eax, 2
  JMPTB je public_66fc3a7
  JMPTB cmp eax, 3
  JMPTB je public_66fc398
  JMPTB int 3
        public_66fc398 : nop
        add edx, 4
        jmp public_66fc3aa
        public_66fc39d : nop
        add edx, 8
        jmp public_66fc3aa
        public_66fc3a2 : nop
        add edx, 0xC
        jmp public_66fc3aa
        public_66fc3a7 : nop
        add edx, 0x10
        public_66fc3aa : nop
        add ecx, 2
        dec edi
        jne public_66fc385
        xor edi, edi
        public_66fc3b2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        add edx, eax
        add edx, ecx
        cmp esi, 0xC
        mov ecx, dword ptr ss : [esp+0x58]
        jne public_66fc3d4
        mov edi, 0x1C
        jmp public_66fc3f1
        public_66fc3d4 : nop
        mov eax, ebx
        and eax, 4
        cmp al, 4
        jne public_66fc3e4
        mov edi, 0x10
        jmp public_66fc3f1
        public_66fc3e4 : nop
        and ebx, 2
        cmp bl, 2
        jne public_66fc3f1
        mov edi, 0xC
        public_66fc3f1 : nop
        mov esi, dword ptr ss : [esp+0x24]
        xor eax, eax
        test esi, esi
        je public_66fc400
        mov eax, 0xC
        public_66fc400 : nop
        lea esi, ds:[eax+edi]
        mov edi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x18]
        add esi, edi
        xor edi, edi
        test eax, 0xFFFFFFFE
        jbe public_66fc758
        lea ebx, ds:[ebx]
        public_66fc420 : nop
        mov eax, dword ptr ss : [esp+0x28]
        movzx eax, word ptr ds : [eax+edi*2]
        mov ebx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx+eax*4]
        fcomp qword ptr ds : [public_6702820]
        fnstsw ax
        test ah, 0x41
        jnp public_66fc758
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi+edx], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add esi, edx
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi+edx], eax
        add esi, edx
        fld dword ptr ds : [ecx]
        add esi, edx
        fsub dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        add ecx, edx
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add esi, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi], eax
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [public_67029d4]
        add esi, edx
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi], eax
        add esi, edx
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi+edx], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        add esi, edx
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        add esi, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi], eax
        fld dword ptr ds : [ecx]
        fadd dword ptr ds : [public_67029d4]
        add esi, edx
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4]
        mov ebx, dword ptr ss : [esp+0x84]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add ecx, edx
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi+edx], eax
        add esi, edx
        fld dword ptr ds : [ecx]
        add esi, edx
        fadd dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x7C]
        movzx eax, word ptr ds : [eax+edi*4+2]
        mov ebx, dword ptr ss : [esp+0x84]
        add ecx, edx
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [ebp+0x7C]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], eax
        add esi, edx
        fld dword ptr ds : [ecx]
        fadd dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [public_67029d4]
        fstp dword ptr ds : [ecx+4]
        add ecx, edx
        add ebx, 0xC
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ss : [esp+0x18]
        inc edi
        shr eax, 1
        cmp edi, eax
        jb public_66fc420
        public_66fc758 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jbe public_66fc78a
        mov edx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push edx
        push eax
        push 4
        push ebp
        call dword ptr ds : [ecx+0x11C]
        public_66fc78a : nop
        inc dword ptr ds : [public_67045d8]
        xor edi, edi
        jmp public_66fc79a
        public_66fc794 : nop
        inc dword ptr ds : [public_67045d4]
        public_66fc79a : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x4C]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        public_66fc7b8 : nop
        mov eax, dword ptr ss : [esp+0x70]
        cmp eax, edi
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_66fc7ce
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66fc7ce : nop
        xor eax, eax
        jmp public_66fc1c9
        UNREACHABLE_TRAP(0x66fc150)
        ASM_EXPORT_ENTRY_FIRST(0x66fc398, public_66fc398)
        ASM_EXPORT_ENTRY(0x66fc39d, public_66fc39d)
        ASM_EXPORT_ENTRY(0x66fc3a2, public_66fc3a2)
        ASM_EXPORT_ENTRY_LAST(0x66fc3a7, public_66fc3a7)
    }
}

#undef public_66fc1c6
#undef public_66fc1c9
#undef public_66fc1de
#undef public_66fc210
#undef public_66fc251
#undef public_66fc258
#undef public_66fc324
#undef public_66fc338
#undef public_66fc345
#undef public_66fc358
#undef public_66fc369
#undef public_66fc372
#undef public_66fc385
#undef public_66fc398
#undef public_66fc39d
#undef public_66fc3a2
#undef public_66fc3a7
#undef public_66fc3aa
#undef public_66fc3b2
#undef public_66fc3d4
#undef public_66fc3e4
#undef public_66fc3f1
#undef public_66fc400
#undef public_66fc420
#undef public_66fc758
#undef public_66fc78a
#undef public_66fc794
#undef public_66fc79a
#undef public_66fc7b8
#undef public_66fc7ce

#pragma init_seg(compiler)
extern "C" void const* const public_66fc398 = __AsmFindLabelExport(&internal_66fc150, 0x66fc398);
extern "C" void const* const public_66fc39d = __AsmFindLabelExport(&internal_66fc150, 0x66fc39d);
extern "C" void const* const public_66fc3a2 = __AsmFindLabelExport(&internal_66fc150, 0x66fc3a2);
extern "C" void const* const public_66fc3a7 = __AsmFindLabelExport(&internal_66fc150, 0x66fc3a7);
