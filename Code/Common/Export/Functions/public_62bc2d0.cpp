#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bc2d0);

#define public_62bc2f0 _public_62bc2f0
#define public_62bc31d _public_62bc31d
#define public_62bc356 _public_62bc356
#define public_62bc35b _public_62bc35b

PROC_DECLARE(0x62bc2d0, internal_62bc2d0, public_62bc2d0);
extern "C" NAKED register_t __cdecl internal_62bc2d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor bl, bl
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_62bc2f0 : nop
        cmp esi, dword ptr ss : [esp+0x10]
        je public_62bc35b
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ecx+8]
        test al, al
        je public_62bc31d
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc356
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_62bc31d : nop
        test bl, bl
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62bc356
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62bc356
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc356
        mov eax, dword ptr ss : [esp+0x1C]
        mov bl, 1
        mov dword ptr ss : [ebp], eax
        public_62bc356 : nop
        add esi, 4
        jmp public_62bc2f0
        public_62bc35b : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62bc2d0)
    }
}

#undef public_62bc2f0
#undef public_62bc31d
#undef public_62bc356
#undef public_62bc35b
