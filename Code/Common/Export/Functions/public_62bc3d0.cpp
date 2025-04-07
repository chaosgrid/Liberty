#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62bc3e1 _public_62bc3e1
#define public_62bc408 _public_62bc408
#define public_62bc40f _public_62bc40f

PROC_DECLARE(0x62bc3d0, internal_62bc3d0, public_62bc3d0);
extern "C" NAKED register_t __cdecl internal_62bc3d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        or edi, 0xFFFFFFFF
        cmp esi, ebx
        je public_62bc40f
        public_62bc3e1 : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x10]
        call public_6391dae
        mov ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        fild dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62bc408
        cmp ecx, edi
        jle public_62bc408
        mov edi, ecx
        public_62bc408 : nop
        add esi, 4
        cmp esi, ebx
        jne public_62bc3e1
        public_62bc40f : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bc3d0)
    }
}

#undef public_62bc3e1
#undef public_62bc408
#undef public_62bc40f
