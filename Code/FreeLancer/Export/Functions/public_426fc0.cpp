#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426fc0);

#define public_426fd7 _public_426fd7
#define public_426fe2 _public_426fe2
#define public_426fef _public_426fef
#define public_427000 _public_427000
#define public_42700c _public_42700c
#define public_427015 _public_427015

PROC_DECLARE(0x426fc0, internal_426fc0, public_426fc0);
extern "C" NAKED register_t __cdecl internal_426fc0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x59]
        test al, al
        jne public_426fef
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        jne public_426fe2
        public_426fd7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        je public_426fd7
        public_426fe2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_426fef : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_42700c
        lea esp, ss:[esp]
        public_427000 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_427000
        public_42700c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_427015
        mov dword ptr ds : [ecx], eax
        public_427015 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x426fc0)
    }
}

#undef public_426fd7
#undef public_426fe2
#undef public_426fef
#undef public_427000
#undef public_42700c
#undef public_427015
