#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);

#define public_479683 _public_479683
#define public_4796f0 _public_4796f0

PROC_DECLARE(0x4795f0, internal_4795f0, public_4795f0);
extern "C" NAKED register_t __cdecl internal_4795f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x91C]
        test eax, eax
        push ebx
        je public_4796f0
        mov dl, byte ptr ss : [esp+8]
        test dl, dl
        mov bl, byte ptr ds : [eax+0x6C]
        je public_479683
        mov dl, 3
        or bl, dl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [ecx+0x920]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x924]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x928]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x92C]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x930]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x934]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x938]
        or byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x4BC]
        test eax, eax
        je public_4796f0
        mov edx, dword ptr ds : [ecx+0x944]
        test edx, edx
        je public_4796f0
        mov bl, byte ptr ds : [eax+0x6C]
        mov dl, 0xFC
        and bl, dl
        mov byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [ecx+0x944]
        and byte ptr ds : [ecx+0x6C], dl
        pop ebx
        ret 4
        public_479683 : nop
        mov dl, 0xFC
        and bl, dl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [ecx+0x920]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x924]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x928]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x92C]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x930]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x934]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x938]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x4BC]
        test eax, eax
        je public_4796f0
        mov edx, dword ptr ds : [ecx+0x944]
        test edx, edx
        je public_4796f0
        mov bl, byte ptr ds : [eax+0x6C]
        mov dl, 3
        or bl, dl
        mov byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [ecx+0x944]
        or byte ptr ds : [ecx+0x6C], dl
        public_4796f0 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4795f0)
    }
}

#undef public_479683
#undef public_4796f0
