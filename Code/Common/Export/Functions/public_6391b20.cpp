#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6391b20);
CLANG_FORWARD_PROC_SYMBOL(public_6391c20);

#define public_6391b59 _public_6391b59
#define public_6391b6b _public_6391b6b
#define public_6391b7e _public_6391b7e
#define public_6391b92 _public_6391b92
#define public_6391b9b _public_6391b9b
#define public_6391bad _public_6391bad
#define public_6391be4 _public_6391be4
#define public_6391c0d _public_6391c0d

PROC_DECLARE(0x6391b20, internal_6391b20, public_6391b20);
extern "C" NAKED register_t __cdecl internal_6391b20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b80c]
        push esi
        push edi
        push eax
        call public_636ec70
        mov edx, dword ptr ds : [public_658b8e0]
        mov edi, dword ptr ss : [esp+0x14]
        add esp, 4
        inc edx
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ds : [public_658b8e0], edx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6391b6b
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6391b6b
        public_6391b59 : nop
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6391b59
        public_6391b6b : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6391b9b
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6391b9b
        public_6391b7e : nop
        cmp dword ptr ds : [esi], 0
        je public_6391b92
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        push edi
        call public_6391c20
        add esp, 0xC
        public_6391b92 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6391b7e
        public_6391b9b : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        jne public_6391bad
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_6391c0d
        public_6391bad : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_636ec10
        mov esi, dword ptr ds : [public_658bf98]
        mov edx, dword ptr ds : [public_658bfa0]
        mov ecx, dword ptr ds : [public_658bfa8]
        add esp, 4
        inc esi
        add edx, eax
        cmp ecx, eax
        mov dword ptr ds : [public_658bf98], esi
        mov dword ptr ds : [public_658bfa0], edx
        jge public_6391be4
        mov dword ptr ds : [public_658bfa8], eax
        public_6391be4 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_6391c0d
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [public_658b7fc]
        and ecx, 0xFFFFFF
        push ecx
        push eax
/*FIXUP push offset public_63fbad4 @0x6391bfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fbad4
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6391c0d : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6391b20)
    }
}

#undef public_6391b59
#undef public_6391b6b
#undef public_6391b7e
#undef public_6391b92
#undef public_6391b9b
#undef public_6391bad
#undef public_6391be4
#undef public_6391c0d
