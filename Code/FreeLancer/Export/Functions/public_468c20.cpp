#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_468c20);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb55b);

#define public_468eb7 _public_468eb7
#define public_468f06 _public_468f06
#define public_468f41 _public_468f41
#define public_468f76 _public_468f76
#define public_468f91 _public_468f91

PROC_DECLARE(0x468c20, internal_468c20, public_468c20);
extern "C" NAKED register_t __cdecl internal_468c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb55b @0x468c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb55b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ds : [public_5c6310]
        push edi
/*FIXUP push offset public_66da14 @0x468c41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66da14
        push 0xD5EC
        call esi
/*FIXUP push offset public_66da0c @0x468c4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66da0c
        push 0x73F7
        call esi
/*FIXUP push offset public_66da04 @0x468c59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66da04
        push 0xD681
        call esi
/*FIXUP push offset public_66d9fc @0x468c65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9fc
        push 0xD801
        call esi
/*FIXUP push offset public_66d9f4 @0x468c71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9f4
        push 0x1D9D
        call esi
/*FIXUP push offset public_66d9ec @0x468c7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9ec
        push 0x8283
        call esi
/*FIXUP push offset public_66d9e4 @0x468c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9e4
        push 0xE784
        call esi
/*FIXUP push offset public_66d9dc @0x468c95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9dc
        push 0x3EA8
        call esi
        add esp, 0x40
/*FIXUP push offset public_66d9d4 @0x468ca4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9d4
        push 0xBA28
        call esi
/*FIXUP push offset public_66d9cc @0x468cb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9cc
        push 0x66B7
        call esi
/*FIXUP push offset public_66d9c4 @0x468cbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9c4
        push 0x2B34
        call esi
/*FIXUP push offset public_66d9bc @0x468cc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9bc
        push 0x66AC
        call esi
/*FIXUP push offset public_66d9b4 @0x468cd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9b4
        push 0x828B
        call esi
/*FIXUP push offset public_66d9ac @0x468ce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9ac
        push 0x1DF5
        call esi
/*FIXUP push offset public_66d9a4 @0x468cec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d9a4
        push 0x43E0
        call esi
/*FIXUP push offset public_66d99c @0x468cf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d99c
        push 0xD824
        call esi
        add esp, 0x40
/*FIXUP push offset public_66d994 @0x468d07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d994
        push 0xD190
        call esi
/*FIXUP push offset public_66d98c @0x468d13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d98c
        push 0x69F5
        call esi
/*FIXUP push offset public_66d984 @0x468d1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d984
        push 0x3343
        call esi
/*FIXUP push offset public_66d97c @0x468d2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d97c
        push 0xBB80
        call esi
/*FIXUP push offset public_66d974 @0x468d37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d974
        push 0x5203
        call esi
/*FIXUP push offset public_66d96c @0x468d43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d96c
        push 0x3DBC
        call esi
/*FIXUP push offset public_66d964 @0x468d4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d964
        push 0x867F
        call esi
        mov eax, dword ptr ds : [public_679bb4]
        mov byte ptr ds : [public_66d95d], al
        mov al, byte ptr ds : [public_679bb6]
        mov byte ptr ds : [public_66d95e], ah
        mov byte ptr ds : [public_66d95f], al
/*FIXUP push offset public_66d95c @0x468d75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d95c
        push 0x9CA4
        call esi
        add esp, 0x40
/*FIXUP push offset public_66d95c @0x468d84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d95c
        push 0x76EC
        call esi
        mov eax, dword ptr ds : [public_679bb4]
        mov cl, byte ptr ds : [public_679bb6]
/*FIXUP push offset public_66d954 @0x468d9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d954
        push 0x686C
        mov byte ptr ds : [public_66d955], al
        mov byte ptr ds : [public_66d956], ah
        mov byte ptr ds : [public_66d957], cl
        call esi
        mov eax, dword ptr ds : [public_679bb4]
        mov dl, byte ptr ds : [public_679bb6]
/*FIXUP push offset public_66d94c @0x468dc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d94c
        push 0xF64
        mov byte ptr ds : [public_66d94d], al
        mov byte ptr ds : [public_66d94e], ah
        mov byte ptr ds : [public_66d94f], dl
        call esi
        mov eax, dword ptr ds : [public_679ba4]
        mov byte ptr ds : [public_66d95d], al
        mov al, byte ptr ds : [public_679ba6]
/*FIXUP push offset public_66d95c @0x468def*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d95c
        push 0x3D0A
        mov byte ptr ds : [public_66d95e], ah
        mov byte ptr ds : [public_66d95f], al
        call esi
        mov cl, byte ptr ss : [esp+0x2F]
        add esp, 0x20
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x20], cl
        push ebx
        lea ecx, ss:[esp+0x24]
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov edx, dword ptr ss : [esp+0x15]
        push ebx
        and edx, 0xFFE0C387
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x1C]
        or edx, 0xE0C387
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x50], ebx
        mov byte ptr ss : [esp+0x20], 8
        mov dword ptr ss : [esp+0x21], edx
        call dword ptr ds : [public_5c630c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x4C], 2
        call public_42a7e0
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov byte ptr ss : [esp+0x44], 1
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_468eb7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_468eb7 : nop
        push ebp
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x48], bl
        call dword ptr ds : [public_5c6308]
        push 1
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x48], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [esi+4]
        mov ebp, esi
        add esi, 4
        push 0xC
        mov byte ptr ss : [esp+0x4C], 4
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], ebp
        pop ebp
        jne public_468f06
        mov edi, eax
        public_468f06 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x44], 3
        je public_468f41
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ebx
        public_468f41 : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        call dword ptr ds : [public_5c62bc]
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x4433
        call dword ptr ds : [public_5c6304]
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov edi, eax
        je public_468f91
        public_468f76 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_46d680
        cmp esi, edi
        jne public_468f76
        mov eax, dword ptr ss : [esp+0x20]
        public_468f91 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x468c20)
    }
}

#undef public_468eb7
#undef public_468f06
#undef public_468f41
#undef public_468f76
#undef public_468f91
