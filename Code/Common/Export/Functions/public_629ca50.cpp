#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

#define public_629ca8d _public_629ca8d
#define public_629ca92 _public_629ca92

PROC_DECLARE(0x629ca50, internal_629ca50, public_629ca50);
extern "C" NAKED register_t __cdecl internal_629ca50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_6307f80
        fcomp qword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 1
        jne public_629ca92
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+4], eax
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_629ca92
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629ca8d
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_629ca92
        public_629ca8d : nop
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_629ca92 : nop
        xor al, al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x629ca50)
    }
}

#undef public_629ca8d
#undef public_629ca92
