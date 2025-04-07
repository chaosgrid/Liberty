#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e59b0);

#define public_62e59c3 _public_62e59c3
#define public_62e59f2 _public_62e59f2
#define public_62e5a08 _public_62e5a08
#define public_62e5a21 _public_62e5a21
#define public_62e5a46 _public_62e5a46
#define public_62e5a5b _public_62e5a5b
#define public_62e5a74 _public_62e5a74

PROC_DECLARE(0x62e59b0, internal_62e59b0, public_62e59b0);
extern "C" NAKED register_t __cdecl internal_62e59b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        jne public_62e59c3
        fld dword ptr ds : [public_6399408]
        pop edi
        pop esi
        ret 
        public_62e59c3 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [eax+0xD8]
        fsub qword ptr ds : [public_6399410]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_62e59f2
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62e59f2 : nop
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_62e5a08
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        pop esi
        ret 
        public_62e5a08 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e5a21
        mov dword ptr ss : [esp+0x10], 0
        public_62e5a21 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5a46
        mov dword ptr ss : [esp+0xC], 0
        public_62e5a46 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5a5b
        mov dword ptr ss : [esp+0x14], 0
        public_62e5a5b : nop
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e5a74
        mov dword ptr ss : [esp+0xC], 0
        public_62e5a74 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [edx+0xCC]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [edx+0xD0]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62e59b0)
    }
}

#undef public_62e59c3
#undef public_62e59f2
#undef public_62e5a08
#undef public_62e5a21
#undef public_62e5a46
#undef public_62e5a5b
#undef public_62e5a74
