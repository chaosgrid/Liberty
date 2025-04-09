#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fb80);

#define public_44fba0 _public_44fba0
#define public_44fbac _public_44fbac

PROC_DECLARE(0x44fb80, internal_44fb80, public_44fb80);
extern "C" NAKED register_t __cdecl internal_44fb80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_44fbac
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle public_44fbac
        lea esp, ss:[esp]
        public_44fba0 : nop
        mov ecx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [ecx+0x24]
        inc esi
        cmp esi, ebx
        jl public_44fba0
        public_44fbac : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x44fb80)
    }
}

#undef public_44fba0
#undef public_44fbac
