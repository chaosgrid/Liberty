#include "Content-PCH.h"


#define public_6f1d3f0 _public_6f1d3f0
#define public_6f1d3fd _public_6f1d3fd
#define public_6f1d411 _public_6f1d411

PROC_DECLARE(0x6f1d3d0, internal_6f1d3d0, public_6f1d3d0);
extern "C" NAKED register_t __cdecl internal_6f1d3d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        push edi
        mov byte ptr ds : [ecx+0x25], al
        jne public_6f1d411
        mov eax, dword ptr ds : [ecx+0x30]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea edi, ds:[ecx+0x28]
        je public_6f1d411
        lea esp, ss:[esp]
        public_6f1d3f0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1d3fd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1d3fd : nop
        mov edx, dword ptr ds : [edi]
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f1d3f0
        public_6f1d411 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1d3d0)
    }
}

#undef public_6f1d3f0
#undef public_6f1d3fd
#undef public_6f1d411
