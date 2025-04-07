#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66186e0);

#define public_66186f7 _public_66186f7
#define public_6618702 _public_6618702
#define public_661870f _public_661870f
#define public_6618719 _public_6618719
#define public_6618725 _public_6618725
#define public_661872e _public_661872e

PROC_DECLARE(0x66186e0, internal_66186e0, public_66186e0);
extern "C" NAKED register_t __cdecl internal_66186e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x2D]
        test al, al
        jne public_661870f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6618702
        public_66186f7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_66186f7
        public_6618702 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_661870f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6618725
        public_6618719 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6618719
        public_6618725 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_661872e
        mov dword ptr ds : [ecx], eax
        public_661872e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66186e0)
    }
}

#undef public_66186f7
#undef public_6618702
#undef public_661870f
#undef public_6618719
#undef public_6618725
#undef public_661872e
