#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6385e00);
CLANG_FORWARD_PROC_SYMBOL(public_6385ea0);

#define public_6385e31 _public_6385e31
#define public_6385e48 _public_6385e48
#define public_6385e54 _public_6385e54
#define public_6385e5c _public_6385e5c
#define public_6385e65 _public_6385e65

PROC_DECLARE(0x6385e00, internal_6385e00, public_6385e00);
extern "C" NAKED register_t __cdecl internal_6385e00()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b80c]
        push esi
        push edi
        push eax
        call public_636ec70
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx+0xC]
        add esp, 4
        test eax, eax
        mov edi, 1
        je public_6385e65
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6385e65
        public_6385e31 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 0x20
        je public_6385e5c
        mov ecx, dword ptr ds : [eax+0x48]
        test ecx, ecx
        je public_6385e48
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        jmp public_6385e54
        public_6385e48 : nop
        test edi, edi
        je public_6385e5c
        push eax
        lea eax, ss:[esp+0xC]
        xor edi, edi
        push eax
        public_6385e54 : nop
        call public_636e1b0
        add esp, 8
        public_6385e5c : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6385e31
        public_6385e65 : nop
        mov ecx, dword ptr ss : [esp+8]
/*FIXUP push offset _public_6385ea0 @0x6385e69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6385ea0
        push 4
        push ecx
        call public_636ec10
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        add edx, 4
        push edx
        call dword ptr ds : [public_63992a8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0x10
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6385e00)
    }
}

#undef public_6385e31
#undef public_6385e48
#undef public_6385e54
#undef public_6385e5c
#undef public_6385e65
