#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1900);
CLANG_FORWARD_PROC_SYMBOL(public_65f9170);

#define public_65f1924 _public_65f1924
#define public_65f1977 _public_65f1977
#define public_65f1992 _public_65f1992
#define public_65f19fd _public_65f19fd
#define public_65f1a2b _public_65f1a2b
#define public_65f1a53 _public_65f1a53
#define public_65f1a78 _public_65f1a78
#define public_65f1a9d _public_65f1a9d
#define public_65f1b03 _public_65f1b03
#define public_65f1b11 _public_65f1b11
#define public_65f1b16 _public_65f1b16
#define public_65f1b23 _public_65f1b23
#define public_65f1b27 _public_65f1b27
#define public_65f1b42 _public_65f1b42
#define public_65f1b5a _public_65f1b5a
#define public_65f1bab _public_65f1bab
#define public_65f1bb9 _public_65f1bb9
#define public_65f1bc3 _public_65f1bc3
#define public_65f1bdc _public_65f1bdc

PROC_DECLARE(0x65f1900, internal_65f1900, public_65f1900);
extern "C" NAKED register_t __cdecl internal_65f1900()
{
    __asm
    {
        sub esp, 0x40
        mov eax, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax+0x14]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ds : [public_6603128], eax
        jne public_65f1924
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 4
        public_65f1924 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+4]
        call dword ptr ds : [public_6601000]
        mov esi, eax
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_6602178 @0x65f1938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602178
        mov dword ptr ss : [esp+0x10], ebx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx]
        test eax, eax
        jl public_65f1b5a
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x54], ebx
        je public_65f1977
        lea ecx, ss:[esp+0x54]
        call public_65f9170
        mov dword ptr ss : [esp+0x54], edi
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, ebx
        jne public_65f1992
        public_65f1977 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_6602178 @0x65f197e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602178
        push esi
        call dword ptr ds : [edx]
        test eax, eax
        jne public_65f1b23
        mov eax, dword ptr ss : [esp+0x54]
        public_65f1992 : nop
        mov ecx, dword ptr ds : [eax]
        push 3
/*FIXUP push offset public_660216c @0x65f1996*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660216c
        push eax
        xor esi, esi
        call dword ptr ds : [ecx+0x14]
        mov ebp, eax
        cmp ebp, ebx
        je public_65f1b27
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [eax]
        push 0x400
/*FIXUP push offset public_6603700 @0x65f19b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
/*FIXUP push offset public_6602160 @0x65f19bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602160
        push ebp
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_65f1b16
        mov ecx, 9
        mov esi, offset public_6602138
        lea edi, ss:[esp+0x28]
        rep movsd
        lea eax, ss:[esp+0x28]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_660103c]
/*FIXUP push offset public_6603700 @0x65f19e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call edi
        add esp, 8
        cmp eax, ebx
        je public_65f19fd
        mov byte ptr ds : [eax+public_6603700], bl
        public_65f19fd : nop
        mov esi, dword ptr ds : [public_6601004]
/*FIXUP push offset public_6602130 @0x65f1a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602130
/*FIXUP push offset public_6603700 @0x65f1a08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1a2b
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        mov esi, 1
        call dword ptr ds : [ecx+0x18]
        jmp public_65f1b27
/*FIXUP public_65f1a2b : nop
        push offset public_660212c @0x65f1a2b*/
  FIXUP public_65f1a2b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_660212c
/*FIXUP push offset public_6603700 @0x65f1a30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1a53
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        mov esi, 1
        call dword ptr ds : [ecx+0x18]
        jmp public_65f1b27
/*FIXUP public_65f1a53 : nop
        push offset public_6602124 @0x65f1a53*/
  FIXUP public_65f1a53 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602124
/*FIXUP push offset public_6603700 @0x65f1a58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1a78
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        xor esi, esi
        call dword ptr ds : [ecx+0x18]
        jmp public_65f1b27
/*FIXUP public_65f1a78 : nop
        push offset public_6602120 @0x65f1a78*/
  FIXUP public_65f1a78 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602120
/*FIXUP push offset public_6603700 @0x65f1a7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1a9d
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        xor esi, esi
        call dword ptr ds : [ecx+0x18]
        jmp public_65f1b27
        public_65f1a9d : nop
        mov esi, dword ptr ds : [public_6601050]
        push 0x78
/*FIXUP push offset public_6603700 @0x65f1aa5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1b03
        push 0x58
/*FIXUP push offset public_6603700 @0x65f1ab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call esi
        add esp, 8
        test eax, eax
        jne public_65f1b03
        mov edx, dword ptr ds : [public_6602114]
        mov ecx, dword ptr ds : [public_6602110]
        mov eax, dword ptr ds : [public_6602118]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [public_660211c]
        push edx
/*FIXUP push offset public_6603700 @0x65f1ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], cl
        call edi
/*FIXUP push offset public_6603700 @0x65f1af6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call dword ptr ds : [public_6601054]
        jmp public_65f1b11
        public_65f1b03 : nop
        push 0x10
        push ebx
/*FIXUP push offset public_6603700 @0x65f1b06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603700
        call dword ptr ds : [public_6601058]
        public_65f1b11 : nop
        add esp, 0xC
        mov esi, eax
        public_65f1b16 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x18]
        jmp public_65f1b27
        public_65f1b23 : nop
        mov esi, dword ptr ss : [esp+0x54]
        public_65f1b27 : nop
        lea ecx, ss:[esp+0x54]
        call public_65f9170
        cmp esi, ebx
        pop edi
        pop ebp
        jne public_65f1b42
        mov dword ptr ds : [public_660314c], 0
        jmp public_65f1b5a
        public_65f1b42 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        fdivr dword ptr ds : [public_66011e0]
        fstp dword ptr ds : [public_660314c]
        public_65f1b5a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6603134 @0x65f1b60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603134
/*FIXUP push offset public_6602100 @0x65f1b65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602100
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        pop esi
        jge public_65f1bc3
/*FIXUP push offset public_66020b8 @0x65f1b72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66020b8
        push 0xB5
/*FIXUP push offset public_6602070 @0x65f1b7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602070
        mov eax, 0x100001
/*FIXUP push offset public_6602054 @0x65f1b86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602054
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6603128]
        add esp, 0x14
        cmp eax, ebx
        je public_65f1bab
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6603128], ebx
        public_65f1bab : nop
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ebx
        je public_65f1bb9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f1bb9 : nop
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 4
        public_65f1bc3 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ebx
        je public_65f1bdc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f1bdc : nop
        xor eax, eax
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x65f1900)
    }
}

#undef public_65f1924
#undef public_65f1977
#undef public_65f1992
#undef public_65f19fd
#undef public_65f1a2b
#undef public_65f1a53
#undef public_65f1a78
#undef public_65f1a9d
#undef public_65f1b03
#undef public_65f1b11
#undef public_65f1b16
#undef public_65f1b23
#undef public_65f1b27
#undef public_65f1b42
#undef public_65f1b5a
#undef public_65f1bab
#undef public_65f1bb9
#undef public_65f1bc3
#undef public_65f1bdc
