#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4021b0);

#define public_4021d0 _public_4021d0
#define public_4021d8 _public_4021d8
#define public_4021f5 _public_4021f5
#define public_402204 _public_402204
#define public_40224f _public_40224f
#define public_402288 _public_402288
#define public_40229e _public_40229e

PROC_DECLARE(0x4021b0, internal_4021b0, public_4021b0);
extern "C" NAKED register_t __cdecl internal_4021b0()
{
    __asm
    {
        fld dword ptr ds : [public_5c7500]
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        test ebp, ebp
        push esi
        je public_402204
        cmp ebp, ecx
        je public_402204
        test ecx, ecx
        mov ebx, ecx
        je public_402204
        push edi
        nop 
        public_4021d0 : nop
        mov edi, ebx
        xor esi, esi
        mov edx, ebp
        sub edi, ebp
        public_4021d8 : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4021f5
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [edi+edx], eax
        inc esi
        add edx, 4
        cmp esi, 8
        jl public_4021d8
        public_4021f5 : nop
        mov dword ptr ds : [ebx+esi*4], 0xBF800000
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_4021d0
        pop edi
        public_402204 : nop
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, 0xFFFFFFFF
        je public_40229e
        mov bl, byte ptr ss : [esp+0x2C]
        fstp st(0)
        mov eax, dword ptr ds : [public_6101d4]
        xor edx, edx
        test bl, bl
        setne dl
        mov dword ptr ss : [esp+0x1C], eax
        mov al, byte ptr ds : [public_616470]
        test al, al
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0xBF800000
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], edx
        je public_40224f
        mov ecx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        public_40224f : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x4C]
        test eax, eax
        je public_402288
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset _public_401ed0 @0x402271*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401ed0
        push esi
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_402288 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push 0
        push esi
        push 0xFFFFFFFF
        call public_401ed0
        fld dword ptr ss : [esp+0x20]
        add esp, 0x10
        public_40229e : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x4021b0)
    }
}

#undef public_4021d0
#undef public_4021d8
#undef public_4021f5
#undef public_402204
#undef public_40224f
#undef public_402288
#undef public_40229e
