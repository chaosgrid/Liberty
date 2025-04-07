#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404a90);

#define public_404aa7 _public_404aa7
#define public_404ab2 _public_404ab2
#define public_404abf _public_404abf
#define public_404ad0 _public_404ad0
#define public_404adc _public_404adc
#define public_404ae5 _public_404ae5

PROC_DECLARE(0x404a90, internal_404a90, public_404a90);
extern "C" NAKED register_t __cdecl internal_404a90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x11]
        test al, al
        jne public_404abf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_404ab2
        public_404aa7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_404aa7
        public_404ab2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_404abf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_404adc
        lea esp, ss:[esp]
        public_404ad0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_404ad0
        public_404adc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_404ae5
        mov dword ptr ds : [ecx], eax
        public_404ae5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x404a90)
    }
}

#undef public_404aa7
#undef public_404ab2
#undef public_404abf
#undef public_404ad0
#undef public_404adc
#undef public_404ae5
