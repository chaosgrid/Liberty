#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62857f0);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6391fb6);

#define public_6285845 _public_6285845
#define public_6285884 _public_6285884
#define public_628589c _public_628589c

PROC_DECLARE(0x62857f0, internal_62857f0, public_62857f0);
extern "C" NAKED register_t __cdecl internal_62857f0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        call public_6303220
        test al, al
        mov esi, dword ptr ss : [esp+0x24]
        jne public_6285845
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        je public_6285845
        push 0
/*FIXUP push offset public_63eadf4 @0x628580a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eadf4
/*FIXUP push offset public_63eacf0 @0x628580f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eacf0
        push 0
        push eax
        call public_6391fb6
        add esp, 0x14
        test eax, eax
        je public_6285845
        add eax, 0x348
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        add esp, 0x18
        ret 
        public_6285845 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6285884
        mov eax, dword ptr ds : [eax+0x98]
        mov edx, dword ptr ds : [eax+0xA4]
        mov ecx, dword ptr ds : [eax+0xA8]
        add eax, 0xA4
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        jmp public_628589c
        public_6285884 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        public_628589c : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x10]
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62857f0)
    }
}

#undef public_6285845
#undef public_6285884
#undef public_628589c
