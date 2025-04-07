#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65de95d);
CLANG_FORWARD_PROC_SYMBOL(public_65de9bc);
CLANG_FORWARD_PROC_SYMBOL(public_65df9ad);
CLANG_FORWARD_PROC_SYMBOL(public_65dfa0a);

#define public_65df9f2 _public_65df9f2

PROC_DECLARE(0x65df9ad, internal_65df9ad, public_65df9ad);
extern "C" NAKED register_t __cdecl internal_65df9ad()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_65e7a40]
        jae public_65df9f2
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        test byte ptr ds : [ecx+eax*4+4], 1
        je public_65df9f2
        push edi
        push esi
        call public_65de95d
        push esi
        call public_65dfa0a
        push esi
        mov edi, eax
        call public_65de9bc
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_65df9f2 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65df9ad)
    }
}

#undef public_65df9f2
