#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637d060);
CLANG_FORWARD_PROC_SYMBOL(public_637d470);
CLANG_FORWARD_PROC_SYMBOL(public_637d4e0);

#define public_637d0ae _public_637d0ae
#define public_637d0e2 _public_637d0e2
#define public_637d1c9 _public_637d1c9
#define public_637d1f4 _public_637d1f4
#define public_637d215 _public_637d215
#define public_637d241 _public_637d241
#define public_637d262 _public_637d262
#define public_637d29a _public_637d29a
#define public_637d2bd _public_637d2bd
#define public_637d2d8 _public_637d2d8
#define public_637d2f5 _public_637d2f5

PROC_DECLARE(0x637d060, internal_637d060, public_637d060);
extern "C" NAKED register_t __cdecl internal_637d060()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_637d2f5
        mov eax, dword ptr ds : [public_658b254]
        cmp eax, dword ptr ds : [public_658b848]
        je public_637d0ae
        mov dword ptr ds : [public_658be70], 0
        mov dword ptr ds : [public_658be74], 0
        mov dword ptr ds : [public_658be78], 0
        mov dword ptr ds : [public_658be7c], 0
        jmp public_637d0e2
        public_637d0ae : nop
        mov edx, dword ptr ds : [public_658be7c]
        mov eax, dword ptr ds : [public_658be78]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [public_658be74]
        push edx
        mov edx, dword ptr ds : [public_658be70]
        push eax
        mov eax, dword ptr ds : [public_658be68]
        push ecx
        push edx
        push eax
        call public_637d4e0
        fstp qword ptr ds : [public_658be78]
        add esp, 0x18
        public_637d0e2 : nop
        mov edx, dword ptr ds : [public_658bdac]
        mov eax, dword ptr ds : [public_658bda8]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [public_658bda4]
        push edx
        mov edx, dword ptr ds : [public_658bda0]
        push eax
        mov eax, dword ptr ds : [public_658be90]
        push ecx
        push edx
        push eax
        call public_637d4e0
        fstp qword ptr ds : [public_658bda8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 0x18
/*FIXUP push offset public_658b468 @0x637d11f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
/*FIXUP push offset public_63f3260 @0x637d124*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3260
/*FIXUP push offset public_658b268 @0x637d129*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x637d12e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
        push ecx
/*FIXUP push offset public_63f5238 @0x637d134*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5238
        push edi
        call ebx
        mov edx, dword ptr ds : [public_658b714]
        mov eax, dword ptr ds : [public_658b710]
        mov ecx, dword ptr ds : [public_658b09c]
        add esp, 0x1C
        push edx
        mov edx, dword ptr ds : [public_658b098]
        push eax
        mov eax, dword ptr ds : [public_658b0cc]
        push ecx
        mov ecx, dword ptr ds : [public_658b0c8]
        push edx
        mov edx, dword ptr ds : [public_658b024]
        push eax
        mov eax, dword ptr ds : [public_658b020]
        push ecx
        mov ecx, dword ptr ds : [public_658b68c]
        push edx
        mov edx, dword ptr ds : [public_658b688]
        push eax
        mov eax, dword ptr ds : [public_658b6a4]
        push ecx
        mov ecx, dword ptr ds : [public_658b6a0]
        push edx
        mov edx, dword ptr ds : [public_658b6ac]
        push eax
        mov eax, dword ptr ds : [public_658b6a8]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f50ac @0x637d19c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f50ac
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b248]
        add esp, 0x40
        test eax, eax
        je public_637d1c9
        mov ecx, dword ptr ds : [public_658b6fc]
        mov edx, dword ptr ds : [public_658b6f8]
        push ecx
        push edx
/*FIXUP push offset public_63f507c @0x637d1be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f507c
        push edi
        call ebx
        add esp, 0x10
        public_637d1c9 : nop
        fld qword ptr ds : [public_658b040]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637d1f4
        mov eax, dword ptr ds : [public_658b044]
        mov ecx, dword ptr ds : [public_658b040]
        push eax
        push ecx
/*FIXUP push offset public_63f5054 @0x637d1e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5054
        push edi
        call ebx
        add esp, 0x10
        public_637d1f4 : nop
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        je public_637d215
        mov edx, dword ptr ds : [public_658b0b4]
        mov eax, dword ptr ds : [public_658b0b0]
        push edx
        push eax
/*FIXUP push offset public_63f5030 @0x637d20a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5030
        push edi
        call ebx
        add esp, 0x10
        public_637d215 : nop
        fld qword ptr ds : [public_658b048]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637d241
        mov ecx, dword ptr ds : [public_658b04c]
        mov edx, dword ptr ds : [public_658b048]
        push ecx
        push edx
/*FIXUP push offset public_63f5004 @0x637d236*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5004
        push edi
        call ebx
        add esp, 0x10
        public_637d241 : nop
        mov eax, dword ptr ds : [public_658b0e4]
        test eax, eax
        je public_637d262
        mov eax, dword ptr ds : [public_658b0bc]
        mov ecx, dword ptr ds : [public_658b0b8]
        push eax
        push ecx
/*FIXUP push offset public_63f4fdc @0x637d257*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f4fdc
        push edi
        call ebx
        add esp, 0x10
        public_637d262 : nop
        mov edx, dword ptr ds : [public_658b6d4]
        mov eax, dword ptr ds : [public_658b6d0]
        mov ecx, dword ptr ds : [public_658b704]
        push edx
        mov edx, dword ptr ds : [public_658b700]
        push eax
        push 0x3CB00000
        push 0
        push ecx
        push edx
/*FIXUP push offset public_63f4f2c @0x637d284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f4f2c
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x20
        xor esi, esi
        test eax, eax
        jle public_637d2bd
        public_637d29a : nop
        mov eax, dword ptr ds : [public_658b6f4]
        mov ecx, dword ptr ds : [eax+esi*8+4]
        mov edx, dword ptr ds : [eax+esi*8]
        push ecx
        push edx
/*FIXUP push offset public_63f4f24 @0x637d2a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f4f24
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x10
        inc esi
        cmp esi, eax
        jl public_637d29a
/*FIXUP public_637d2bd : nop
        push offset public_63ee778 @0x637d2bd*/
  FIXUP public_637d2bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee778
        push edi
        call ebx
        mov ecx, dword ptr ds : [public_658c710]
        xor eax, eax
        add esp, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], eax
        jle public_637d2f5
        public_637d2d8 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        push edi
        call public_637d470
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658c710]
        add esp, 0xC
        cmp eax, ecx
        jl public_637d2d8
        public_637d2f5 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637d060)
    }
}

#undef public_637d0ae
#undef public_637d0e2
#undef public_637d1c9
#undef public_637d1f4
#undef public_637d215
#undef public_637d241
#undef public_637d262
#undef public_637d29a
#undef public_637d2bd
#undef public_637d2d8
#undef public_637d2f5
