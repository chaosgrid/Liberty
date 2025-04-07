#include "Common-PCH.h"


#define public_6281968 _public_6281968

PROC_DECLARE(0x6281940, internal_6281940, public_6281940);
extern "C" NAKED register_t __cdecl internal_6281940()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax+0xA4]
        pop esi
        jne public_6281968
        mov eax, dword ptr ss : [esp+4]
        public_6281968 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6281940)
    }
}

#undef public_6281968
