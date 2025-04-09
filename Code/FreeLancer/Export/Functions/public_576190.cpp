#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_575f50);
CLANG_FORWARD_PROC_SYMBOL(public_576190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5761b0 _public_5761b0
#define public_5761cc _public_5761cc
#define public_5761e1 _public_5761e1
#define public_5761ee _public_5761ee
#define public_5761f6 _public_5761f6
#define public_576200 _public_576200
#define public_576207 _public_576207
#define public_57620d _public_57620d
#define public_576228 _public_576228
#define public_576232 _public_576232

PROC_DECLARE(0x576190, internal_576190, public_576190);
extern "C" NAKED register_t __cdecl internal_576190()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_67c3a4]
        test ecx, ecx
        je public_576232
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_57620d
        push ebx
        lea esp, ss:[esp]
        public_5761b0 : nop
        cmp dword ptr ds : [eax+0x10], esi
        jne public_5761cc
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_46c8c0
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_67c3a4]
        jmp public_576207
        public_5761cc : nop
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_5761ee
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_576207
        public_5761e1 : nop
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        je public_5761e1
        jmp public_576207
        public_5761ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_576200
        public_5761f6 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [edx+8]
        je public_5761f6
        public_576200 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_576207
        mov eax, edx
        public_576207 : nop
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5761b0
        pop ebx
        public_57620d : nop
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_576232
        mov esi, ecx
        test esi, esi
        je public_576228
        call public_575f50
        push esi
        call public_5b7e1d
        add esp, 4
        public_576228 : nop
        mov dword ptr ds : [public_67c3a4], 0
        public_576232 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x576190)
    }
}

#undef public_5761b0
#undef public_5761cc
#undef public_5761e1
#undef public_5761ee
#undef public_5761f6
#undef public_576200
#undef public_576207
#undef public_57620d
#undef public_576228
#undef public_576232
