#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6285190);
CLANG_FORWARD_PROC_SYMBOL(public_62883c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62851c0 _public_62851c0
#define public_6285206 _public_6285206
#define public_6285243 _public_6285243
#define public_6285290 _public_6285290
#define public_62852b0 _public_62852b0
#define public_62852d5 _public_62852d5
#define public_62852f1 _public_62852f1
#define public_628530b _public_628530b
#define public_628533c _public_628533c

PROC_DECLARE(0x6285190, internal_6285190, public_6285190);
extern "C" NAKED register_t __cdecl internal_6285190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xF0
        push ebp
        push 0xFFFFFFFF
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_628533c
        push ebx
        push esi
        push edi
        mov edi, edi
        public_62851c0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x104]
        cmp ebx, eax
        je public_62852f1
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        lea esi, ds:[ebx+8]
        mov ecx, 0xC
        lea edi, ss:[esp+0xA0]
        rep movsd
        jne public_6285206
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_6285206 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xA0]
        push ecx
        mov ecx, dword ptr ss : [esp+0x114]
        push ecx
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0x70]
        rep movsd
        jne public_6285243
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_6285243 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, dword ptr ss : [esp+0x110]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ebx+0x74]
        cmp eax, 1
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0xD0]
        rep movsd
        jne public_6285290
        mov edx, dword ptr ss : [esp+0x114]
        push edx
        lea eax, ss:[esp+0xD4]
        push eax
        push ebx
        call public_6284fc0
        add esp, 0xC
        jmp public_62852d5
        public_6285290 : nop
        cmp eax, 2
        jne public_62852b0
        push ebx
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        lea edi, ds:[ebx+8]
        push ebp
        rep movsd
        call public_62883c0
        add esp, 8
        jmp public_62852d5
        nop 
        public_62852b0 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b9f4 @0x62852b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b9f4
        push 0x21D
/*FIXUP push offset public_639b99c @0x62852c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b99c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62852ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_62852d5 : nop
        mov edx, dword ptr ss : [esp+0x114]
        mov eax, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ss : [esp+0x10C]
        push edx
        push eax
        push ecx
        push ebp
        push ebx
        jmp public_628530b
        public_62852f1 : nop
        mov edx, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x110]
        push edx
        mov edx, dword ptr ss : [esp+0x110]
        push ecx
        push edx
        push ebp
        push eax
        public_628530b : nop
        call public_6285190
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push ebp
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jne public_62851c0
        pop edi
        pop esi
        pop ebx
        public_628533c : nop
        pop ebp
        add esp, 0xF0
        ret 
        UNREACHABLE_TRAP(0x6285190)
    }
}

#undef public_62851c0
#undef public_6285206
#undef public_6285243
#undef public_6285290
#undef public_62852b0
#undef public_62852d5
#undef public_62852f1
#undef public_628530b
#undef public_628533c
