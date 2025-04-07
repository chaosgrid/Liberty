#include "Content-PCH.h"


#define public_6f89dda _public_6f89dda
#define public_6f89df0 _public_6f89df0
#define public_6f89e0d _public_6f89e0d
#define public_6f89e13 _public_6f89e13
#define public_6f89e1d _public_6f89e1d

PROC_DECLARE(0x6f89dc0, internal_6f89dc0, public_6f89dc0);
extern "C" NAKED register_t __cdecl internal_6f89dc0()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x70]
        test eax, eax
        jne public_6f89dda
        mov eax, dword ptr ds : [edi+0x8C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [ecx+0x48]
        pop edi
        pop ecx
        ret 
        public_6f89dda : nop
        mov eax, dword ptr ds : [edi+0x80]
        push esi
        mov esi, dword ptr ds : [edi+0x7C]
        cmp esi, eax
        mov dword ptr ss : [esp+8], 0
        je public_6f89e13
        public_6f89df0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_6f89e0d
        mov eax, dword ptr ds : [edi+0x80]
        add esi, 4
        cmp esi, eax
        jne public_6f89df0
        public_6f89e0d : nop
        cmp esi, dword ptr ds : [edi+0x80]
        public_6f89e13 : nop
        pop esi
        je public_6f89e1d
        mov eax, dword ptr ss : [esp+4]
        pop edi
        pop ecx
        ret 
        public_6f89e1d : nop
        mov ecx, dword ptr ds : [edi+0x8C]
        mov edx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [edx+0x48]
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f89dc0)
    }
}

#undef public_6f89dda
#undef public_6f89df0
#undef public_6f89e0d
#undef public_6f89e13
#undef public_6f89e1d
