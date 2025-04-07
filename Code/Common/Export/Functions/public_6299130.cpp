#include "Common-PCH.h"


#define public_6299156 _public_6299156
#define public_6299169 _public_6299169
#define public_6299182 _public_6299182
#define public_6299188 _public_6299188
#define public_62991ad _public_62991ad
#define public_62991c4 _public_62991c4
#define public_62991cc _public_62991cc
#define public_62991d0 _public_62991d0
#define public_62991ed _public_62991ed
#define public_6299204 _public_6299204
#define public_6299208 _public_6299208
#define public_6299269 _public_6299269

PROC_DECLARE(0x6299130, internal_6299130, public_6299130);
extern "C" NAKED register_t __cdecl internal_6299130()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x10]
        test al, al
        fsub dword ptr ds : [esi+0x14]
        jne public_6299169
        fcom dword ptr ds : [public_639d208]
        fnstsw ax
        test ah, 0x41
        jne public_6299156
        fsub dword ptr ds : [public_639c9e8]
        jmp public_6299169
        public_6299156 : nop
        fcom dword ptr ds : [public_639d2a0]
        fnstsw ax
        test ah, 5
        jp public_6299169
        fadd dword ptr ds : [public_639c9e8]
        public_6299169 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6299182
        mov ecx, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+0xA4]
        jmp public_6299188
        public_6299182 : nop
        fld dword ptr ds : [public_6399408]
        public_6299188 : nop
        fmul dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fld st(1)
        fabs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62991ad
        fld dword ptr ss : [esp+4]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        jmp public_62991d0
        public_62991ad : nop
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62991c4
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+4]
        jmp public_62991cc
        public_62991c4 : nop
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0xC]
        public_62991cc : nop
        fstp dword ptr ss : [esp+4]
        public_62991d0 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_639d208]
        fld dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_62991ed
        fsub dword ptr ds : [public_639c9e8]
        jmp public_6299204
        public_62991ed : nop
        fcomp dword ptr ds : [public_639d2a0]
        fnstsw ax
        test ah, 5
        jp public_6299208
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [public_639c9e8]
        public_6299204 : nop
        fstp dword ptr ss : [esp+4]
        public_6299208 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xC8]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xCC]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+4]
        fabs 
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jp public_6299269
        mov eax, 1
        mov byte ptr ds : [esi+0x18], al
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ecx
        ret 4
        public_6299269 : nop
        xor eax, eax
        mov byte ptr ds : [esi+0x18], al
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6299130)
    }
}

#undef public_6299156
#undef public_6299169
#undef public_6299182
#undef public_6299188
#undef public_62991ad
#undef public_62991c4
#undef public_62991cc
#undef public_62991d0
#undef public_62991ed
#undef public_6299204
#undef public_6299208
#undef public_6299269
