#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bf80);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cfc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3df70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f34);
CLANG_FORWARD_PROC_SYMBOL(public_6f58028);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58e71);

#define public_6f3bd27 _public_6f3bd27
#define public_6f3bd59 _public_6f3bd59
#define public_6f3bd70 _public_6f3bd70
#define public_6f3bdb0 _public_6f3bdb0
#define public_6f3bde3 _public_6f3bde3
#define public_6f3bde6 _public_6f3bde6
#define public_6f3bdea _public_6f3bdea
#define public_6f3bdfe _public_6f3bdfe
#define public_6f3be14 _public_6f3be14
#define public_6f3be3c _public_6f3be3c
#define public_6f3be80 _public_6f3be80
#define public_6f3beb3 _public_6f3beb3
#define public_6f3beb9 _public_6f3beb9
#define public_6f3bebd _public_6f3bebd
#define public_6f3bed5 _public_6f3bed5
#define public_6f3bef9 _public_6f3bef9
#define public_6f3bf17 _public_6f3bf17
#define public_6f3bf30 _public_6f3bf30
#define public_6f3bf3e _public_6f3bf3e
#define public_6f3bf64 _public_6f3bf64

PROC_DECLARE(0x6f3bca0, internal_6f3bca0, public_6f3bca0);
extern "C" NAKED register_t __cdecl internal_6f3bca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58e71 @0x6f3bca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58e71
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+8], 2
        mov dword ptr ss : [esp+0x24], ebp
        jb public_6f3bf64
        mov al, byte ptr ss : [ebp]
        push ebx
        push esi
        push 0xC
        mov byte ptr ss : [esp+0x10], al
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
/*FIXUP push offset _public_6f3bc10 @0x6f3bcee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f3bc10
/*FIXUP push offset _public_6f3bfe0 @0x6f3bcf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f3bfe0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x110], ebx
        call public_6f58028
        cmp dword ptr ss : [ebp+8], ebx
        mov byte ptr ss : [esp+0xFC], 1
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f3bf3e
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        public_6f3bd27 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx]
        cmp edx, ecx
        je public_6f3bd59
        mov esi, dword ptr ds : [ecx]
        cmp edx, esi
        je public_6f3bd59
        push esi
        push ecx
        push ebp
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f3df70
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+8]
        inc eax
        dec ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [ebp+8], ecx
        public_6f3bd59 : nop
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], edi
        jbe public_6f3bef9
        lea esi, ss:[esp+0x3C]
        nop 
        lea esp, ss:[esp]
        public_6f3bd70 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f3be3c
        lea ecx, ds:[esi-4]
        lea edx, ss:[esp+0x10]
        cmp edx, ecx
        je public_6f3be14
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6f3bf80
        cmp ebp, ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], edx
        je public_6f3bdea
        lea esp, ss:[esp]
        public_6f3bdb0 : nop
        cmp ecx, edx
        je public_6f3bdfe
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [ebp+8]
        fnstsw ax
        test ah, 5
        jp public_6f3bde3
        mov edi, dword ptr ds : [ecx]
        push edi
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        lea ecx, ds:[esi-4]
        call public_6f3df70
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_6f3bde6
        public_6f3bde3 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6f3bde6 : nop
        cmp ebp, ebx
        jne public_6f3bdb0
        public_6f3bdea : nop
        cmp ecx, edx
        je public_6f3bdfe
        push edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea ecx, ds:[esi-4]
        call public_6f3df70
        public_6f3bdfe : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        add ecx, eax
        mov dword ptr ds : [esi+4], ecx
        xor eax, eax
        public_6f3be14 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        inc edi
        mov eax, ecx
        add esi, 0xC
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x2C], edi
        jb public_6f3bd70
        public_6f3be3c : nop
        cmp edi, 0xF
        jne public_6f3bef9
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_6f3bf80
        mov ebx, dword ptr ss : [esp+0xF0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6f3bf80
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, ebx
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        je public_6f3bebd
        nop 
        lea esp, ss:[esp]
        public_6f3be80 : nop
        cmp ecx, ebp
        je public_6f3bed5
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 5
        jp public_6f3beb3
        mov esi, dword ptr ds : [ecx]
        push esi
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        lea ecx, ss:[esp+0xFC]
        call public_6f3df70
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_6f3beb9
        public_6f3beb3 : nop
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], edx
        public_6f3beb9 : nop
        cmp edx, ebx
        jne public_6f3be80
        public_6f3bebd : nop
        cmp ecx, ebp
        je public_6f3bed5
        push ebp
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0xFC]
        call public_6f3df70
        public_6f3bed5 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF4]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        add eax, edx
        mov dword ptr ss : [esp+0xF4], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f3bf17
        public_6f3bef9 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[edi+edi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x3C]
        call public_6f3cf90
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x18]
        jne public_6f3bf17
        inc ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_6f3bf17 : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        jne public_6f3bd27
        test ebx, ebx
        pop edi
        jbe public_6f3bf3e
        lea edx, ds:[ebx+ebx*2]
        lea esi, ss:[esp+edx*4+0x34]
        mov edi, edi
        public_6f3bf30 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebp
        call public_6f3cfc0
        dec ebx
        jne public_6f3bf30
/*FIXUP public_6f3bf3e : nop
        push offset _public_6f3bc10 @0x6f3bf3e*/
  FIXUP public_6f3bf3e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f3bc10
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x40]
        push eax
        mov byte ptr ss : [esp+0x10C], 0
        call public_6f57f34
        lea ecx, ss:[esp+0xC]
        call public_6f3bc10
        pop esi
        pop ebx
        public_6f3bf64 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6f3bca0)
    }
}

#undef public_6f3bd27
#undef public_6f3bd59
#undef public_6f3bd70
#undef public_6f3bdb0
#undef public_6f3bde3
#undef public_6f3bde6
#undef public_6f3bdea
#undef public_6f3bdfe
#undef public_6f3be14
#undef public_6f3be3c
#undef public_6f3be80
#undef public_6f3beb3
#undef public_6f3beb9
#undef public_6f3bebd
#undef public_6f3bed5
#undef public_6f3bef9
#undef public_6f3bf17
#undef public_6f3bf30
#undef public_6f3bf3e
#undef public_6f3bf64
