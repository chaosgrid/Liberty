#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_638ef50);
CLANG_FORWARD_PROC_SYMBOL(public_638f330);
CLANG_FORWARD_PROC_SYMBOL(public_638f400);
CLANG_FORWARD_PROC_SYMBOL(public_638f650);
CLANG_FORWARD_PROC_SYMBOL(public_638f950);
CLANG_FORWARD_PROC_SYMBOL(public_6390b10);
CLANG_FORWARD_PROC_SYMBOL(public_6391870);
CLANG_FORWARD_PROC_SYMBOL(public_63919b0);

#define public_638ef6f _public_638ef6f
#define public_638efa2 _public_638efa2
#define public_638efbc _public_638efbc
#define public_638efef _public_638efef
#define public_638f031 _public_638f031
#define public_638f04d _public_638f04d
#define public_638f069 _public_638f069
#define public_638f092 _public_638f092
#define public_638f0cf _public_638f0cf
#define public_638f0e2 _public_638f0e2
#define public_638f116 _public_638f116

PROC_DECLARE(0x638ef50, internal_638ef50, public_638ef50);
extern "C" NAKED register_t __cdecl internal_638ef50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_658b670]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        jne public_638ef6f
        call public_6374610
        public_638ef6f : nop
        mov eax, dword ptr ds : [public_658bf58]
        mov ecx, dword ptr ds : [public_658b1d0]
        inc eax
        cmp ecx, esi
        mov dword ptr ds : [public_658bf58], eax
        je public_638efa2
        cmp dword ptr ds : [public_658b8c0], esi
        je public_638efa2
        mov edx, dword ptr ds : [public_658b944]
        add edx, ecx
        cmp eax, edx
        jle public_638efa2
        call public_63919b0
        mov eax, dword ptr ds : [public_658bf58]
        public_638efa2 : nop
        cmp dword ptr ds : [public_658b218], eax
        jne public_638efbc
        mov ecx, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], ecx
        mov dword ptr ds : [public_658b998], ecx
        public_638efbc : nop
        cmp dword ptr ds : [public_658b078], 2
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        jl public_638efef
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [esi+0x4C]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fabe8 @0x638efdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fabe8
        push eax
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [public_658bf58]
        add esp, 0x14
        public_638efef : nop
        cmp edi, dword ptr ds : [public_658b82c]
        mov ebp, 4
        jne public_638f031
        mov ecx, dword ptr ds : [public_658b078]
        mov edx, dword ptr ds : [public_658b870]
        push edx
        mov dword ptr ds : [public_658b078], ebp
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x4C]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63fab8c @0x638f01c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fab8c
        call public_6356960
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], 1
        public_638f031 : nop
        cmp dword ptr ds : [public_658b078], ebp
        jl public_638f092
/*FIXUP push offset public_63fab7c @0x638f039*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fab7c
        call public_6356960
        mov ebx, dword ptr ds : [esi+0x20]
        add esp, 4
        test ebx, ebx
        je public_638f069
        public_638f04d : nop
        mov eax, dword ptr ds : [ebx+0x4C]
        push eax
/*FIXUP push offset public_63f83cc @0x638f051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f83cc
        call public_6356960
        add esp, 8
        cmp ebx, esi
        je public_638f069
        mov ebx, dword ptr ds : [ebx+0x20]
        test ebx, ebx
        jne public_638f04d
/*FIXUP public_638f069 : nop
        push offset public_63edccc @0x638f069*/
  FIXUP public_638f069 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, ebp
        jl public_638f092
        push 0
        push 0
        push edi
        push esi
/*FIXUP push offset public_63fab6c @0x638f085*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fab6c
        call public_6378820
        add esp, 0x14
        public_638f092 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [ecx+4]
        push edi
        call public_638e540
        push edi
        push esi
        call public_638f400
        push edi
        push esi
        call public_638f650
        push edi
        push esi
        call public_638f950
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [edx+4]
        lea ebx, ds:[edi+0x34]
        add esp, 0x1C
        cmp eax, ebp
        je public_638f0cf
        push ebp
        push 0
        push ebx
        call public_636e100
        add esp, 0xC
        public_638f0cf : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 2
        jne public_638f0e2
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6390b10
        add esp, 4
        public_638f0e2 : nop
        push edi
        push esi
        call public_638f330
        push edi
        push esi
        call public_6391870
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_638f116
/*FIXUP push offset public_63fab48 @0x638f0ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fab48
        call public_6356960
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [public_658b078], ecx
        public_638f116 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x638ef50)
    }
}

#undef public_638ef6f
#undef public_638efa2
#undef public_638efbc
#undef public_638efef
#undef public_638f031
#undef public_638f04d
#undef public_638f069
#undef public_638f092
#undef public_638f0cf
#undef public_638f0e2
#undef public_638f116
