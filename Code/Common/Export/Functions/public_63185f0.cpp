#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63185f0);

#define public_6318607 _public_6318607
#define public_6318612 _public_6318612
#define public_631861f _public_631861f
#define public_6318630 _public_6318630
#define public_631863c _public_631863c
#define public_6318645 _public_6318645

PROC_DECLARE(0x63185f0, internal_63185f0, public_63185f0);
extern "C" NAKED register_t __cdecl internal_63185f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x11]
        test al, al
        jne public_631861f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6318612
        public_6318607 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6318607
        public_6318612 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_631861f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_631863c
        lea esp, ss:[esp]
        public_6318630 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6318630
        public_631863c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6318645
        mov dword ptr ds : [ecx], eax
        public_6318645 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63185f0)
    }
}

#undef public_6318607
#undef public_6318612
#undef public_631861f
#undef public_6318630
#undef public_631863c
#undef public_6318645
