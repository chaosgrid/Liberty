#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6303550);
CLANG_FORWARD_PROC_SYMBOL(public_63035b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63035d2 _public_63035d2
#define public_6303600 _public_6303600
#define public_6303640 _public_6303640
#define public_630366f _public_630366f

PROC_DECLARE(0x63035c0, internal_63035c0, public_63035c0);
extern "C" NAKED register_t __cdecl internal_63035c0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 1
        or ecx, 0xFFFFFFFF
        public_63035d2 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6303600
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset _public_6303550 @0x63035f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6303550
        push esi
        call public_63034f0
        add esp, 0xC
        public_6303600 : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_63035d2
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax*4]
        push edx
        mov dword ptr ds : [ecx], eax
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 4
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        or ecx, esi
        lea ebx, ds:[ebx]
        public_6303640 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_630366f
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset _public_63035b0 @0x6303661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63035b0
        push esi
        call public_63034f0
        add esp, 0xC
        public_630366f : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_6303640
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63035c0)
    }
}

#undef public_63035d2
#undef public_6303600
#undef public_6303640
#undef public_630366f
