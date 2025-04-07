#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619730);

#define public_6619747 _public_6619747
#define public_6619752 _public_6619752
#define public_661975f _public_661975f
#define public_6619769 _public_6619769
#define public_6619775 _public_6619775
#define public_661977e _public_661977e

PROC_DECLARE(0x6619730, internal_6619730, public_6619730);
extern "C" NAKED register_t __cdecl internal_6619730()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x31]
        test al, al
        jne public_661975f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6619752
        public_6619747 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6619747
        public_6619752 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_661975f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6619775
        public_6619769 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6619769
        public_6619775 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_661977e
        mov dword ptr ds : [ecx], eax
        public_661977e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6619730)
    }
}

#undef public_6619747
#undef public_6619752
#undef public_661975f
#undef public_6619769
#undef public_6619775
#undef public_661977e
