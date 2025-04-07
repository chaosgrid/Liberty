#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285da0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62bb82b _public_62bb82b
#define public_62bb8a5 _public_62bb8a5
#define public_62bb8e2 _public_62bb8e2

PROC_DECLARE(0x62bb7c0, internal_62bb7c0, public_62bb7c0);
extern "C" NAKED register_t __cdecl internal_62bb7c0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_62bb8e2
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_62bb8e2
        fld dword ptr ds : [esi+0x24]
        lea ebx, ds:[esi+0x1C]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x44
        fstp st(0)
        jnp public_62bb8e2
        mov eax, dword ptr ds : [public_63fc490]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        add edi, 8
        test eax, eax
        jne public_62bb82b
        call public_6391cf0
        mov dword ptr ds : [public_63fc490], eax
        public_62bb82b : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [eax+0x88]
        fmul dword ptr ds : [ecx+0x114]
        lea edi, ds:[eax+8]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x88]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x118]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x88]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_63fc490]
        test eax, eax
        fmul dword ptr ds : [ecx+0x11C]
        fstp dword ptr ss : [esp+0x14]
        jne public_62bb8a5
        call public_6391cf0
        mov dword ptr ds : [public_63fc490], eax
        public_62bb8a5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6285da0
        pop edi
        public_62bb8e2 : nop
        pop esi
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x62bb7c0)
    }
}

#undef public_62bb82b
#undef public_62bb8a5
#undef public_62bb8e2
