#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1fb0);

#define public_6ef1fc0 _public_6ef1fc0
#define public_6ef1fec _public_6ef1fec
#define public_6ef2000 _public_6ef2000
#define public_6ef2015 _public_6ef2015

PROC_DECLARE(0x6ef1fb0, internal_6ef1fb0, public_6ef1fb0);
extern "C" NAKED register_t __cdecl internal_6ef1fb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x94]
        cmp edx, eax
        jae public_6ef1fc0
        mov edx, eax
        public_6ef1fc0 : nop
        mov eax, dword ptr ds : [ecx+0xA4]
        push esi
        mov esi, dword ptr ds : [ecx+0xA0]
        push edi
        xor edi, edi
        cmp eax, esi
        jb public_6ef1fec
        mov dword ptr ds : [ecx+0xA4], edi
        mov dword ptr ds : [ecx+0xC8], edi
        mov dword ptr ds : [ecx+0xB0], edi
        mov dword ptr ds : [ecx+0xB4], edi
        public_6ef1fec : nop
        mov esi, dword ptr ds : [ecx+0xA4]
        mov eax, dword ptr ds : [ecx+0xA0]
        sub eax, esi
        cmp edx, eax
        jbe public_6ef2000
        mov edx, eax
        public_6ef2000 : nop
        cmp edx, edi
        jbe public_6ef2015
        mov eax, dword ptr ds : [ecx+0x9C]
        add eax, esi
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [ecx+0x3C], edx
        mov dword ptr ds : [ecx+0x40], edi
        public_6ef2015 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef1fb0)
    }
}

#undef public_6ef1fc0
#undef public_6ef1fec
#undef public_6ef2000
#undef public_6ef2015
