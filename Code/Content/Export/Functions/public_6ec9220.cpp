#include "Content-PCH.h"


#define public_6ec926c _public_6ec926c
#define public_6ec928f _public_6ec928f
#define public_6ec92b2 _public_6ec92b2
#define public_6ec92ce _public_6ec92ce

PROC_DECLARE(0x6ec9220, internal_6ec9220, public_6ec9220);
extern "C" NAKED register_t __cdecl internal_6ec9220()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
/*FIXUP push offset public_6fb4ae4 @0x6ec9250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ae4
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec926c
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], 1
        pop ebp
        pop ebx
        ret 4
        public_6ec926c : nop
        push 1
        mov ecx, esi
        call edi
        push eax
/*FIXUP push offset public_6fb4ad8 @0x6ec9273*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ad8
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec928f
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], 4
        pop ebp
        pop ebx
        ret 4
        public_6ec928f : nop
        push 1
        mov ecx, esi
        call edi
        push eax
/*FIXUP push offset public_6fb4acc @0x6ec9296*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4acc
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec92b2
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], 3
        pop ebp
        pop ebx
        ret 4
        public_6ec92b2 : nop
        push 1
        mov ecx, esi
        call edi
        push eax
/*FIXUP push offset public_6fb5ce4 @0x6ec92b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ce4
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec92ce
        mov dword ptr ss : [ebp+0x10], 2
        public_6ec92ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec9220)
    }
}

#undef public_6ec926c
#undef public_6ec928f
#undef public_6ec92b2
#undef public_6ec92ce
