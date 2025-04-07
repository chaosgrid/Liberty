#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62ad3ab _public_62ad3ab
#define public_62ad413 _public_62ad413

PROC_DECLARE(0x62ad340, internal_62ad340, public_62ad340);
extern "C" NAKED register_t __cdecl internal_62ad340()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_62ad413
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_62ad413
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
        jnp public_62ad413
        mov eax, dword ptr ds : [public_63fc324]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        add edi, 8
        test eax, eax
        jne public_62ad3ab
        call public_6391cf0
        mov dword ptr ds : [public_63fc324], eax
        public_62ad3ab : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [eax+0x88]
        fld dword ptr ds : [ecx+0x120]
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        fmul st, st(1)
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, esi
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call public_6285d60
        pop edi
        public_62ad413 : nop
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x62ad340)
    }
}

#undef public_62ad3ab
#undef public_62ad413
