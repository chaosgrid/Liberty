#include "Common-PCH.h"


#define public_63032c2 _public_63032c2
#define public_63032dc _public_63032dc
#define public_6303300 _public_6303300
#define public_630332f _public_630332f
#define public_6303338 _public_6303338

PROC_DECLARE(0x63032b0, internal_63032b0, public_63032b0);
extern "C" NAKED register_t __cdecl internal_63032b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp byte ptr ds : [esi], 0
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, esi
        je public_63032dc
        public_63032c2 : nop
        movsx eax, byte ptr ss : [ebp]
        push eax
        call dword ptr ds : [public_639921c]
        add esp, 4
        test eax, eax
        je public_6303338
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        test al, al
        jne public_63032c2
        public_63032dc : nop
        mov ebp, dword ptr ds : [public_6399218]
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_63a2700 @0x63032e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2700
        push esi
        mov dword ptr ss : [esp+0x20], 0
        call ebp
        add esp, 0xC
        test eax, eax
        je public_630332f
        mov edi, edi
        public_6303300 : nop
        cmp eax, 0xFFFFFFFF
        je public_630332f
        mov dx, word ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x14]
        push eax
        add esi, 4
/*FIXUP push offset public_63a2700 @0x6303312*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2700
        mov word ptr ds : [edi], dx
        push esi
        add edi, 2
        mov dword ptr ss : [esp+0x20], 0
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6303300
        public_630332f : nop
        mov word ptr ds : [edi], 0
        pop edi
        pop esi
        pop ebp
        ret 
        public_6303338 : nop
        push ebx
        mov ebx, dword ptr ds : [public_6399340]
        push 0
        push esi
        push 0
        call ebx
        inc eax
        push eax
        push esi
        push edi
        call ebx
        add esp, 0x18
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63032b0)
    }
}

#undef public_63032c2
#undef public_63032dc
#undef public_6303300
#undef public_630332f
#undef public_6303338
