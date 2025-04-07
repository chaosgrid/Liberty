#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6381e50);

#define public_6381e8f _public_6381e8f

PROC_DECLARE(0x6381e50, internal_6381e50, public_6381e50);
extern "C" NAKED register_t __cdecl internal_6381e50()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, edi
        imul esi, dword ptr ss : [esp+0x18]
        shl esi, 3
        push esi
        call dword ptr ds : [public_6399328]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_6381e8f
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
/*FIXUP push offset public_63f69f8 @0x6381e77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f69f8
        push eax
        call dword ptr ds : [public_63991e8]
        push ebx
        push ebx
        push 4
        call public_6378600
        add esp, 0x18
        public_6381e8f : nop
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6381e50)
    }
}

#undef public_6381e8f
