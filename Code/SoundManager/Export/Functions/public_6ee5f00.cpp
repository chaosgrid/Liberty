#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee5f00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee5f41 _public_6ee5f41
#define public_6ee5f53 _public_6ee5f53
#define public_6ee5f86 _public_6ee5f86
#define public_6ee5f94 _public_6ee5f94
#define public_6ee5f9d _public_6ee5f9d
#define public_6ee6014 _public_6ee6014
#define public_6ee6050 _public_6ee6050
#define public_6ee605f _public_6ee605f

PROC_DECLARE(0x6ee5f00, internal_6ee5f00, public_6ee5f00);
extern "C" NAKED register_t __cdecl internal_6ee5f00()
{
    __asm
    {
        mov eax, 0x2000
        call public_6ee8da0
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x200C]
        mov eax, dword ptr ds : [esi+0x1C]
        test al, 0x24
        mov ebp, ecx
        jne public_6ee605f
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        jne public_6ee605f
        test al, 0x40
        je public_6ee5f53
        mov ecx, dword ptr ds : [public_6eeaf5c]
        test ecx, ecx
        jne public_6ee5f41
        test al, 1
        jne public_6ee605f
        public_6ee5f41 : nop
        mov ecx, dword ptr ds : [public_6eeaf60]
        test ecx, ecx
        jne public_6ee5f53
        test al, 1
        je public_6ee605f
        public_6ee5f53 : nop
        and eax, 0xFFFFFFF7
        push ebx
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x18]
        test al, al
        mov edi, dword ptr ss : [esp+0x2018]
        je public_6ee5f86
        test byte ptr ss : [ebp+0x90], 2
        je public_6ee5f9d
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [esi+0x2C]
        fnstsw ax
        test ah, 5
        jp public_6ee5f9d
        jmp public_6ee5f94
        public_6ee5f86 : nop
        mov eax, dword ptr ss : [ebp+0x90]
        test al, 0x20
        jne public_6ee5f9d
        test al, 1
        je public_6ee5f9d
        public_6ee5f94 : nop
        cmp edi, dword ptr ss : [ebp+0x50]
        jae public_6ee5f9d
        or dword ptr ds : [esi+0x1C], 8
        public_6ee5f9d : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ebx, eax
        shr ebx, 3
        xor bl, al
        and bl, 1
        je public_6ee6050
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [public_6eeaf68]
        test ecx, ecx
        je public_6ee6050
        mov edx, dword ptr ss : [ebp+0x50]
        cmp edi, edx
        jbe public_6ee6014
        mov ecx, dword ptr ds : [esi]
        push edx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_6eeab38 @0x6ee5fd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeab38
        push eax
        call public_6ee71c0
        push eax
        push 0xC2B
/*FIXUP push offset public_6eea070 @0x6ee5fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5ff4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x28
        pop edi
        mov al, bl
        pop ebx
        pop esi
        pop ebp
        add esp, 0x2000
        ret 8
        public_6ee6014 : nop
        test al, 1
        je public_6ee6050
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6eeab00 @0x6ee6024*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeab00
        push eax
        call public_6ee71c0
        push eax
        push 0xC30
/*FIXUP push offset public_6eea070 @0x6ee6035*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee603f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6ee6050 : nop
        pop edi
        mov al, bl
        pop ebx
        pop esi
        pop ebp
        add esp, 0x2000
        ret 8
        public_6ee605f : nop
        pop esi
        xor al, al
        pop ebp
        add esp, 0x2000
        ret 8
        UNREACHABLE_TRAP(0x6ee5f00)
    }
}

#undef public_6ee5f41
#undef public_6ee5f53
#undef public_6ee5f86
#undef public_6ee5f94
#undef public_6ee5f9d
#undef public_6ee6014
#undef public_6ee6050
#undef public_6ee605f
