#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2650);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d266e _public_65d266e
#define public_65d2688 _public_65d2688

PROC_DECLARE(0x65d2650, internal_65d2650, public_65d2650);
extern "C" NAKED register_t __cdecl internal_65d2650()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push 0xC
        mov ebx, ecx
        mov edi, dword ptr ds : [esi+4]
        call public_65d6f71
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_65d266e
        mov edi, eax
        public_65d266e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_65d2688
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_65d2688 : nop
        mov ecx, dword ptr ds : [ebx+8]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65d2650)
    }
}

#undef public_65d266e
#undef public_65d2688
