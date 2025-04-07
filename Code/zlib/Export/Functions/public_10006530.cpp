#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005f90);
CLANG_FORWARD_PROC_SYMBOL(public_10006530);

#define public_1000655f _public_1000655f
#define public_100065f6 _public_100065f6
#define public_10006609 _public_10006609
#define public_10006628 _public_10006628
#define public_1000664c _public_1000664c
#define public_10006651 _public_10006651
#define public_1000665d _public_1000665d
#define public_10006670 _public_10006670
#define public_1000668f _public_1000668f
#define public_10006694 _public_10006694
#define public_100066a0 _public_100066a0

PROC_DECLARE(0x10006530, internal_10006530, public_10006530);
extern "C" NAKED register_t __cdecl internal_10006530()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx+0x28]
        push edi
        push 4
        push 0x120
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [ebx+0x20]
        mov edi, eax
        add esp, 0xC
        test edi, edi
        jne public_1000655f
        pop edi
        mov eax, 0xFFFFFFFC
        pop ebx
        pop ecx
        ret 
        public_1000655f : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x34]
/*FIXUP push offset public_1000b370 @0x1000657d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b370
/*FIXUP push offset public_1000b2f0 @0x10006582*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b2f0
        push 0x101
        push ebp
        call public_10005f90
        mov esi, eax
        add esp, 0x20
        test esi, esi
        jne public_10006670
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [ecx], 0
        je public_10006694
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
/*FIXUP push offset public_1000b468 @0x100065c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b468
/*FIXUP push offset public_1000b3f0 @0x100065c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b3f0
        push esi
        lea ecx, ds:[eax+ebp*4]
        mov eax, dword ptr ss : [esp+0x44]
        push edx
        call public_10005f90
        mov esi, eax
        add esp, 0x20
        test esi, esi
        jne public_10006609
        mov ecx, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [ecx], 0
        jne public_100065f6
        cmp ebp, 0x101
        ja public_10006651
        public_100065f6 : nop
        mov edx, dword ptr ds : [ebx+0x28]
        push edi
        push edx
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_10006609 : nop
        cmp esi, 0xFFFFFFFD
        jne public_10006628
        mov eax, dword ptr ds : [ebx+0x28]
        push edi
        push eax
        mov dword ptr ds : [ebx+0x18], offset public_1000b5b0
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        public_10006628 : nop
        cmp esi, 0xFFFFFFFB
        jne public_1000664c
        mov eax, dword ptr ds : [ebx+0x28]
        push edi
        push eax
        mov dword ptr ds : [ebx+0x18], offset public_1000b594
        mov esi, 0xFFFFFFFD
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        public_1000664c : nop
        cmp esi, 0xFFFFFFFC
        je public_1000665d
        public_10006651 : nop
        mov dword ptr ds : [ebx+0x18], offset public_1000b570
        mov esi, 0xFFFFFFFD
        public_1000665d : nop
        mov eax, dword ptr ds : [ebx+0x28]
        push edi
        push eax
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        public_10006670 : nop
        cmp esi, 0xFFFFFFFD
        jne public_1000668f
        mov ecx, dword ptr ds : [ebx+0x28]
        push edi
        push ecx
        mov dword ptr ds : [ebx+0x18], offset public_1000b54c
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        public_1000668f : nop
        cmp esi, 0xFFFFFFFC
        je public_100066a0
        public_10006694 : nop
        mov dword ptr ds : [ebx+0x18], offset public_1000b52c
        mov esi, 0xFFFFFFFD
        public_100066a0 : nop
        mov ecx, dword ptr ds : [ebx+0x28]
        push edi
        push ecx
        call dword ptr ds : [ebx+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10006530)
    }
}

#undef public_1000655f
#undef public_100065f6
#undef public_10006609
#undef public_10006628
#undef public_1000664c
#undef public_10006651
#undef public_1000665d
#undef public_10006670
#undef public_1000668f
#undef public_10006694
#undef public_100066a0
