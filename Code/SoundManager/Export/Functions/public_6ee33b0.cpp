#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7510);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7590);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8440);

#define public_6ee33c4 _public_6ee33c4
#define public_6ee33d7 _public_6ee33d7
#define public_6ee33f0 _public_6ee33f0
#define public_6ee3405 _public_6ee3405
#define public_6ee3420 _public_6ee3420
#define public_6ee346d _public_6ee346d
#define public_6ee3477 _public_6ee3477
#define public_6ee3490 _public_6ee3490
#define public_6ee34a8 _public_6ee34a8
#define public_6ee34c0 _public_6ee34c0

PROC_DECLARE(0x6ee33b0, internal_6ee33b0, public_6ee33b0);
extern "C" NAKED register_t __cdecl internal_6ee33b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x110]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee33d7
        public_6ee33c4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x110]
        jne public_6ee33c4
        public_6ee33d7 : nop
        mov ebx, dword ptr ds : [edi+0x110]
        lea esi, ds:[edi+0x10C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6ee3405
        lea esp, ss:[esp]
        public_6ee33f0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_6ee7510
        cmp edi, ebx
        jne public_6ee33f0
        public_6ee3405 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6ee3477
        xor ebp, ebp
        test eax, eax
        jbe public_6ee34c0
        mov ebx, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6ee3420 : nop
        cmp dword ptr ds : [ebx], 0
        je public_6ee346d
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        call public_6ee7bb0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_6ee8440
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jb public_6ee3420
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ee346d : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
/*FIXUP public_6ee3477 : nop
        push offset public_6eeaf0c @0x6ee3477*/
  FIXUP public_6ee3477 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov edi, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ee34a8
        mov edi, edi
        public_6ee3490 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_6eeaf00
        call public_6ee7590
        cmp esi, edi
        jne public_6ee3490
        public_6ee34a8 : nop
        mov ecx, dword ptr ds : [public_6eeaf70]
        push ecx
        call dword ptr ds : [public_6ee9020]
/*FIXUP push offset public_6eeaf0c @0x6ee34b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        public_6ee34c0 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee33b0)
    }
}

#undef public_6ee33c4
#undef public_6ee33d7
#undef public_6ee33f0
#undef public_6ee3405
#undef public_6ee3420
#undef public_6ee346d
#undef public_6ee3477
#undef public_6ee3490
#undef public_6ee34a8
#undef public_6ee34c0
