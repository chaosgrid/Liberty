#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4083c0);

#define public_4083d7 _public_4083d7
#define public_4083e2 _public_4083e2
#define public_4083ef _public_4083ef
#define public_408400 _public_408400
#define public_40840c _public_40840c
#define public_408415 _public_408415

PROC_DECLARE(0x4083c0, internal_4083c0, public_4083c0);
extern "C" NAKED register_t __cdecl internal_4083c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x11]
        test al, al
        jne public_4083ef
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_4083e2
        public_4083d7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_4083d7
        public_4083e2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_4083ef : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_40840c
        lea esp, ss:[esp]
        public_408400 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_408400
        public_40840c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_408415
        mov dword ptr ds : [ecx], eax
        public_408415 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4083c0)
    }
}

#undef public_4083d7
#undef public_4083e2
#undef public_4083ef
#undef public_408400
#undef public_40840c
#undef public_408415
