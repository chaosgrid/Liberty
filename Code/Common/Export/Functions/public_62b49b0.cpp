#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62b49d0 _public_62b49d0
#define public_62b49ef _public_62b49ef
#define public_62b49fc _public_62b49fc
#define public_62b4a08 _public_62b4a08
#define public_62b4a16 _public_62b4a16
#define public_62b4a30 _public_62b4a30
#define public_62b4a5f _public_62b4a5f
#define public_62b4a61 _public_62b4a61
#define public_62b4a6e _public_62b4a6e

PROC_DECLARE(0x62b49b0, internal_62b49b0, public_62b49b0);
extern "C" NAKED register_t __cdecl internal_62b49b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        je public_62b49fc
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        je public_62b49fc
        lea esp, ss:[esp]
        public_62b49d0 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b49ef
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b49ef
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov ebp, eax
        call dword ptr ds : [edx+0x20]
        cmp ebp, eax
        je public_62b4a08
        public_62b49ef : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b49d0
        public_62b49fc : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 4
        public_62b4a08 : nop
        cmp dword ptr ds : [esi], 0
        je public_62b4a16
        push 0
        mov ecx, esi
        call public_6341610
        public_62b4a16 : nop
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        mov dword ptr ss : [esp+0x14], 0x4CBEBC20
        je public_62b4a6e
        lea esp, ss:[esp]
        public_62b4a30 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4a61
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4a61
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x3F800000
        call dword ptr ds : [eax+0xD8]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b4a5f
        fstp dword ptr ss : [esp+0x14]
        jmp public_62b4a61
        public_62b4a5f : nop
        fstp st(0)
        public_62b4a61 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b4a30
        public_62b4a6e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x1CC], ecx
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b49b0)
    }
}

#undef public_62b49d0
#undef public_62b49ef
#undef public_62b49fc
#undef public_62b4a08
#undef public_62b4a16
#undef public_62b4a30
#undef public_62b4a5f
#undef public_62b4a61
#undef public_62b4a6e
